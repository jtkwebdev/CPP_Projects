/***********************************
/Name: MiningExplosion.cpp
/Project:  1
/Writen By:  John Kallis
/Created: 2/17/2015
/Section:  02
/Email:  jkallis1@umbc.edu
/Description: implements the MiningExplosion class
************************************/
#include <iostream>
#include "MiningExplosion.h"

using namespace std;

MiningExplosion::MiningExplosion() {}
MiningExplosion::~MiningExplosion() {}

ostream& operator << (ostream& out, const MiningExplosion& miningexplosion){
	
	out << "Type --> " << miningexplosion.getType()<<endl
	<< static_cast<const SeismicEvent &>(miningexplosion) << endl;
	
	return out;
}