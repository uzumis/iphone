#ifndef _IPHONE_H_
#define _IPHONE_H_

#include <string>
#include "console.h"
#include "game.h"
using std::string;
using std::ostream;

class iphone : public Console {
	friend ostream &operator<<(ostream &, const iphone &);
	bool operator== (const iphone &) const;
	bool operator!= (const iphone &other) const {
		return ! (*this ==other);
	}

	public:
		iphone();
		iphone(int);
		iphone(const iphone &);
		~iphone();
		void setYear(int);
		void addMusic(const string &);
		void listMusic();
		void turnOn();
		void turnOff();
		static int showPublishmentYear();

		const iphone &operator=(const iphone &);

	private:
		int year;
		string *musicList;
		int musicount;
		static int publishmentYear;

		void setupGameList(int);
		void setupDefaultConsoleData();
};

#endif
