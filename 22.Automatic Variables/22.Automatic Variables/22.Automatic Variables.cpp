
#include <iostream>
using namespace std;


/*  

     So the variable we declare has to have a data type. Also the proper way of
     thinking dictates consideration for the size reserved in memory.

     However, C++ supports what so called 'Automatic Variables".
     
     NEVER use Automatic Variables.
     Nevertheless, it's imperative to know that they are !.


*/





int main()
{
    auto x = 10; // Type Integer   - compiler automatically converts the value to int, reserving the int memory space.
    auto y = 10.5; // Type Double  - same here.
    auto z = "Ahmed Abu-Hadhoud"; // Type String - same here.

    cout << x << endl;
    cout << y << endl;
    cout << z << endl;

    return 0;
}

// Bottome line, never use automatic variables.
// you as a programmer should know when to use an integer, short long, etc.
// this makes things faster for you.


