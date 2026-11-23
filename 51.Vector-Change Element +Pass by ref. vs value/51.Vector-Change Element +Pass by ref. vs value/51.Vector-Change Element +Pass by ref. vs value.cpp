#include <iostream>
#include <vector> // one HAS to use vectors.
using namespace std;

/* Instructions:

   Review the code step by step.
   Pay an EXTRA ATTENTION
   to HOW the parameters are passed (by value vs by reference).


*/



void PrintElements(const vector <int>& vNumbers) // pass by const. ref. as we just want to print the elements of the vector.
{                                                // &' alone implies mutation (even though will also work here)                                             
 // AND here we're not changing the value of any element. Instead, we just want to print the elements.
	// so add the const part, which will also mean that it will LOCK the vector (it's elements) it's
	// pointing to in main() so that the elements in main() will not be accidentally changed by this procedure.

	for (const int& number : vNumbers)  // by const. ref. (Instead of copying each element of the vector during each iteration and setting it 
	{                                    // as the value of the variable number whose scope is the procedure PrintElements(). which
		cout << number << " ";           // uses more memory resulting in a slower program for big & real applications. 
	}                    //but DESPITE ALL OF THIS EXPLANATION: you have NO CHOICE BUT use const int& to match the const vector<int>& parameter
	// ( the ranged for-loop is iterating through elements whose data type is const int. so we have NOT CHOICE but use const int.s
	cout << "\n\n";
}

void ChangeElementsToSameValue(vector <int>& vNumbers) // pass by ref. as we want to change the values of the elements of the vector in main().
{
	for (int& number : vNumbers)
	{
		number = 3;
	}
}

void ChangeSpecificElements(vector <int>& vNumbers)
{
	vNumbers[0] = 1000;
	vNumbers[1] = 1500;
	vNumbers[4] = 2000;
}

int main()
{
	vector <int> vNumbers = { 11, 22, 67, 99, 100 };

	PrintElements(vNumbers); // passing a vector variable as an argument in the calling function is diff.
	// than that of an array (fixed-length data structure) where the latter is  
	 // automatically passed along with its address in memory. it follows that,
// the parameter is,by default, passed by ref. without including the & sign (including it renders exception)

	ChangeElementsToSameValue(vNumbers);
	// all vector elements are now changed.
	PrintElements(vNumbers);

	ChangeSpecificElements(vNumbers);
	// some specific elements in the vector are now changed.
	PrintElements(vNumbers);


	return 0;
}





// CRUCIAL: you HAVE to do the same for the following spaghetti code (Instructor's code):
// Just examine the for loop line WITHOUT looking at its body, IN ORDER TO predict what the body could be.


int main() {
	vector<int> num{ 1, 2, 3, 4, 5 };

	cout << "Initial Vector: ";
	for (const int& i : num) {
		cout << i << " ";
	}


	cout << "\n\nUpdated Vector: ";

	for (int& i : num) {
		i = 20;
		cout << i << " ";
	}

	num[1] = 40;
	num.at(2) = 80;
	num.at(4) = 90;


	cout << "\n\nUpdated Vector: ";
	for (const int& i : num) {
		cout << i << " ";
	}
	return 0;

}