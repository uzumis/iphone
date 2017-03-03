#include <iostream>
#include "album.h"
using std::cout;
using std::endl;
using std::ostream;

// Public

ostream &operator<<(ostream &output, const Game &game) {
	output << "Music(" << music.name << ")";

	return output;
}

bool Music::operator== (const Music &other) const {
	return this->name == other.name;
}

// Constructor
Music::Music(const string &name) {
	this->name = name;
};

/* // Destructor */
/* Music::~Music() { */
/* 	cout << "Cleaning Up " << (*this) << endl; */
/* } */

const Music& Music::operator=(const Music &right) {
	this->name = right.name;
	return *this;
}
