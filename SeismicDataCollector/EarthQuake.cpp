/***********************************
/Name: EarthQuake.cpp
/Project:  1
/Writen By:  John Kallis
/Created: 2/17/2015
/Section:  02
/Email:  jkallis1@umbc.edu
/Description: implements the EarthQuake class
************************************/
#include <iostream>
#include "EarthQuake.h"

using namespace std;

EarthQuake::EarthQuake(){}

EarthQuake::~EarthQuake() {}


ostream& operator << (ostream& out, const EarthQuake& earthquake){

	out << "Type --> " << earthquake.getType()<<endl
	<< static_cast<const SeismicEvent &>(earthquake)
	<<"MagType ---> "<<earthquake.getMagType()<<endl
	<<"Depth--> "<< earthquake.getDepth() << endl;
	 
	return out;
}