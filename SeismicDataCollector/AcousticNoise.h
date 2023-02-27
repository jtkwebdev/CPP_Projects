/***********************************
/Name: AcousticNoise.h
/Project:  1
/Writen By:  John Kallis
/Created: 2/17/2015
/Section:  02
/Email:  jkallis1@umbc.edu
/Description: Defines the AcousticNoise Class and overloads <<
************************************/
#ifndef ACOUSTICNOISE_H
#define ACOUSITCNOISE_H

#include <string>
#include "SeismicEvent.h"
using namespace std;

// AcousticNoise inherits from it's Base class SeismicEvent
class AcousticNoise : public SeismicEvent {
	
public:

/*****************************
// Name: AcousticeNoise (defualt constructor)
// PreConditions: None
// PostConditions: None
******************************/
AcousticNoise();

/*****************************
// Name: AcousticeNoise (destructor)
// PreConditions: None
// PostConditions: None
******************************/
~AcousticNoise();
};

/*****************************
// Name: operator << overload
// PreConditions: None
// PostConditions: returns the ostream for printing
******************************/
ostream& operator << (ostream& out, const AcousticNoise& acousticnoise);

#endif //ACOUSTICNOISE_H