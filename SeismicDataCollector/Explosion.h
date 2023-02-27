/***********************************
/Name: Explosion.h
/Project:  1
/Writen By:  John Kallis
/Created: 2/17/2015
/Section:  02
/Email:  jkallis1@umbc.edu
/Description: defines the Explosion class
************************************/
#ifndef EXPLOSION_H
#define EXPLOSION_H

#include <string>
#include "SeismicEvent.h"
using namespace std;

//inherits from the base class Seismicevent
class Explosion : public SeismicEvent {
public:
	/*****************************
	// Name: Explosion (defualt constructor)
	// PreConditions: None
	// PostConditions: None
	******************************/
	Explosion();
	/*****************************
	// Name: ~Explosion (destructor)
	// PreConditions: None
	// PostConditions: None
	******************************/
	~Explosion();
};
/*****************************
// Name: operator << overload
// PreConditions: None
// PostConditions: returns the ostream for printing
******************************/
ostream& operator << (ostream& out, const Explosion& explosion);

#endif //EXPLOSION_H
