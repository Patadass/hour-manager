#include "utime.h"
#include <string>
#include <iostream>

using namespace std;

Month::Month(){

}

Month::Month(string _name, int _code, int _days){
	name = _name;
	code = _code;
	days = _days;
}

void Month::set(string _name, int _code,int _days){
	name = _name;
	code = _code;
	days = _days;
}

Time::Time(){

}

void Time::generate_months(int _start_day_code){
	for (int i = 0;i < 12;i++) {
		months[i].set(MONTH_NAME[i], i, MONTH_DAYS[i]);
	}
}

void Time::print(){
	for (int i = 0;i < 12;i++) {
		cout<<months[i].name<<" "<<months[i].days<<endl;
	}
}

