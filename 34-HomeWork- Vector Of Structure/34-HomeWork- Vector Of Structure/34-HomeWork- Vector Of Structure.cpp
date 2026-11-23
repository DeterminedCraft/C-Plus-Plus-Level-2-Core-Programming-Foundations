
#include <iostream>
#include <vector>    // Mandatory for using Vectors.
using namespace std;


/*

 Write a Program to ask user to enter as many Employees as s/he wants,
 each time an Employee entered add it to your vector and ask the user if
 s/he wants to add more Employees until s/he says No, then print all vector
 elements on the screen.

*/


enum enResponse { Yes = 'Y', yes = 'y', No = 'N', no = 'n' };

struct stEmployee
{
	string FirstName;
	string LastName;
	int salary;
}; 
// so far, only a structure user-defined data type has been created & that's all.
// The next natural step, is declaring a variable of this structure user-defined data type.
//
// but the main question is, where to declare this variable ?
// - if it's going to be initialized directly, then declare it in main()
// - if it's going to be initialized via reading user inut, then declare it inside a reading fuction of the structure
//   user-defined data type that returns this variable.
//
// since it's the latter, then IMMEDIAELY start implementing this function NOW below:

stEmployee ReadEmployeeInfo()
{
	stEmployee employee;  // what's returned //the NEXT natural step of declaring a variable of the structure user-defined data type.
	// as soon as you see 'employee', then IMMEDIATELY ENVISION it having access to all member variables inside the structures.

	cout << "Enter First Name: ";
	cin >> employee.FirstName;
	cout << endl;

	cout << "Enter Last Name: ";
	cin >> employee.LastName;
	cout << endl;

	cout << "Enter Salary: ";
	cin >> employee.salary;
	cout << endl;

	return employee;
}       


char ReadCharacter(const string& message)
{
	char character;  // what's returned.

	cout << message;
	cin >> character;

	cout << endl;

	return character;
}


bool ValidateCharacter(const char& character)  // pass by const. ref. since 'character' is ONLY usd for comparison against the range.
{
	return (character == 'Y' || character == 'y' || character == 'N' || character == 'n');
}


char ReadResponse(const string& message) // ALWAYS pass string messages by constant ref.
{
	int count = 0; // added at the very end.
	char character;  // what's returned.

	do
	{
		count++;
		if (count > 1)
		{
			cout << "Error- Wrong Character. Try again \n";
		}

		character = ReadCharacter(message); // 'character' is to be	IMMEDIATELY validated against the range, in the while condition.


	} while (!ValidateCharacter(character));

	return character;
	// The above block of code is to be sequentially composed line by line & at the end, implement all the functions.
}



bool IsToAddMore(const char& character)   // pass by const. ref. since 'character' is ONLY used for comparison .
{
	switch (character)
	{
	case enResponse::Yes:
		return true;

	case enResponse::yes:
		return true;

	case enResponse::No:
		return false;

	case enResponse::no:
		return false;

	default:
		return false;  // this is jsut to prvent the compiler from complaining. Even though the valueof character 
		    // will be limited to either of  Yes, yes, No, no

	}
}


void StartProgram(vector <stEmployee> &vEmployees)   // it HAS to be passed by ref so the Vector variable in main) get initalized.
{   
	bool AddMore;

	do
	{
		stEmployee employee = ReadEmployeeInfo(); // capturing the record in a variable
		vEmployees.push_back(employee);     // and then adding this variable 9record) as an element to the vector.




	 char character = ReadResponse("\nWould you like to add another employee - Yes (Y) / No (N) ?: "); // Implement later.

	 AddMore = IsToAddMore(character);

	} while (AddMore);

}




void PrintRecords(const vector <stEmployee>& vEmployees)   // pass by constant reference.
{
	int i = 0;

	for (const stEmployee& employee : vEmployees)  // ALWAYS IMMEDIATELY ENVISION 'employee' having access to all member variables defined inside the structure.
	{
		cout << "Record " << i + 1<< endl << endl;
		cout << "First Name: " << employee.FirstName << endl;
		cout << "Last Name : " << employee.LastName << endl;
		cout << "Salary    : " << employee.salary << endl << endl;

		i++;
	}
}



int main()
{
	vector <stEmployee> vEmployees;

	StartProgram(vEmployees);

	//  when compiler reaches here it means that the Vecor variable has been initialized with elements that are records.
	
	
	cout << "\n========= Employee RecordS =========\n\n\n";
	PrintRecords(vEmployees);

	return 0;
}


