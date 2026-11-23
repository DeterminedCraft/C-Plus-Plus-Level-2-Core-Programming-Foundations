
#include <iostream>
#include <vector>    // CRUCIAL for using vectors. It contains methods for adding & removing elements in vector, etc.
using namespace std;



// Simply examine the following code:

int main()
{
    vector <int> vNumbers; //Data type here could also be: float, double, string, char, bool, structure user-defined data type, etc.

    // the Vector Library #include <vector>  contains the method .push_back():
    // as soon as I use this method:  
    // A 'Vector Stack' data structure is formed

    vNumbers.push_back(10); //Now the element 10 is added to the Vector Stack at the very bottom.
    vNumbers.push_back(20); // Then, the element 20 is added to the Vector Stack on top of 10.
    vNumbers.push_back(30); // Then, the element 30 is added to the Vector Stack on top of 20.
    vNumbers.push_back(40); // Then, the element 40 is added to the Vector Stack on top of 30.
    vNumbers.push_back(50); // Then, the element 50 is added to the Vector Stack on top of 40.
    // and you can add as many elements as needed anytime in the program (Vectors are dynamic containers).

   /*
              Vector Stack
        ┌──────────────────────────┐
        │                          │
        │       ┌──────────┐       │
        │       │    50    │       │ <-- Last one to add.
        │       └──────────┘       │
        │                          │
        │       ┌──────────┐       │
        │       │    40    │       │
        │       └──────────┘       │
        │                          │
        │       ┌──────────┐       │
        │       │    30    │       │
        │       └──────────┘       │
        │                          │
        │       ┌──────────┐       │
        │       │    20    │       │  <-- Added secondly 
        │       └──────────┘       │
        │                          │
        │       ┌──────────┐       │
        │       │    10    │       │  <-- Added first
        │       └──────────┘       │
        │                          │
        └──────────────────────────┘   */

    // Now the vNumbers vector is initialized (filled) with elements.

    cout << "Numbers Vector: \n\n";

    // ranged loop
    for (int & Number : vNumbers) {   // int because the vector variable 'vNumbers' is of type int.
            // & is in order to avoid continual copying & overriding of the vector's elements into the variable 'number'
            // which is both slow & takes up some memory space.
        cout << Number << endl;       
    }

    cout << endl;
    
    // and I can still add as many more elements as I want anytime in my program.
    return 0;
}




// Stack is a data structure ( A call uses it 'Call Stack' & A Vector uses it 'Vector Stack').
// 
// A Stack is named as such due to 2 reasons:
// 
// because inside it, elements are PUSHED ( stacked on top of each other one by one).
// and then, these elements are POPPED OUT of the stack one by one.
//
// where the first element to pop out is the last elements that was pushed to the stack.
// and the next element to pop out is the one that is currently on the top of the stack (the one before the
// last one that was added. etc.)