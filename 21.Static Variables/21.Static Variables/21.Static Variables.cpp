
#include <iostream>
using namespace std;

// Just by looking at the following program, predict the output:

void func()
{
    int number = 1;
    cout << number << endl;
    number++;
}


int main()
{
    func();
    func();
    func();

    return 0;
}

 /*  Output: 
     
     1
     1
     1

 */

/*
  The scope and life time of variable 'number' is within & that of the procedure func():

    EVERYTIME func() is called, 
    a space in memory for the local variable 'number'is created
    whose scope is func() and once the controller exists the curly bracket of the procedure,
    then that space in memory is destroyed and its value released.

*/



// Now, if I add the static keyword to the local variable:

void func()
{
    static int number = 1;  // then this local variable becomes a static variable.
    cout << number << endl;
    number++;
}


int main()
{
    func();
    func();
    func();

    return 0;
}

/* Output:
   
   1
   2
   3

   // what happens is that, 
   // The LIFE TIME of the static variable is that of the entire program. 


   // once the controller exits the curly bracket of the procedure
   // then, the space in memory for the variable 'number' will NOT be destoyed.

   // so the next time, this procedure is called
   // the variable 'number' contains the updated incremented value.


   // and the line   static int number = 1; 
   // will NOT override the value of 2 back to 1 
   // because static initialization only happens ONCE.

   /*
    When this function is called for the first time, a permanent static
    memory location is created for the variable `number`, and its one‑time
    initialization `number = 1` is performed. On every subsequent call,
    that static memory already exists and already holds the previously
    updated value, so the initialization line `static int number = 1;`
    is not executed again. The variable is neither re-created nor reset;
    only the remaining statements in the function run, preserving the
    accumulated value across calls.





*/


/*  Static Vs Global variable 
  A global Variable is declared on top in the program. This means that its scope & LifeTime is that of the entire program .
  A Static Variable is declared inside a function / procedure. This means that its scope is limited to tha func/ procedure
  even though, its life time is that of the entir program .

  A Regular Variable (normal variable or an array variable) that is non-static is that it is destroyed 
  once the controller exits its scope ( = the curly bracket that its in).









*/