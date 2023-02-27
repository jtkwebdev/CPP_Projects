/***********************************
/Name:SeismicEvent.cpp 
/Project:  1
/Writen By:  John Kallis
/Created: 2/17/2015
/Section:  02
/Email:  jkallis1@umbc.edu
/Description: Implements the SeismicEvent class
	This is the Super Class to the types of events
	this class contains sets and gets for the data
	that is imported in the SeismicDataCollector class
************************************/
#include <iostream>
#include <string>

#include "SeismicEvent.h"



using namespace std;

SeismicEvent::SeismicEvent(){}

string SeismicEvent::getTime() const{
	return m_time;
}
float SeismicEvent::getLatitude() const{
	return m_latitude;
}
float SeismicEvent::getLongitude() const{
	return m_longitude;
}
float SeismicEvent::getDepth() const {
	return m_depth;
}
float SeismicEvent::getMag() const{
	return m_mag;
}
string SeismicEvent::getMagType() const{
	return m_magtype;
}
float SeismicEvent::getDmin() const{
	return m_dmin;
}
string SeismicEvent::getPlace() const{
	return m_place;
}
string SeismicEvent::getType() const{
	return m_type;
}
void SeismicEvent::setTime(string NewTime){
	m_time=NewTime;
}
void SeismicEvent::setLatitude(float NewLat){
	m_latitude=NewLat;
}
void SeismicEvent::setLongitude(float NewLong){
	m_longitude = NewLong;
}
void SeismicEvent::setDepth(float NewDepth){
	m_depth = NewDepth;
}
void SeismicEvent::setMag(float NewMag){
	m_mag = NewMag;
}
//enums are used to assign the MagType
void SeismicEvent::setMagType(string NewMagType){
	//enum enum_MagType { ML = 0, ML = 1, MB_LG = 2};
	//MagType_t m_magType;
	//BELOW NEEDS FIXING
	//if(NewMagType == "md"){ m_magtype=0;}
	//else if (NewMagType == "ml") {m_magtype = 1;}
	m_magtype = NewMagType;
	//else if (NewMagType == "mb lg") {m_magtype = 2;}
}
void SeismicEvent::setDmin(float NewDmin){
	m_dmin=NewDmin;
}
void SeismicEvent::setPlace(string NewPlace){
	m_place=NewPlace;
}

//enums are used to assign the Type
void SeismicEvent::setType(string NewType)

{
	m_type=NewType;
	
	
	 /*
	if (NewType=="acoustic noise") {m_type = 0;}
	else if (NewType=="antropogenic event") {m_type = 1;}
	else if (NewType=="earthquake") {m_type = 2;}
	else if (NewType=="explosion") {m_type = 3;}
	else if (NewType=="mining explosion") {m_type = 4;}
	else if (NewType=="quarry blast"){m_type = 5;}
	else{cerr<<"ERROR!!!!!"<<endl;}*/
	
}


ostream& operator << (ostream& out, const SeismicEvent &seismicevent){
	

	out << "Time --> "<< seismicevent.getTime() << endl
	<< "Latitude --> " << seismicevent.getLatitude() <<endl
	<< "Longitude --> " << seismicevent.getLongitude() << endl
	<<"Mag --> "<< seismicevent.getMag() << endl 
	<< "Place --> " << seismicevent.getPlace() <<endl ;
	return out;

}
