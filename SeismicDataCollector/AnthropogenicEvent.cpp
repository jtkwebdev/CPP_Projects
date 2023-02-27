/***********************************
/Name: AnthropogenicEvent.cpp
/Project:  1
/Writen By:  John Kallis
/Created: 2/17/2015
/Section:  02
/Email:  jkallis1@umbc.edu
/Description: Implements the AnthropogenicEvent class
************************************/
#include <iostream>
#include "AnthropogenicEvent.h"

using namespace std;

AnthropogenicEvent::AnthropogenicEvent() {}
AnthropogenicEvent::~AnthropogenicEvent() {}

ostream& operator << (ostream& out, const AnthropogenicEvent& anthropogenicevent){
	
	out << "Type --> " << anthropogenicevent.getType()<<endl
	<< static_cast<const SeismicEvent &>(anthropogenicevent) << endl;
	return out;
}