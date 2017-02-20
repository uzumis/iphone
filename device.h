#ifndef _DEVICE_H_
#define _DEVICE_H_

#include <string>
using std::string;
using std::ostream;

class Device {
	friend ostream &operator<<(ostream &, const Device &);
	bool operator== (const Device &) const;
	bool operator!= (const Device &other) const {
		return ! (*this ==other);
	}

	public:
		Device();
		Device(bool, bool);
		Device(const Device &);
		~Device();
		virtual void turnOn();
		virtual void turnOff();
		void plugBatterySupply();
		void unPlugBatterySupply();

		const Device &operator=(const Device &);

	private:
		bool isOn;
		bool hasBatterySupply;
};

#endif
