
#include <iostream>
using namespace std;

/* 
  You can place more than one break point in the program.

  - Place two or more break points in the program.
  - Click on F11: The program will execute till it reaches the first break point that will now have an arrow inside it:
                  meaning that the corresponding line has not been yet executed as the freeze in execution time.
 
  - Now we can press F5 so that all the remaining lines of code execute, up to the next break point.
    This is done instead of pressing F11 over and over in order to execute the program line by line.


	Another tip: When debugging and while being frozen in run time, you can press on the stop button (red aquare)
	             to abort debugging.


	Another tip: While being frozen in run-time and while the arrow is shown inside the red break point,
	             you can drag this yellow arrow to any line you would like in your code whether upwards or downwards,
				 so that this new line is what will be stepped into when pressing F11.


    Another tip: Assume that I have already placed some break points in my code, and that I now need to run my program
	             normally ( no debuggin). So instead of removing these break points that I need, I can instead
				 disable them: 
				              Debug > Disable All Breakpoints.
				 notice that, the break points will turn into empty circles (disabled).
				 and to enable them back:

				              debug > Enable All Breakpoints.

				And to delete these breakpoints:
				               debug > Delete All Breapoints.


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

