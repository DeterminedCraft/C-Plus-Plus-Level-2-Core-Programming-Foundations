
#include<iostream>
using namespace std;

/*

 Debug >


 Step Into   F11                   Go through the code, literally line by line without skipping any line no matter what it is.




 Step Over   F10                   Execute the line of code quickly without stepping into its details
								   (Ex: Execute a called function quickly & entirely without taking the time to execute
								   its implementation line by line as what F11 does).



 Step Out    Shift + F11           If you're already inside a function's implementation (say by mistake),
								   where you don't want to keep on executing the implementation line by line
								   (as you'd consider it
								   a waste of time and effort since you know that the function works properly,
								   then execute it
								   immediately & entirely and step out of it, on the line after it.)



*/

// Note: All these debugging tutorials are CRUCIAL to productivity and reducing mental load induced by
//       observing variables, memory, and what happens to variables in order to rectify bugs and mistakes



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
