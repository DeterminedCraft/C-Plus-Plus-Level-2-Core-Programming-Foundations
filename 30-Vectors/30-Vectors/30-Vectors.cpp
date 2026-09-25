

/* An Array is a fixed-length data structure 
   This means that one has to specify its length as soon as its declared ( = and before using it).
   
   It's length has to be specified before run time. 
   Also, it can NOT be determined during run-time.

   if you remember, so far we've been doing the following:

   Declaring an array:

   int array[100];   // An array of length 100 ( This means that so far, 100 empty spaces are reserved in memory.)

   but then we populated the array with, let's say, only 10 elements. This means that 90 spaces are wasted.

   As a side note: 
   In C++, an array (fixed-length data structure) can be dynamically used where its length can be determined 
   during run time using pointers (will be shown when we study pointers).
  
 
  (Note: check your C++ level I notes, where I suspect that it can also be used dynamically with #include <array>
         but nevertheless, a variable length collection classIS TO BE USED).

  
  BOTTOM LINE: 
  If we're not sure how many elements a container will have, 
  then use a variable length collection class such as Vector which is a dynamic container.

  (A dynamic container - where the size can be determined during runtime
                         as many elements as needed can be added or removed).

*/

/*=====================================================================================================
  =====================================================================================================
                                          CRUCIAL NOTE

 When an array variable is passed as an argument in the calling function,
 it's AUTOMATICALLY passed along wih its memory address as an argument.
 
 This means that, in the implementing function, it is AUTOMATICALLY passed by reference 
 without including the '&' sign. Including the & sign renders exception.


 HOWEVER, Things are different when it comes to Vectors.


 When a Vector variable is passed as an argument in the calling function,
 it's NOT automatically passed along with its address in memory as the case is with arrays.

 This means that, in the implementing function, it must be passed by ref. (by including the & sign off course).
 so that the Vector Variable that's declared inside main() gets initialized.

 If the Vector is passed by value (by not including the & sign in the implementing function),
 then a new memory space for a vector variable is created, whose scope is the implementing function,
 and it's value is a copy of what was passed from the calling function. 

 This vector variable will get initialized withe elements.
 whereas, the other Vector variable is main remains uninitialized. 
 This means that, one has to keep coding in the implementing fuction and not in main()
 which is both ridiculous and violating of the SRP.

*=====================================================================================================
======================================================================================================*/


/*  The obvious thing now is:
    let's see:

    How to declare a Vector, initialize it with elements, iterate through each and every element,
    printing them out in the process.*/


#include <iostream>
#include <vector>     // ineviable for using vectors.
using namespace std;

int main()
{
    vector<int> vNumbers = {9,2,3,4,5,6,7,8,9,10};

    for (int i = 0; i < vNumbers.size(); i++)  // will work, but ranged loop is preferred for colection classes.
    {
        cout << vNumbers[i] << " ";
    }

    cout << endl;

    return 0;
}

// to optimize: use ranged for-loop.
// BUT it is considered SLOW:

int main()
{
    vector<int> vNumbers = { 9,2,3,4,5,6,7,8,9,10 };

    for (int number : vNumbers)  // ranged loop    // nNumbers must be a dynamic container
    {    
        cout << number << " "; 
    }

    cout << endl;

    return 0;
}

// 'number' is of type int because the elements of the vector are of type int.
//
// On each iteration, 'number' RECEIVES A **COMPLETE** COPY (NO MATTER HOW BIG THE COPY IS) 
// of the current element in the vector, and the body processes this copied value.
//
//
// On the next iteration, the value stored in 'number' is OVERWRITTEN by a COPY
// of the next element in the vector, and so on.
//
// BUT THIS PROCESS OF INCESSANT COPYING IS SLOW.



/*
 BUT THIS PROCESS OF INCESSANT COPYING IS SLOW  PLUS  it TAKES SIZE IN MEMORY
 
 To speed it up, Pass by reference:   

 for (int &number : vNumbers)
 where 'number' is pointing to the current iteration's element present in Vector INSTEAD OF COPYING IT.


 */

int main()
{
    vector<int> vNumbers = { 9,2,3,4,5,6,7,8,9,10 };

    for (int &number : vNumbers)  // ranged loop    
    {
        cout << number << " ";
    }

    cout << endl;

    return 0;
}

// NOW, for this specific program, speed might not be compromised when just copying instead of referencing.
// But, if the data type of the variable 'number' was, for example, a structure user-defined data type
// 
// (meaning that the vector is of a structure user-defined data type,
// where each element is, off course, of a structure user-defined data type = containing records )
// 
// then the program WILL BE SLOW.
// 
// as a structure, by nature, takes up a lot more space in memory
// as it contains records. 
// for example student records or patient records, etc. for a university or a hospital application
// in such case, the application is doomed to be notoriously slow.
//
// Imagine a structure ( = containing records) has a size of 5 GB or 10 GB or 10 TB
// or even 10 MB, then why do I need to copy that much size in variable number in
// 
// for (int number : vNumbers)  
// 
// on each iteration 
// just to display it onto the screen  (or for much more that that).
//
// and then on the next iteration override the current value of number with a new
// copied value again ?!





/* Important Notes:
   
   .length() is for strings & arrays.
   .size() is for variable length colection classes (such as vectors).

   
   As you can see here:

   vector<int> vNumbers = {9,2,3,4,5,6,7,8,9,10};

   No need to specify size at all. Size is determined by how many elements it contains.
  

  One can declare vectors first before initializing it:

  vector <double> vNumbers;  // the size is 0.





*/