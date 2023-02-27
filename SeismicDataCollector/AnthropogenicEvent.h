/***********************************
/Name: AnthropogenicEvent.h
/Project:  1
/Writen By:  John Kallis
/Created: 2/17/2015
/Section:  02
/Email:  jkallis1@umbc.edu
/Description: defines the AnthropogenicEvent class
************************************/
#ifndef ANTHROPOGENICEVENT_H
#define ANTHROPOGENICEVENT_H

#include <string>
#include "SeismicEvent.h"
using namespace std;

//inherits from the base class SeismicEvent
class AnthropogenicEvent : public SeismicEvent {
public:

/*****************************
// Name: AnthropogenicEvent (defualt constructor)
// PreConditions: None
// PostConditions: None
******************************/
AnthropogenicEvent();

/*****************************
// Name: AnthropogenicEvent (destructor)
// PreConditions: None
// PostConditions: None
******************************/
~AnthropogenicEvent();

};

/*****************************
// Name: operator << overload
// PreConditions: None
// PostConditions: returns the ostream for printing
******************************/
ostream& operator << (ostream& out, const AnthropogenicEvent& anthropogenicevent);

#endif //ANTHROPOGENICEVENT_H