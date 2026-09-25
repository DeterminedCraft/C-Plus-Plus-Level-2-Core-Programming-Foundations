
#include <iostream>
using namespace std;


/*  Call By Reference Using Pointers
    





*/


/*  remember the following swap program ? ! Now, try to solve it using pointers.


 void swap(int& n1, int& n2)
 {
     int temp;
     temp = n1;
     n1 = n2;
     n2 = temp;
 }

 int main()
 {
     int a = 1, b = 2;

     cout << "Before swapping" << endl;
     cout << "a = " << a << endl;
     cout << "b = " << b << endl;

     swap(a, b);

     cout << "\nAfter swapping" << endl;
     cout << "a = " << a << endl;
     cout << "b = " << b << endl;
 }

 */

// solution:


 void swap(int * n1, int * n2) // n1 has the address of a      n2 has the address of b.
 {
     n1 = n2;   // n1 now has the address of b
     n2 = n1;  // n2 now has the address of a

 }

 int main()
 {
     int a = 1, b = 2;

     cout << "Before swapping" << endl;
     cout << "a = " << a << endl;
     cout << "b = " << b << endl;

     swap(a, b);

     cout << "\nAfter swapping" << endl;
     cout << "a = " << a << endl;
     cout << "b = " << b << endl;
 }