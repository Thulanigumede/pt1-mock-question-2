#ifndef TIME_H
#define TIME_H
#include <iostream>
using namespace std;

class Time{
private:
	int minute;
	int hours;
public:
	Time();
	~Time();
	void set(int,int);
	void get(int&, int&);
	friend ostream &operator<<(ostream&, Time&);
	Time &operator++(int);

};

ostream &operator<<(ostream&, Time&);
#endif // !1
