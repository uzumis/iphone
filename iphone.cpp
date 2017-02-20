#include <iostream>
#include "iphone.h"
using std::cout;
using std::endl;

// Public

iphone::iphone() {
	setYear(2017);
	setupMusicList(0);
};
iphone::iphone(int year, int gameCount) {
	setYear(year);
	setupMusicList(musicCount);
};

iphone::~iphone() {
	delete [] this->musicList;
}

void iphone::addMusic(const string &musicName) {
	string *aux = new string[this->musicCount];

	for (int i = 0; i < this->musicCount; i++)
		aux[i] = this->musicList[i];

	delete [] this->musicList;

	this->musicList = new string[++this->musicCount];

	for (int i = 0; i < (this->musicCount - 1); i++)
		this->musicCount [i] = aux[i];

	musicList[this->musicCount - 1] = musicName;

	delete [] aux;
}

void iphone::listMusics() {
	for (int i = 0; i < this->musicCount; i++)
		cout << "[" << i << "] " << this->musicList[i] << endl;
}

// Private

void iphone::setupMusicList(int size) {
	if (size < 1) {
		size = 0;
	}

	this->musicList = new string[size];
	this->musicCount = size;

	cout << "Siri is analyzing your Library. Your iTunes Music Library started with " << size << " albums" << endl;
}

void iphoe::setYear(int y) {
	if (y < publishmentYear) {
		cout << "Invalid year" << endl;
		this->setYear(1941);
	} else {
		year = y;
	}
}
void ::setupDefaultConsoleData() {
	this->company = "Apple";
	this->version = 4;
	this->iTuneslibrary = 0;
	this->numMusics = 0;
}
