
#include <iostream>
using namespace std;

/*
 So far, we've demonstrated how a pointer points to (references) a 'normal' variable object.

 but, how about pointing to (referencing) an array variable object ?
    First, one needs to understand that an array variable represents one linear group of variableS
    where every variable has its own address in memory.

*/


int main()
{
    int array[4] = { 10, 20, 30, 40 };

    int* p;
    p = array;  // including & here renders exception.  // p here is equivalent to array[0]

    // p stores the adress of the first element in the array 
    // and now points to (references) the first variable object in the array.
    // Tip: to de-reference is to access the value of the variable object ( *p = 10)
    
    cout << "First element in the array = " << *p << endl;  // de-referencing.
    cout << "Address of this first element = " << p << endl << endl;   // prints out the address of the first element in the array.


    p = array + 1;  // p here is equivalent to array[1]
    // overwrites by storing the address of the second element in the array
    // and now points to (references) the second variable object in the array.

    cout << "Second element in the array = " << *p << endl;  // de-referencing.
    cout << "Adress of this second element = " << p << endl << endl;


    p = array + 2;  // p here is equivalent to array[2]
    // overwrites by storing the address of the third element in the array 
    // and now points to (references) the 3rd variable object in the array

    cout << "Third element in the array = " << *p << endl;  // de-referencing.
    cout << "Adress of this third element = " << p << endl << endl;


    p = array + 3; // p here is equivalent to array[3]
    // overwrites by storing the address of the fourth element in the array 
    // and now points to (references) the 4rd variable object in the array

    cout << "Fourth element in the array = " << *p << endl;  // de-referencing.
    cout << "Adress of this fourth element = " << p << endl << endl;

    return 0;
}
 /////////////////////////////////////////////////////////////////////////////////////////////////


// Another way to express the idea (important)
int main()
{
    int arr[4] = { 10,20,30,40 };
    int* ptr;
    ptr = arr;
    //ptr is equivalent to &arr[0];
    //ptr + 1 is equivalent to &arr[1];
    //ptr + 2 is equivalent to &arr[2];
    //ptr + 3 is equivalent to &arr[3];


    cout << "Addresses are:\n";

    cout << ptr << endl;
    cout << ptr + 1 << endl;
    cout << ptr + 2 << endl;
    cout << ptr + 3 << endl;

    cout << "\nValues are: \n";
    cout << *(ptr) << endl;
    cout << *(ptr + 1) << endl;
    cout << *(ptr + 2) << endl;
    cout << *(ptr + 3) << endl;

    return 0;
}

/*
┌──────────────────────────────────────────────────────────┐   ┌──────────────────────────────────────────────┐
│                                                          │   │                 MEMORY                       │
│  int main()                                              │   │                                              │
│{                                                         │   │                                              │
│      int array[4] = { 10, 20, 30, 40 };                  │   │  name:array                                  │
│                                                          │   │  ┌───────┬───────┬───────┬───────┐           │
│      int* p;                                             │   │  │  10   │  20   │  30   │  40   │           │
│                                                          │   │  └───────┴───────┴───────┴───────┘           │
│                                                          │   │   Address  Address  Address  Address         │
│                                                          │   │   0x1000   0x1004   0x1008   0x100C          │
│                                                          │   │                                              │
│      p = array;                                          │   │     ↑                                        │
│      // p stores the address of the first element        │   │     │ p stores address of array[0]           │
│      // and points to the first variable object.         │   │     │ & now points to the first variable object                                      
│                                                          │   │  name:p                                      │
│                                                          │   │  ┌───────────────────┐                       │
│                                                          │   │  │ address of 10     │                       │
│                                                          │   │  └───────────────────┘                       │
│                                                          │   │                                              │
│      cout << "First element..." << *p;                   │   │  p's stored address is OVERWRITTEN           │
│      cout << "Address..." << p;                          │   │                                              │
│                                                          │   │  array                                       │
│                                                          │   │  ┌───────┬───────┬───────┬───────┐           │
│                                                          │   │  │  10   │  20   │  30   │  40   │           │
│                                                          │   │  └───────┴───────┴───────┴───────┘           │
│                                                          │   │   Address  Address  Address  Address         │
│                                                          │   │   0x1000   0x1004   0x1008   0x100C          │
│                                                          │   │                                              │
│      p = array + 1;                                      │   │             ↑                                │
│      // p now stores the address of array[1]             │   │             │ p stores address of array[1]   │
│                                                          │   │             │                                │
│                                                          │   │  p                                           │
│                                                          │   │  ┌───────────────────┐                       │
│                                                          │   │  │ address of 20     │                       │
│                                                          │   │  └───────────────────┘                       │
│                                                          │   │                                              │
│      cout << "Second element..." << *p;                  │   │  Then overwritten again :                    │
│      cout << "Address..." << p;                          │   │  p → address of 30                           │
│                                                          │   │  p → address of 40                           │
│      p = array + 2;                                      │   │                                              │
│      // p now stores the address of array[2]             │   │  IMPORTANT :                                 │
│                                                          │   │  There is only ONE p variable.               │
│      cout << "Third element..." << *p;                   │   │  Its stored address changes each time.       │
│      cout << "Address..." << p;                          │   │                                              │
│                                                          │   │                                              │
│      p = array + 3;                                      │   │  //and so on                                 │
│      // p now stores the address of array[3]             │   │                                              │
│                                                          │   │                                              │
│      cout << "Fourth element..." << *p;                  │   │                                              │
│      cout << "Address..." << p;                          │   │                                              │
│                                                          │   │                                              │
│      return 0;                                           │   │                                              │
│ }                                                        │   │                                              │
│                                                          │   │                                              │
│                                                          │   │                                              │
│                                                          │   │                                              │
└──────────────────────────────────────────────────────────┘   └──────────────────────────────────────────────┘
*/

//// To optimize the code:

int main()
{
    const int NumberOfElements = 4;   // declared & initialized here, ONLY to use it as the condition of the for loop
    int array[NumberOfElements] = { 10, 20, 30, 40 };  

    int* p;

    for (int i = 0; i < NumberOfElements; i++)
    {
        p = array + i;
        cout << "Element of index " << i << " = " << *p << endl;
        cout << "Address of this element = " << p << endl << endl;
    }
    
    return 0;
}
