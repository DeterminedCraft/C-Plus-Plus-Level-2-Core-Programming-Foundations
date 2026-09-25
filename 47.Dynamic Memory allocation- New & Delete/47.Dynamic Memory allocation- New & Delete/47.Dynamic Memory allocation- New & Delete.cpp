
#include <iostream>
using namespace std;

/* Pre-requisite: Pointers
   
   Dynamic Memory Allocation:  
   
   Dynamic Memory Allocation allows us to allocate memory during run time (using the new keyword),
   use that memory, and then release it (using the delete keyword) when it is no longer needed 
   (all DURING runtime).

   This can result in:

   1- More speed & performance of the application (via more efficient use of memory).
   2- Greater flexibility.
  
 

     To allocate memory during run time means:

   Create variables/objects or blocks of memory when they are needed
   during run time, use them, and then release that memory AS SOON AS 
   when it is no longer needed ALL DURING RUN TIME.

   

     ***** Dynamic Memory Allocation gives the C++ program greater control over how memory is used. *****
   
    POINTERS are used to access dynamically allocated memory.
    __________________________________________________________________________________________________________

   One additional point:

   The normal way of declaring, for example, a local variable is:

       int x = 10;

   Its memory is automatically allocated when execution enters its scope
   and automatically released when execution leaves that scope.

   For example:

       {
           int x = 10;

           // x exists here
       }

       // x no longer exists here


   With dynamic memory allocation, we can allocate this memory during run time 
   and control when that memory is released, so that it is not kept reserved longer than it is needed.

   let's dynamically allocate during runtime:

   So, instead of int x = 10
   
   We will have the equivalent:

   1- Declare pointer variable:

    int * p;

   2- Dynamically allocate memory for an int object by using the 'new'
   keyword. store its address in the pointer variable:

    p = new int(10);

   // 'new int(10)' dynamically creates an int object and initializes
   // it with the value 10.

   // 'p' now stores the address of this dynamically allocated int object.


 3- When the dynamically allocated object is no longer needed,
    release its memory using 'delete':

     delete p;


 IMPORTANT:

    int x = 10;

    // x is the actual int variable/object.
    // Its lifetime is automatically managed by its scope.


    int* p = new int(10);

    // p is the integer pointer variable.
    // The int object is dynamically allocated.
    // Its lifetime is controlled using 'delete'.



   */

// let us have a look at the following program:

int main()
{
    int* ptrx; // a pointer variable 'ptrx' of type integer pointer is declared. 
    // it's READY to store the address of an integer object & WHEN IT DOES SO, it will be pointing to (referencing) it
    // Note: in memory, ptrx, doesn't occupy much space because a pointer is to SIMPLY POINT TO something and also cuz
    // they store nothing but addresses

    float* ptry; // a pointer variable 'ptry' of type float pointer is declared.
    // it's READY to store the address of the float object & WHEN IT DOES SO, it will be pointing to (referencing) it.
    // Note: in memory, ptry, doesn't occupy much space because a pointer is to SIMPLY POINT TO something and also cuz
    // they store nothing but addresses

    // Dynamically allocating memory:
    // 
    if (true)  // in real examples, if a certain condition is realized, then I would declare the int & the float objects
    {               // using the new keyword. So I declare these 2 object according to a NEED DURING RUN TIME
        ptrx = new int; // a memory space is DYNAMICALLY created for an object of type int.
        // the pointer variable 'ptrx' is now storing its address & pointing to (referencing) this mem. space

        ptry = new float; // a memory space is DYNAMICALLY created for an object of type float.
        // the pointer variable 'ptry' is now storing its address & pointing to (referencing) this mem. space
    }
    // 
    // 
    // Now, we need to initialize these dynamically created objects with values:
    *ptrx = 45;
    *ptry = 58.35f;

    cout << *ptrx << endl;
    cout << *ptry << endl;

 // CRUCIAL: If you use [new] keyword, then you must use [delete] keyword to release the DYNAMICALLY
 // allocated memory when it is no longer needed.

    // de-allocating the memmory:
    delete ptrx; // releasing the memory space for the integer object created by new int;

    delete ptry; // releasing the memory space for the float object created by new float;

    // so we are releasing the no-longer-needed dynamically allocated memory spaces
    // for the int object (created by: new int;) & for the float object (created by: new float;) 
    // 
    // before the program exits its curly brackets.
    // 
    // In a real program, there may be many other lines of code below this point
    // before exiting the curly brackets.
    // 
    // where the program may take hours till it ends.
    // so during this time, I would have already released some memory
    // taking advantage of more available memory for better speed & performance
    // instead of it, remaining reserved for nothing (thus impacting speed & performance)
    // during the entire execution time of the program.

    return 0;
}

/*
 
    so instead of 

    declaring variables such as:

    int x;
    float y;

    (x & y here STAY RESERVED IN MEMORY from the moment the program starts running,
     till the moment the program exists main().


    I, reserved new spaces in memory for objects 
    using pointers via the new keyword, as in:

    ptrx = new int;
    ptry = new float;


    then,






*/

