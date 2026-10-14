
// 63- DateTime- Local vs UTC time.cpp 

#pragma warning(disable : 4996)  // if not included, then build errors are rendered.  // it means: disable the warning whose number is 4996.
#include <ctime>   // ctime library is inherited from the C language.
#include <iostream>
using namespace std;


int main()
{
	time_t t = time(0); // get time now

	char* dt = ctime(&t); // convert in string form
	cout << "Local date and time is: " << dt << "\n";

	// converting now to tm struct for UTC date/time
	tm* gmtm = gmtime(&t);        // gmtm is a structure containing time elements ( Wed Aug 17 12:05:18 2026)
	dt = asctime(gmtm); // passing the structure as an argument and converting it to a string. make shift + F9
	cout << "UTC date and time is: " << dt;
}


