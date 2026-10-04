
#include <iostream>
#include <cstdio>
using namespace std;

/* The String & Character formatting using the printf

   The printf in C++ does NOT work with string variables / Not supported (It only works with array variables of type char).
   Ex:

   string name = "Ahmad El-Aina";
   printf("My name is %s \n", name);     // Output: My name is: └_╤∞

   These lines of code will NOT work AS EXPECTED.   

   To overcome this issue, 
   assign the string value "Ahmad El-Aina" to an array variable of type char:

   char name[] = "Ahmad El-Aina";
   printf("My name is %s \n", name);




*/


int main() {
	// The String Formatting:   %s
	char Name[] = "Mohammed Abu-Hadhoud";
	char SchoolName[] = "Programming Advices";


	printf("Dear %s, How are you?\n\n", Name);
	printf("Welcome to %s School!\n\n", SchoolName);


	// The Character Formatting:  %c
	char c = 'S';
	printf("The character is %c \n\n", c);

	// Setting the width of character: 
	// %*c, #, variable   
	// 
	//  
	printf("Setting the width of c :%*c \n", 1, c);   //    :S
	printf("Setting the width of c :%*c \n", 2, c);   //    : S
	printf("Setting the width of c :%*c \n", 3, c);   //    :  S
	printf("Setting the width of c :%*c \n", 4, c);  //     :   S
	printf("Setting the width of c :%*c \n", 5, c);  //     :    S


	return 0;
}

// Again: Every perogramming language has an equivalent prinf.
//string names[] = { "Ahmad", "Mohammad", "Ali"};