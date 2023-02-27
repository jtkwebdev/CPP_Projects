/***********************************
/Name: SeismicDataCollector.h
/Project:  1
/Writen By:  John Kallis
/Created: 2/17/2015
/Section:  02
/Email:  jkallis1@umbc.edu
/Description: defines the SeismicDataCollector class
************************************/
#ifndef SEISMICDATACOLLECTOR_H
#define SEISMICDATACOLLECTOR_H

#include <string>
#include <vector>

//#include "SeismicEvent.h"
#include "MiningExplosion.h"
#include "QuarryBlast.h"
#include "EarthQuake.h"
#include "AcousticNoise.h"
#include "Explosion.h"
#include "AnthropogenicEvent.h"


using namespace std;
class SeismicEvent;

class SeismicDataCollector {

public:
	//----------------------------------------------
	//Name: SeismicDataCollector (defualt constructor)
	//PreCondition: None
	//Postconditions: None
	//----------------------------------------------
	SeismicDataCollector();

	//----------------------------------------------
	//Name: readFile
	//PreCondition: a readable file is passed in
	//Postconditions: the data from the file is stored
	//		into a vector and parsed then outputed to 
	//		the designated file.
	//----------------------------------------------
	void readFile( string fileName );


	//I couldn't find a use for these funcions

	//----------------------------------------------
	//Name: getfileName
	//PreCondition: None
	//Postconditions: returns m_filename
	//----------------------------------------------
	//string getFileName();

	//----------------------------------------------
	//Name: setFileName
	//PreCondition: a readable file is entered
	//Postconditions: returns true if the file can be opened
	//----------------------------------------------
	//bool setFileName(string fileName);

	//----------------------------------------------
	//Name: writeResultingData
	//PreCondition: None
	//Postconditions: writes the data collected back 
	//			into the respective files
	//----------------------------------------------
	//void writeResultingData(SeismicEvent event);

//private data members
private:	
	
	vector<AcousticNoise> acoustic_noise;
	vector<AnthropogenicEvent> anthropogenic_event;
	vector<Explosion> explosion;
	vector<EarthQuake> earthquake;
	vector<MiningExplosion> mining_explosion;
	vector<QuarryBlast> quarry_blast;

	
};

#endif //SEISMICDATACOLLECTOR_H