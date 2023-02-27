/***********************************
/Name: SeismicEvent.h
/Project:  1
/Writen By:  John Kallis
/Created: 2/17/2015
/Section:  02
/Email:  jkallis1@umbc.edu
/Description: 
************************************/
#ifndef SEISMICEVENT_H
#define SEISMICEVENT_H

#include <iostream>
#include <string>


class SeismicDataCollector;

//#include "SeismicDataCollector.h"
using namespace std;

class SeismicEvent{
public:

	//----------------------------------------------
	//Name: SeismicEvent (defualt constructor)
	//PreCondition: None
	//Postconditions: None
	//----------------------------------------------
	SeismicEvent();

	//----------------------------------------------
	//Name: getTime
	//PreCondition: None
	//Postconditions: return m_time
	//----------------------------------------------
	string getTime() const;

	//----------------------------------------------
	//Name: getLatitude
	//PreCondition: None
	//Postconditions: returns m_latitude
	//----------------------------------------------
	float getLatitude() const;

	//----------------------------------------------
	//Name: getLongitude
	//PreCondition: None
	//Postconditions: returns m_longitude
	//----------------------------------------------
	float getLongitude() const;

	//----------------------------------------------
	//Name: getDepth
	//PreCondition: None
	//Postconditions: returns m_depth
	//----------------------------------------------
	float getDepth() const;

	//----------------------------------------------
	//Name: getMag
	//PreCondition: None
	//Postconditions: returns m_mag
	//----------------------------------------------
	float getMag() const;

	//----------------------------------------------
	//Name: getMagType
	//PreCondition: None
	//Postconditions: returns m_magtype
	//----------------------------------------------
	string getMagType() const;

	//----------------------------------------------
	//Name: getDmin
	//PreCondition: None
	//Postconditions: returns m_dmin
	//----------------------------------------------
	float getDmin() const;

	//----------------------------------------------
	//Name: getPlace
	//PreCondition: None
	//Postconditions: returns m_place
	//----------------------------------------------
	string getPlace() const;

	//----------------------------------------------
	//Name: getType
	//PreCondition: None
	//Postconditions: returns m_type
	//----------------------------------------------
	string getType() const;

	//----------------------------------------------
	//Name: setTime
	//PreCondition: None
	//Postconditions: None
	//----------------------------------------------
	void setTime(string NewTime);

	//----------------------------------------------
	//Name: setLatitude
	//PreCondition: None
	//Postconditions: None
	//----------------------------------------------
	void setLatitude(float NewLat);

	//----------------------------------------------
	//Name: setLongitude
	//PreCondition: None
	//Postconditions: None
	//----------------------------------------------
	void setLongitude(float NewLong);

	//----------------------------------------------
	//Name: setDepth
	//PreCondition: None
	//Postconditions: None
	//----------------------------------------------
	void setDepth(float NewDepth);

	//----------------------------------------------
	//Name: setMag
	//PreCondition: None
	//Postconditions: None
	//----------------------------------------------
	void setMag(float NewMag);

	//----------------------------------------------
	//Name: setMagType
	//PreCondition: None
	//Postconditions: None
	//----------------------------------------------
	void setMagType(string NewMagType);

	//----------------------------------------------
	//Name: setDmin
	//PreCondition: None
	//Postconditions: None
	//----------------------------------------------
	void setDmin(float NewDmin);

	//----------------------------------------------
	//Name: setPlace
	//PreCondition: None
	//Postconditions: None
	//----------------------------------------------
	void setPlace(string NewPlace);

	//----------------------------------------------
	//Name: setType
	//PreCondition: None
	//Postconditions: None
	//----------------------------------------------
	void setType(string NewType);

	

protected:
	string m_time; 
	float m_latitude;
	float m_longitude;
	float m_depth;
	float m_mag;
	string m_magtype;
	float m_dmin;
	string m_place;
	string m_type;

};

//----------------------------------------------
	//Name: operator << overload
	//PreCondition: None
	//Postconditions: returns the stringstream
	//----------------------------------------------
ostream& operator << (ostream& out, const SeismicEvent& seismicevent);
	
#endif //SEISMICEVENT_H