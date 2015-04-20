#include <iostream>
#include"Time.h"
using namespace std;

Time::Time(){
};
Time::~Time(){
};
void Time::set(int H, int M){
	minute = M;
	hours = H;

};
void Time::get(int &h, int &m){
	h = minute;
	m = hours;

}
ostream &operator<<(ostream &os, Time &v){

	os <<v.hours << ':' <<v. minute << endl; 

	return os;


}