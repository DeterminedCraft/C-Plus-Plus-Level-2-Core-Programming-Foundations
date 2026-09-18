
#include <iostream>
#include <vector>  // without this, one can NOT use vectors.
using namespace std;

/* A Vector can also be of a user-defined structure data type.
*
*  Just EXACTLY how a Vector can be of an integer data type or float or double
*  or string or character or boolean or wide character.
* 
* meaning that every element(= of structure user-defined data type) 
* represents a record (each record is filled with info).
*/


// Simply examine the following program:

struct stEmployee
{
    string FirstName;
    string LastName;
    int salary;
};
// so far, ONLY a structure user-defined data type has been created.That's all.
// The next natural step, is declaring a variable of this structure user-defined data type.
//
// But the main questions is - Where to declare this variable ?
// 
// - If it's going to be initialized directly, then declare it main().
// - If it's going to be initialized via reading user input, then declare it inside a reading function
//   of the structure user-defined data type that returns this variable.

//

int main()
{
    vector <stEmployee> vEmployees;  // It will store elements each representing a record.


    stEmployee tempEmployee; // The NEXT natural step of declaring a variable of the structure user-defined data type.
                      // as soon as you see this ALWAYS envision the variable having access to all memeber variables inside the structure.
    tempEmployee.FirstName = "Ahmad";
    tempEmployee.LastName = "El-Aina";
    tempEmployee.salary = 200000;

    // so this is ONE RECORD only, you need to save it inside a Vector (that's why we declared a vector).
    vEmployees.push_back(tempEmployee); // again, ALWAYS ENVISION 'tempEmployee' having access to all memeber variables.
    // instead of pushing a number or a string to the vector, I choose to push an entire record.

    // for the 2nd record:
    tempEmployee.FirstName = "Katamutu";
    tempEmployee.LastName = "Butu";
    tempEmployee.salary = 300000;
    // now to save this record as the second element in a vector:
    vEmployees.push_back(tempEmployee); // again, ALWAYS ENVISION, 'tempEmployee' having access to all member variables.

    
    // for the 3rd record:
    tempEmployee.FirstName = "Adam";
    tempEmployee.LastName = "Abbas";
    tempEmployee.salary = 350000;
    // now to save this record as the third element in a vector:
    vEmployees.push_back(tempEmployee);

    // The Vetor 'vEmloyees' is now initialized with elements each representing a record that 
    // is of the structure user-defined data type.
    


    // now to print out the elements inside the Vector: (for Collection classes, it's better to used ranged for loops)
    // As soon as you see 'tempEmployee' variable below, ALWAYS ENVISION it having access to all member variables.
    int i = 0;

    cout << "\nEmployees Records\n\n\n";
    for (stEmployee &tempEmployee : vEmployees)  //the variable has the same data type of the vector  // pass BY REF
    {
        cout << "Record " << i << endl << endl;

        cout << "First Name: " << tempEmployee.FirstName << endl;
        cout << "Last Name : " << tempEmployee.LastName << endl;
        cout << "Salary    : " << tempEmployee.salary << endl << endl;

        i++;
    }

    return 0;
}


/* Output:  
 // What's printed are the records (= the elements of a vector. Each must be of a structure user-defined data type).
  
  
 Employees Records


 Record 0

 First Name: Ahmad
 Last Name : El-Aina
 Salary    : 200000


 Record 1

 First Name: Katamutu
 Last Name : Butu
 Salary    : 300000


 Record 2

 First Name: Adam
 Last Name : Abbas
 Salary    : 350000


*/
  



