/***********************************
/Name: QuarryBlast.h
/Project:  1
/Writen By:  John Kallis
/Created: 2/17/2015
/Section:  02
/Email:  jkallis1@umbc.edu
/Description: defines the QuarryBlast class
************************************/
#ifndef	QUARRYBLAST_H
#define QUARRYBLAST_H

#include <string>
#include "SeismicEvent.h"

using namespace std;

//inherits from the base class SeismicEvent
class QuarryBlast : public SeismicEvent {
	
public:

	/*****************************
	// Name: QuarryBlast (defualt constructor)
	// PreConditions: None
	// PostConditions: None
	******************************/
	QuarryBlast();

	/*****************************
	// Name: ~QuarryBlast (deconstructor)
	// PreConditions: None
	// PostConditions: None
	******************************/
	~QuarryBlast();
};

/*****************************
// Name: operator << overload
// PreConditions: None
// PostConditions: returns the ostream for printing
******************************/
ostream& operator << (ostream& out, const QuarryBlast& quarryblast);

#endif //QUARRYBLAST_H