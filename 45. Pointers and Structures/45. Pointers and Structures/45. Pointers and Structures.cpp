
#include <iostream>
using namespace std;


struct stEmployee
{
    string name;
    float salary;
};
    


int main()
{
    stEmployee employee, * p; // so a pointer has been declared on this line as well. 
                              // It will store the address of some object (uknown yet), that's of stEmployee structure user-defined data type.
 
    employee.name = "Ahmad El-Aina";
    employee.salary = 180000;

    // the 'employee' variable is now initialized with all member variables.

    cout << "Accessing the member variables inside the structures USING THE VARIABLE \n";
    cout << "Employee name: " << employee.name << endl;
    cout << "Employee Salary: " << employee.salary << endl << endl;
                               
    p = &employee; // so it's the variable 'employee' that we are   1- saving the address of in p.  2- pointing to (referencing) by the pointer in order to access its value
    
    // what else to do regarding pointers ?
    // well, to acess the value of the structure variable object its pointing to using *p (but *p syntax does not work in case of structures).

    cout << "Acessing the member variables inside the structure USING POINTER\n";
    cout << "Employee name: " << p->name << endl;
    cout << "Employee salary: " << p->salary << endl;

    // Note: typing p. Opens a list of member variables inside the structure ( and choosing one will result in p -> member variable).




    return 0;
}


