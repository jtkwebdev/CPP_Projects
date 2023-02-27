/***********************************
/Name: QuarryBlast.cpp
/Project:  1
/Writen By:  John Kallis
/Created: 2/17/2015
/Section:  02
/Email:  jkallis1@umbc.edu
/Description: Implements the QuarryBlast class
************************************/
#include <iostream>
#include "QuarryBlast.h"

using namespace std;

QuarryBlast::QuarryBlast(){}
QuarryBlast::~QuarryBlast() {}

ostream& operator << (ostream& out, const QuarryBlast& quarryblast){
	
	out << "Type --> " << quarryblast.getType()<<endl
	<< static_cast<const SeismicEvent &>(quarryblast) << endl;

	return out;
}