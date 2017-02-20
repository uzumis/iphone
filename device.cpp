#include <iostream>
#include "device.h"
using std::cout;
using std::endl;
using std::ostream;

// Public

ostream &operator<<(ostream &output, const Device &device) {
	output << (device.isOn ? "On" : "Off") << " Device";

	return output;
}

bool Device::operator== (const Device &other) const {
	if (this->hasBatterySupply != other.hasBatterySupply)
		return false;
	if (this->isOn != other.isOn)
		return false;

	return true;
}

// Default constructor
Device::Device() {
	this->isOn = false;
	this->hasBatterySupply = false;
};

// Constructor
Device::Device(bool isOn, bool hasPowerSupply) {
	this->isOn = isOn;
	this->hasPowerBattery = hasBatterySupply;
};

Device::Device(const Device &device) {
	this->isOn = device.isOn;
	this->hasBatterySupply = device.hasBatterySupply;
}

// Destructor
Device::~Device() {
	cout << "Device getting destroyed"<< endl;
}

void Device::turnOn() {
	if (!this->hasBatterySupply) {
		throw "You Battery is missing or getting problem and your iPhone can't turn on'";
	}

	if (this->isOn) {
		throw "Already On";
	}

	this->isOn = true;
}

void Device::turnOff() {
	if (!this->hasBatterySupply) {
		throw "You Battery is missing or getting problem and your iPhone can't turn off";
	}

	if (!this->isOn) {
		throw "Already Off";
	}

	this->isOn = false;
}

void Device::plugBatterySupply() {
	if (this->hasBatterySupply) {
		throw "Your battery was already inserted.";
	}

	this->hasPowerSupply = true;
}

void Device::unPlugBatterySupply() {
	if (!this->hasBatterySupply) {
		throw "No battery detected.";
	}

	this->isOn = false;
	this->hasBatterySupply = false;
}

const Device& Device::operator=(const Device &right) {
	this->isOn = right.isOn;
	this->hasBatterySupply = right.hasBatterySupply;

	return *this;
}
