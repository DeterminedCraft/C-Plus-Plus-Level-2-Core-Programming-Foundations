
#include <iostream>
using namespace std;

/* Changing Values in Debugging Mode:
*
*  While debugging, one can view the values of variables, arrays, functions, expressions & anything one could think of.
*
* ALSO,
*
* In the middle of debugging:
* For example, a break point is placed at the line where a = 10, then you can change this value of a during the runtime.
* as there are many cases, during debugging, where one wants to try different values of something specific
* in order toc heck if something is correct or not.
*
*
* Example:
*
* - In the below program place a break point at a = 10;
* - Run the program
* - Press F11 so the line a = 10; is executed
* - Now hover your mouse over this a.
* - Notice in the hovering message, you can change the value for a from 10 to anything else (ex: to 111) and click on Enter.
*
* Now, without doing anything else and while still in the runtime,
	   the value of a is now 111 at the current line that is still displayed as a = 10;


 Another example:
  Keep on pressing F11 till you reach the for-loops line,
  hover your mouse over i, where the hovering message shows i as  -85945w55 something.

  Inside the hovering message, change it to for example 4 and press ENTER.
  Now^, hover your mouse on the for-loop body and i will be shown as 4


  Summary, the values DURING runtime can be changed via:

  1- The mouse by hovering it over.
  2- The Auto Window.
  3- The Watch Window.

  So, these are the 3 places where values could be changed DURING runtime
  without having to directly change a value in the editor and then do a re-run of the program.

  This will be NEEDED A LOT down the road t;
  A- Experiment with different cases.
  B- Deeper debugging.


*/





int MySum(int a, int b)
{
	int s = 0;
	s = a + b;
	return s;
}
int main()
{
	int arr1[5] = { 200,100,50,25,30 };
	int a, b, c;
	a = 10;
	b = 20;
	a++;
	++b;
	c = a + b;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	for (int i = 1; i <= 5; i++)
	{
		cout << i << endl;
		a = a + a * i;
	}
	c = MySum(a, b);
	cout << c;
	return 0;
}


