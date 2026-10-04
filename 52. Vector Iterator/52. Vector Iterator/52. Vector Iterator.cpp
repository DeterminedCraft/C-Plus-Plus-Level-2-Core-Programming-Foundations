
#include <iostream>
#include <vector> //mandatory for vectors
using namespace std;

/* Iterators in Vectors.
   
   Going through each and every single element in a Vector
   can also be done with an iterator USING A POINTER.


  *** Illustration ***:


    vector<int> vNumbers = { 10, 20, 30, 40 };

     Now, I want to go through each and every single element of the vector but without using the straight-forward ranged for-loop
     but rather using an iterator:-


     Declare an iterator that 'sits on top' of the data structure that is in this case a vector:
     
     ( syntax:       DataType of structur::iterator iter)
                                             |       |
                                keyword <----|       |---> any name.

    vector<int> :: iterator iter;
/*               |
                 |---> " = sits on"

      so now, an iterator object is sitting on top of this data stucture

            ★
    ┌─────────────────┐
    │       10        │
    ├─────────────────┤
    │       20        │
    ├─────────────────┤
    │       30        │
    ├─────────────────┤
    │       40        │
    ├─────────────────┤
    │       50        │
    └─────────────────┘



    vNumbers.begin()       → iterator pointing to 10
    vNumbers.begin() + 1   → iterator pointing to 20
    vNumbers.begin() + 2   → iterator pointing to 30
    vNumbers.begin() + 3   → iterator pointing to 40
    vNumbers.begin() + 4   → iterator pointing to 50
 ** vNumbers.end()         → iterator pointing to outside of the structure.

    something such as:

    iter = vNumbers.begin(); // iter = represents the position of the iterator (i.e., which element the iterator is pointing to) 
    
    *iter  // to access the value of the element.                                       
 
 */

int main()
{
    vector<int> vNumbers = { 10,20,30,40,50 };
    
    // to iterate through each and every single element of the vector using an iterator:

    // declare iterator
    vector<int>::iterator iterate;  // the syntax

    // use iterator with for loop:
    for ( iterate = vNumbers.begin(); iterate != vNumbers.end(); iterate++)
    {
        cout << *iterate << " ";
    }

    cout << endl;

    return 0;
}




















  






