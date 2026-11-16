
#include <iostream>
#include <string> // HAS to be included
using namespace std;


/*
  HERE WE ARE ENTERING THE REALM OF THE OBJECT ORIENTED PROGRAMMING

  if we, for example, have:

  string name = "Ahmad El-Aina"

  then name, is not only a string variable.
  But, HERE SPECIFICALLY, it's also an object (only in the case of strings)
  
  Where the line:   string name = "Ahmad El-Aina"
  could have an equivalent line that utilizes the new keyword.

  An object means an object of a class, that has an access to all the methods 
  (functions nd procedures) contained in that class.

  This means that, "string" is not only a data type 
  but it's also a class that contains so many methods (functions & procedures)
  that are accessible by the 'name' object.

  HERE WE ARE ENTERING THE REALM OF THE OBJECT ORIENTED PROGRAMMING
 


  In this example, we will explore some of the methods contained in the string class
  that can only be accessed using an onject of the string class: 

*/



int main()
{
	string S1 = "My Name is Mohammed Abu-Hadhoud, I Love Programming.";

	//Prints the length of the string
	cout << S1.length() << endl;   // length always starts from 1.  //52

	//Returns the letter at position 3
	cout << S1.at(3) << endl;    // N

	//Adds @ProgrammingAdvices to the end of string (= concatenates a string at the end)
	S1.append(" @ProgrammingAdvices");
	cout << S1 << endl;

	//inserts Ali at position 7
	S1.insert(7, " Ali ");
	cout << S1 << endl;

	//Starting from index 16, print 8 letters.
	cout << S1.substr(16, 8) << endl;  // med Abu-

	//Adds one character to the end of the string
	S1.push_back('X');
	cout << S1 << endl;

	//Removes the last one character from the end of the string
	S1.pop_back();   // separate: you can use a for-loop to remove all letters one by one
	cout << S1 << endl;

	//Finds Ali in the string
	cout << S1.find("Ali") << endl;  // 8   ( Ali starts from index 8. meaning the A in Ali is in index 8)

	//Finds ali in the string
	cout << S1.find("ali") << endl; //18446744073709551615 which is,
	//some long ass random number since "ali" does NOT exist in the string (.find() has to return some index number).
	// because it's too long, C++ saves it in a reserved variable called npos
	
	if (S1.find("ali") == S1.npos)   // cuz as a progrmmer, I'm not going to memorize 18446744073709551615
	{
		cout << "ali is not found";  // if the condition evaluates to true then "ali" is NOT found.
	}

	//clears all string letters.
	S1.clear();
	cout << S1 << endl;



  /* In addition - The following built - in C++ functions:
   

      toupper( )                   
              |---> // takes a single character and returns its uppercase equivalent.
  
      tolower( )
              |---> // takes a single character and returns its lowercase equivalent.



      isupper( )
              |
              --> Takes a single character and returns true if the character is uppercase. Otherwise it returns false.

      islower( )
              |
              --> Takes a single character and returns true if the character is lowercase. Otherwise it returns false.    
	   
	   */

	cout << "******************************************************" << endl;

    char c = toupper('a');
	cout << "to upper: " << c << endl;

	char c2 = tolower('G');
	cout << "to lower: " <<  c2 << endl;

	cout << "******************************************************" << endl;

	char c3 = toupper('1'); 
	cout << "to upper: " << c3 << endl;   // output: 1

	char c4 = toupper('#');
	cout << "to upper: " << c4 << endl;   // output: #

	char c5 = tolower('1');
	cout << "to lower: " << c5 << endl; // 1

	char c6 = tolower('#');
	cout << "to lower: " << c6 << endl;  // #

	cout << "%%%%%%%%%%%%%" << endl;
	char c7 = tolower('99');       // is not something you should write. The compiler may accept it, but you're no longer working with a single character. You're passing a multi-character literal whose value is compiler-dependent.
	cout << "to lower: " << c7 << endl;   // 9     //only the first 9 will be considered. same for toUpper('99')

	cout << "%%%%%%%%%%%%% *********" << endl;
	char c8 = tolower('&&');   // is not something you should write. etc.
	cout << "to lower: " << c8 << endl;   // only the first & will be considered. same for toUpper('&&')



	cout << "=======================================================================" << endl;

	// something you should NOT write:
	cout << "IsUpper: " << isupper('#') << endl; // output: 0 (Is # an upper case ?  Answer: False (it's NOT even a letter).

	// something you should NOT write:
	cout << "IsLower: " << islower('#') << endl;  // output: 0 (Is # a lower case ?  Answer: False (it's NOT even a letter).

	cout << "******************************************************" << endl;

	return 0;
}





// AND THERE ARE MANY MORE OTHER METHODS IN THE STRING CLASS.
