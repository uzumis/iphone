#include <string>
using std::string;
using std::ostream;

class Music {
	friend ostream &operator<<(ostream &, const Music &);
	bool operator== (const Music &) const;
	bool operator!= (const Music &other) const {
		return ! (*this == other);
	}

	public:
		Music(const string &);
		/* ~Music(); */

		const Music &operator=(const Music &);

	private:
		string name;
};
