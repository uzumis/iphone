#include <iostream>
#include <string>
#include "device.h"
#include "console.h"
#include "iphone.h"
using std::cout;
using std::endl;
using std::string;

int main() {
	// Static
	cout << "This iPhone was made by Apple Company in " << Ps4::showPublishmentYear() << endl << endl;
	// Constructor
	Device myDevice(false, false);
	Console myMobile("Android", 10, 4, 0);
	iphone myiphone(2016);

	// Default construtor
	Device defaultDevice;
	Mobile defaultMobile;
	iphone defaultiphone;

	// Copy constructor
	Device copyDevice = myDevice;
	Mobile copyMobile = myMobile;
	iphone copyiphone = myiphone;

	cout << endl << "Constructors:" << endl << endl;

	cout << "Constructor :: " << myDevice << endl;
	cout << "Constructor :: " << myMobile << endl;
	cout << "Constructor :: " << myiphone << endl;
	cout << "Default     :: " << defaultDevice << endl;
	cout << "Default     :: " << defaultMobile << endl;
	cout << "Default     :: " << defaultiphone << endl;
	cout << "Copy        :: " << copyDevice << endl;
	cout << "Copy        :: " << copyMobile << endl;
	cout << "Copy        :: " << copyiphone << endl;

	cout << endl;

	myiphone.addMusic("music1");
	myiphone.addMusic("music2");
	myiphone.addMusic("music3");

	myiphone.listMusics();
	cout << endl;

	myiphone.addMusic("music4");
	myiphone.addMusic("music5");

	myiphone.listMusics();

	// From Device
	myiphone.plugBatterySupply();

	// Virtual on Device
	myiphone.turnOn();
	myiphone.turnOff();

	cout << endl;
