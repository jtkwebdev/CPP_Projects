/***********************************
/Name: AcousticNoise.cpp
/Project:  1
/Writen By:  John Kallis
/Created: 2/17/2015
/Section:  02
/Email:  jkallis1@umbc.edu
/Description: Implements the AcousticNoise Class
************************************/
#include <iostream>
#include "AcousticNoise.h"

using namespace std;


AcousticNoise::AcousticNoise(){}


AcousticNoise::~AcousticNoise(){}

ostream& operator << (ostream& out, const AcousticNoise& acousticnoise){
	
	out << "Type --> " << acousticnoise.getType()<<endl
	<< static_cast<const SeismicEvent &>(acousticnoise)
	<<"MagType ---> "<<acousticnoise.getMagType()<< endl;
	
	return out;
}
