#include <iostream>
#include "util/draw/draw.h"
#include "util/utime/utime.h"

using namespace std;

int main(){
	Time utime;
	utime.generate_months(1);
	utime.print();
	return 0;
}
