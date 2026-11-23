
#include <iostream>
#include <vector>   // mandatory
using namespace std;

// Simply examine the following program:



int main()
{
    vector<int> vNumbers;

    vNumbers.push_back(10);
    vNumbers.push_back(20);
    vNumbers.push_back(30);
    vNumbers.push_back(40);
    vNumbers.push_back(50);    
/*
    so that now we now have:

     === Vector Stack ===
     |----------------|
     |   +---------+  |
     |   |   50    |  | <-- last pushed (top of stack)
     |   +---------+  |
     |   |   40    |  |
     |   +---------+  |
     |   |   30    |  |
     |   +---------+  |
     |   |   20    |  |
     |   +---------+  |
     |   |   10    |  | <-- first pushed (bottom of stack)
     |   +---------+  |
     |----------------|                                      */





    vNumbers.pop_back();   // removes 50
    /*
         === Vector Stack ===
         |----------------|
         |   +---------+  |
         |   |   40    |  | <-- now top of stack
         |   +---------+  |
         |   |   30    |  |
         |   +---------+  |
         |   |   20    |  |
         |   +---------+  |
         |   |   10    |  | <-- bottom of stack
         |   +---------+  |
         |----------------|
    */

    vNumbers.pop_back();   // removes 40
    /*
         === Vector Stack ===
         |----------------|
         |   +---------+  |
         |   |   30    |  | <-- now top of stack
         |   +---------+  |
         |   |   20    |  |
         |   +---------+  |
         |   |   10    |  | <-- bottom of stack
         |   +---------+  |
         |----------------|
    */

    vNumbers.pop_back();   // removes 30
    /*
         === Vector Stack ===
         |----------------|
         |   +---------+  |
         |   |   20    |  | <-- now top of stack
         |   +---------+  |
         |   |   10    |  | <-- bottom of stack
         |   +---------+  |
         |----------------|
    */

    vNumbers.pop_back();   // removes 20
    /*
         === Vector Stack ===
         |----------------|
         |   +---------+  |
         |   |   10    |  | <-- only element left
         |   +---------+  |
         |----------------|
    */

    vNumbers.pop_back();   // removes 10
    /*
         === Vector Stack ===
         |----------------|
         |                |
         |                |
         |                |
         |----------------|
    */

    // predict the output:

    cout << "Numbers Vector: \n\n";

    // ranged loop
    for (int & Number : vNumbers) {
        cout << Number << endl;
    }

    cout << endl;

    // The Vector variable 'vNumbers' should be empty.

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////

// The EXACT SAME code below but without Stack illustrations:


int main()
{
    vector<int> vNumbers;

    vNumbers.push_back(10);
    vNumbers.push_back(20);
    vNumbers.push_back(30);
    vNumbers.push_back(40);
    vNumbers.push_back(50);

    // Now- just experiment with removing some of the .pop_back() functions
    vNumbers.pop_back();
    vNumbers.pop_back();
    vNumbers.pop_back();
    vNumbers.pop_back();
    vNumbers.pop_back();

    cout << "Numbers Vector: \n\n";

    for (int& Number : vNumbers) {
        cout << Number << endl;
    }

    cout << endl;

    return 0;
}



//////////////////////////////////////////////////////////////////////////////////////

// Examine this one & predict the output:

int main()
{
    vector<int> vNumbers;

    vNumbers.push_back(10);
    vNumbers.push_back(20);
    vNumbers.push_back(30);
    vNumbers.push_back(40);
    vNumbers.push_back(50);

  
    vNumbers.pop_back();
    vNumbers.pop_back();
    vNumbers.pop_back();
    vNumbers.pop_back();
    vNumbers.pop_back();
    vNumbers.pop_back();

    cout << "Numbers Vector: \n\n";

    for (int& Number : vNumbers) {
        cout << Number << endl;
    }

    cout << endl;

    return 0;
}

// The output: An exception is rendered because while the Stack is already empty,
//             you're attempting to remove an element from it by including .pop_back()


// So to fix the program WITHOUT removing this extra .pop_back() function
// Plus additional notes added to the program:
int main()
{
    vector<int> vNumbers;

    vNumbers.push_back(10);
    cout << "Vector's Stack Size = " << vNumbers.size() << endl;   // an additional note.
    vNumbers.push_back(20);
    vNumbers.push_back(30);
    vNumbers.push_back(40);
    vNumbers.push_back(50);

    // vNumbers.clear();   // clears the entire Stack on one shot.

    cout << "Vector's Stack Size = " << vNumbers.size() << endl;   // an additional note.


    vNumbers.pop_back();
    vNumbers.pop_back();
    vNumbers.pop_back();
    vNumbers.pop_back();
    vNumbers.pop_back();

    cout << "Vector's Stack Size = " << vNumbers.size() << endl;   // an additional note.

    if (!vNumbers.empty())
    {
        vNumbers.pop_back();
    }

    // or:
    
    if (vNumbers.size() > 0)
    {
        vNumbers.pop_back();
    }
  

    cout << "Numbers Vector: \n\n";

    for (int& Number : vNumbers) {
        cout << Number << endl;
    }

    cout << endl;

    return 0;
}