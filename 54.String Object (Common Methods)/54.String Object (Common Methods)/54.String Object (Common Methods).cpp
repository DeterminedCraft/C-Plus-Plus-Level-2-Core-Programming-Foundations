
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

	return 0;
}

// AND THERE ARE MANY MORE OTHER METHODS IN THE STRING CLASS.
