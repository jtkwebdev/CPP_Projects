#include <iostream>
#include "SeismicDataCollector.h"


using namespace std;


/*******************************
//Name: printGreeting
//PreConditions: None
//PostConditions: None
//prints the greeting to thes screen
********************************/
void printGreeting ()
{
	cout<<endl;
	cout << "Welcome to the organizer of seizmic events." << endl;
	cout<<endl;
	cout << "writen by John Kallis" << endl;
	cout << "for project 1, CMSC 341-02, Lupoli" << endl;
	cout<<endl;
	cout << "This program will take in a file of seismic event"<<endl;
	cout << "data and organize it by event type and output the" <<endl;
	cout << "new data files organized by event type" << endl;
	cout<<endl;
}

int main (  int argc, char *argv[] )
{
	//calls the greeting and prints it to the screen
	printGreeting ();

	
	//converts the command line argument from char* to string
	//to be passed into readFile in accordance with the UML diagram
	string inFile;
	inFile = argv[1];

	//creates an instance of SeismicDataCollector
	SeismicDataCollector data;

	//calls the method readFile for
	//the SeismicDataCollector object
	data.readFile ( inFile );

	
	return 0;
}

