#include <string>

#ifndef HOUR_UTIME_H
#define HOUR_UTIME_H

const std::string MONTH_NAME[] = {
	"january",
	"february",
	"march",
	"april",
	"may",
	"june",
	"july",
	"august",
	"september",
	"october",
	"november",
	"december"
};
const int MONTH_DAYS[] = {
	31,
	29,
	31,
	30,
	31,
	30,
	31,
	31,
	30,
	31,
	30,
	31
};

struct Month{
public:
	std::string name;
	int code;
	int days;
	Month();
	Month(std::string _name,int _code,int _days);
	void set(std::string _name,int _code,int _days);
};

class Time{
public:
	Month months[12];
	Time();
	void generate_months(int _start_day_code);//_start_day_code is the starting day of the year
	void print();
};

#endif
