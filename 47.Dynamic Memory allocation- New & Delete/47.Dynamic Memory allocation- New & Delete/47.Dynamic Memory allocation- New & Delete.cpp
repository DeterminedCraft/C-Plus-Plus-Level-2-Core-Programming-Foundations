
#include <iostream>
using namespace std;

/* Pre-requisite: Pointers
   
   Dynamic Memory Allocation:  
   
   Dynamic Memory Allocation allows us to allocate memory DURING RUN TIME (using the new keyword) for an unnamed object and initialize it with the help of pointers.
   use that memory, and then release it (using the delete keyword) AS SOON AS it's no longer needed, still during runtime and before the end of 
   the program.

   so that less space in memory is reseved
   resulting in a faster program and better performance.
  

   *** THAT IS THE WHOLE POINT AND NOTHING ELSE: ***
 ----------------------------------------------------------------------------------------------------------------------------------------------

    So instead of declaring variables such as:

    int x;        // Its lifetime is automatically managed by its scope.
    float y;

    (x & y here STAY RESERVED IN MEMORY from the moment their lines are executed,
     till the moment the program ends/ exists main().


    then dynamically allocate, in memory, unnamed objects equivalent to x & y repectively
    and store their address in  pointer variables, so that the pointers are now pointing to their respective objects
    
    // Dynamically allocating the memory:

    ptrx = new int;    // Its lifetime is controlled using 'delete'.     // for EVERY new keyword, delete is to be used.
    ptry = new float;

    so that we can now initialize these objects with values using the syntax p* ( or p-> member variable) in the case of a structure.

    *ptrx = 45;
    *ptry = 58.35f;
    
    // some code below or the lack thereof

   where we release these 2 objects from memory (using the delete keyword) as soon as they're no longer needed so that less space in memory is reseved
   resulting in a faster program and better performance.
  
    
    // de-allocating the memory.
   
    delete ptrx; 

    delete ptry;    // notice that the life time is controled by [delete] keyword.

   

     ***** Dynamic Memory Allocation gives the C++ program greater control over how memory is used. *****
   
    POINTERS are used to access dynamically allocated memory.
    __________________________________________________________________________________________________________

  




   */

// let us have a look at the following program:

int main()
{
    int* ptrx; // a pointer variable 'ptrx' of type integer pointer is declared. 
    // it's READY to store the address of an integer object & WHEN IT DOES SO, it will be pointing to (referencing) it


    float* ptry; // a pointer variable 'ptry' of type float pointer is declared.
    // it's READY to store the address of the float object & WHEN IT DOES SO, it will be pointing to (referencing) it.


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
  The EXACT SAME program below but with NO COMMENTS
*/

int main()
{
    int* ptrx;

    float* ptry;

    if (true)
    {
        ptrx = new int;

        ptry = new float;
    }

    *ptrx = 45;
    *ptry = 58.35f;

    cout << *ptrx << endl;
    cout << *ptry << endl;

    delete ptrx;

    delete ptry;

    return 0;
}
