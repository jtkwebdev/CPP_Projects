/***********************************
/Name: SeismicDataCollector.cpp
/Project:  1
/Writen By:  John Kallis
/Created: 2/17/2015
/Section:  02
/Email:  jkallis1@umbc.edu
/Description: implements the SeismicDataCollector class
	stores types of SeismicEvents in dynamic arrays
	opens and parses the data file
	places the data into the correct dynamic array by type
	writes the colleced data into respective files
************************************/
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

#include "SeismicDataCollector.h"




using namespace std;

SeismicDataCollector::SeismicDataCollector(){}

void SeismicDataCollector::readFile(string fileName)
{
	const char* csFileName = fileName.c_str();
		
	ifstream inputFile ( csFileName );

	if( inputFile.is_open() )
	{
		string holdLine;
		
		int i=0;

		while ( getline(inputFile, holdLine, '\n') )
		{	
			int firstFind=0;
			int lastFind=0;

			
			if ( !(i == 0) )
			{
				firstFind = holdLine.find_first_of(" \" ");
				lastFind = holdLine.find_last_of("\"");

				string place;
				place = holdLine.substr( firstFind + 1 , (lastFind - firstFind-1) );

				holdLine.replace( firstFind + 1, (lastFind - firstFind - 1) , "");
				holdLine.append(",");

				stringstream stringHolder(holdLine);

				string holdData;

				vector<string> eventData;


				while ( getline(stringHolder, holdData, ',' ) )

				{
					eventData.push_back( holdData );
				}

				istringstream latHolder(eventData[1]);
				float latitude;
				latHolder >> latitude;

				istringstream longHolder(eventData[2]);
				float longitude;
				longHolder >> longitude;

				istringstream depthHolder(eventData[3]);
				float depth;
				depthHolder >> depth;

				istringstream magHolder(eventData[4]);
				float mag;
				magHolder >> mag;

				istringstream dminHolder(eventData[8]);
				float dmin;
				dminHolder >> dmin;

				

				//EVENT OBJECTS CREATED

			 	if ( eventData[14] == "acoustic noise" ) 
			 	{
			 		AcousticNoise noise;
			 		noise.setTime( eventData[0] );
			 		noise.setLatitude( latitude );
			 		noise.setLongitude( longitude );
			 		noise.setMag( mag );
			 		noise.setMagType( eventData[5] );
			 		noise.setPlace( place );
			 		noise.setType( eventData[14] );

	
			 		acoustic_noise.push_back( noise ); 
			 		
			 		
			 	}

			 	 else if ( eventData[14] == "anthropogenic event" )
			 	{
			 		AnthropogenicEvent event;
			 		event.setTime( eventData[0] );
			 		event.setLatitude( latitude );
			 		event.setLongitude( longitude );
				 	event.setMag( mag );
				 	event.setMagType( eventData[5] );
				 	event.setPlace( place );
				 	event.setType( eventData[14] );
	
				 	anthropogenic_event.push_back( event ); 
				 }
		
				 else if ( eventData[14] == "explosion" )
				 {
				 	Explosion explode;
				 	explode.setTime( eventData[0] );
				 	explode.setLatitude( latitude );
				 	explode.setLongitude( longitude );
				 	explode.setMag( mag );
				 	explode.setMagType( eventData[5] );
				 	explode.setPlace( place );
				 	explode.setType( eventData[14] );
	
				 	explosion.push_back( explode );
				  
				 }
				  else if (eventData[14]=="earthquake")
				 {
				 	EarthQuake quake;
				 	quake.setTime( eventData[0] );
				 	quake.setLatitude( latitude );
				 	quake.setLongitude( longitude );
				 	quake.setMag( mag );
				 	quake.setDepth( depth );
				 	quake.setMagType( eventData[5] );
				 	quake.setPlace( place );
				 	quake.setType( eventData[14] );
	
				 	earthquake.push_back( quake );
				 
				 }
				  else if ( eventData[14] == "mining explosion" )
				 {
				 	MiningExplosion explosion;
				 	explosion.setTime( eventData[0] );
				 	explosion.setLatitude( latitude );
				 	explosion.setLongitude( longitude );
				 	explosion.setMag( mag );
				 	explosion.setMagType( eventData[5] );
				 	explosion.setPlace( place );
				 	explosion.setType( eventData[14] );

				 	mining_explosion.push_back( explosion ); 
				 }

				  else if ( eventData[14] == "quarry blast" )
				 {
				 	QuarryBlast blast;
				 	blast.setTime( eventData[0] );
				 	blast.setLatitude( latitude );
				 	blast.setLongitude( longitude );
				 	blast.setMag( mag );
				 	blast.setMagType( eventData[5] );
				 	blast.setPlace( place );
				 	blast.setType( eventData[14] );

				 	quarry_blast.push_back( blast ); 

			 	}

			 	else 
			 	{
			 		cerr<<"error"<<endl;
			 		
			 	}
			 } // close if
			 else{;}
			 i++;
			 
		}//close while
		
	}//close if
	else
	{
		cout<<"file input error.."<<endl;
	}

	//closes the file we opened to input from
	inputFile.close();


//DATA OUTPUT BELOW

	if ( anthropogenic_event.size() > 0 )
	{

		ofstream AnthropogenicEventOutput ("AnthropogenicEventResults.csv");
		for (unsigned int i = 0; i < anthropogenic_event.size(); ++i)
		{
			
			if ( AnthropogenicEventOutput.is_open() )
			{
				if (anthropogenic_event[i].getType()=="anthropogenic event")
				{
					AnthropogenicEventOutput << anthropogenic_event[i] << endl;	
				}
		
			}
			else
			{
				cerr << "unable to open file" << endl;
			}
		
			
		
		}//close AnthropogenicEvent for loop

		AnthropogenicEventOutput.close();

	}//close AnthropogenicEvent if


	if ( acoustic_noise.size() > 0 )
	{

		ofstream AcousticNoiseOutput ("AcousticNoiseResults.csv");
		for (unsigned int i = 0; i < acoustic_noise.size(); ++i)
		{
			
			if (AcousticNoiseOutput.is_open() )
			{
				if (acoustic_noise[i].getType()=="acoustic noise")
				{
				AcousticNoiseOutput << acoustic_noise[i] << endl;	
				}
		
			}
			else
			{
				cerr << "unable to open file" << endl;
			}
		
			
		
		}//close acoustic_noise for loop

	AcousticNoiseOutput.close();

	}//close acoustic_noise if

	if ( earthquake.size() > 0 )
	{

		ofstream EarthQuakeOutput ("EarthQuakeResults.csv");
		for (unsigned int i = 0; i < earthquake.size(); ++i)
		{
			
			if ( EarthQuakeOutput.is_open() )
			{
				if (earthquake[i].getType()=="earthquake")
				{
					EarthQuakeOutput << earthquake[i] << endl;	
				}
		
			}
			else
			{
				cerr << "unable to open file" << endl;
			}
		
			
		
		}//close earthquake for loop

		EarthQuakeOutput.close();

	}//close earthquake if




	if ( explosion.size() > 0 )
	{

		ofstream ExplosionOutput ("ExplosionResults.csv");
		for (unsigned int i = 0; i < explosion.size(); ++i)
		{
			
			if ( ExplosionOutput.is_open() )
			{
				if (explosion[i].getType()=="explosion")
				{
					ExplosionOutput << explosion[i] << endl;	
				}
		
			}
			else
			{
				cerr << "unable to open file" << endl;
			}
		
			
		
		}//close explosion for loop

		ExplosionOutput.close();

	}//close explosion if



	if ( mining_explosion.size() > 0 )
	{

		ofstream MiningExplosionOutput ("MiningExplosionResults.csv");
		for (unsigned int i = 0; i < mining_explosion.size(); ++i)
		{
			
			if ( MiningExplosionOutput.is_open() )
			{
				if (mining_explosion[i].getType()=="mining explosion")
				{
					MiningExplosionOutput << mining_explosion[i] << endl;	
				}
		
			}
			else
			{
				cerr << "unable to open file" << endl;
			}
		
			
		
		}//close mining_explosion for loop

		MiningExplosionOutput.close();

	}//close mining_explosion if


	if ( quarry_blast.size() > 0 )
	{

		ofstream QuarryBlastOutput ("QuarryBlastResults.csv");
		for (unsigned int i = 0; i < quarry_blast.size(); ++i)
		{
			
			if ( QuarryBlastOutput.is_open() )
			{
				if (quarry_blast[i].getType()=="quarry blast")
				{
					QuarryBlastOutput << quarry_blast[i] << endl;	
				}
		
			}
			else
			{
				cerr << "unable to open file" << endl;
			}
		
			
		
		}//close quarry_blast for loop

		QuarryBlastOutput.close();

	}//close quarry_blast if




}//close readFile()




