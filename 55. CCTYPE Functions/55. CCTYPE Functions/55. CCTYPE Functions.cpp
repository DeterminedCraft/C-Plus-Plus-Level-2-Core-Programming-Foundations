
#include <iostream>
#include <string>
#include <cctype> // HAS to be included.

using namespace std;

/* Here is SOME of the MOST IMPORTANT built-in CCTYPE Library Functions.
   
   As we move forward, 
   we're going to learn how to implement them by ourselves.

*/


int main()
{
	char x;
	char w;

	x = toupper('a'); // this CCTYPE function, takes letter 'a' which is 97 in the ASCII table, and returns 65.
	// then the returned 65 is to be stored in variable x of chat type. So it's stores as A
	
	w = tolower('A'); // this CCTYPE function, takes letter 'A' which is 65 in the ASCII table, and returns 97.
	// then the returned 97 is to be stored in variable w of char type. So it'ss stored as a
	
	cout << "converting a to A: " << x << endl;    // A
	cout << "converting A to a: " << w << endl;    // a
	
	// CRUCIAL: any number other than 0 is considered true.


	// Digits (A to Z)
	// isUpper()  &   isLower() * is.., etc.  are boolean returning functions. 
	cout << "isupper('A') " << isupper('A') << endl;  // 1    // 5 or 16 for example in some compilers

	cout << "islower('A') " << islower('A') << endl;  // 0

	// Digits (0 to 9)
	// returns zero if false, and non zero if true
	cout << "isdigit('A') " << isdigit('A') << endl;  // 0

	// punctuation characters are !"#$%&'()*+,-./:;<=>?@[\]^_`{|}~
	// returns zero if not, and non zero of yes
	cout << "ispunct('A') " << ispunct('A') << endl;   //0

	return 0;
}


// another example: Notice how some compilers prints 0 (for false) & 1 or non-zero (for true).

int main()
{
	char x;
	char w;

	x = toupper('a'); 

	w = tolower('A');

	cout << "converting a to A: " << x << endl;    // A
	cout << "converting A to a: " << w << endl;    // a

	// CRUCIAL: any number other than 0 is considered true.

	
	cout << "isupper('A') " << isupper('A') << endl;       // 1

	cout << "islower('A') " << islower('a') << endl;      // 2

	  
	cout << "isdigit('A') " << isdigit('9') << endl;    // 4

	cout << "ispunct('A') " << ispunct(';') << endl;    // 16

	return 0;
}