/***********************************
/Name: Explosion.cpp
/Project:  1
/Writen By:  John Kallis
/Created: 2/17/2015
/Section:  02
/Email:  jkallis1@umbc.edu
/Description: implements the Explosion class
************************************/
#include <iostream>
#include "Explosion.h"

using namespace std;

Explosion::Explosion(){}

Explosion::~Explosion() {}

ostream& operator << (ostream& out, const Explosion& explosion){
	
	out << "Type --> " << explosion.getType()<<endl
	<< static_cast<const SeismicEvent &>(explosion)
	<<"MagType ---> "<<explosion.getMagType()<< endl;


	
	return out;
}