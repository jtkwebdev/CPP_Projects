/***********************************
/Name: MiningExplosion.h
/Project:  1
/Writen By:  John Kallis
/Created: 2/17/2015
/Section:  02
/Email:  jkallis1@umbc.edu
/Description: defines the MiningExplosion class
************************************/
#ifndef MININGEXPLOSION_H
#define MININGEXPLOSION_H

#include <string>
#include "SeismicEvent.h"
using namespace std;

class MiningExplosion : public SeismicEvent {
public:
	/*****************************
	// Name: MiningExplosion (defualt contructor)
	// PreConditions: None
	// PostConditions: None
	******************************/
	MiningExplosion();
	/*****************************
	// Name: ~MiningExplosion (destructor)
	// PreConditions: None
	// PostConditions: None
	******************************/	
	~MiningExplosion();
};

/*****************************
// Name: operator << overload
// PreConditions: None
// PostConditions: returns the ostream for printing
******************************/
ostream& operator << (ostream& out, const MiningExplosion& miningexplosion);

#endif //MININGEXPLOSION_H