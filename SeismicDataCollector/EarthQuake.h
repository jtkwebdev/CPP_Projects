/***********************************
/Name: EarthQuake.h
/Project:  1
/Writen By:  John Kallis
/Created: 2/17/2015
/Section:  02
/Email:  jkallis1@umbc.edu
/Description: defines the EarthQuake class
************************************/
#ifndef EARTHQUAKE_H
#define EARTHQUAKE_H

#include <string>
#include "SeismicEvent.h"

//inherits from the base class SeismicEvent
class EarthQuake : public SeismicEvent {
public:

	/**************************
	// Name: EarthQuake (defualt constructor)
	// PreConditions: none
	// PostConditions: none
	**************************/
	EarthQuake();

	/**************************
	// Name: ~EarthQuake (deconstructor)
	// PreConditions: none
	// PostConditions: none
	**************************/
	~EarthQuake();


};

/*****************************
// Name: operator << overload
// PreConditions: None
// PostConditions: returns the ostream for printing
******************************/

ostream& operator << (ostream& out, const EarthQuake& earthquake);

#endif //EARTHQUAKE_H