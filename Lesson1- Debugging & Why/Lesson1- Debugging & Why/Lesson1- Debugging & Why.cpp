#include<iostream>
using namespace std;

/*
 
 Debugging doesn't produce a .exe file that's run afterwards.

 Instead, one walks through the code line by line
 Where on each line, one can view each single variable and it's value in memory.
 So, we trace each value to determine where the error is = debugging.

 A developer has to master debugging as it makes finding errors/bugs much easier.

 ----------------------------------------------------------------------------------------

 Break Points & Memory values:

 1- Run the blelow program.
 2- You'll see values printed out.
 3- Now, assume that some number isn't shown correctly:
		so then, run the program line by line to trace this incorrect value.

 How to do that:

 Any IDE will have Run or Debug buttons.
 Now, below them there exists:

 Debug     x64
 list      list

 The debug list contains: Debug & release (will talk about release later).
 The point is: ensure that Debug is selected.

 so:
 1) Place a break point (red) to the left of the line number.
		It means: run the program and when you reach this red dot, stop and do not execute its line.

		Note: Do not place the break point on any empty line as it will not casue the program to stop executing at such line.

		so place the break point on the line where a = 10.

 2) Now run the program by clicking on "Local Window Debugger"
 3) Notice that, an arrow is formed inside the break point. Meaning, its line is not executed & that I'm frozen in the run time
    where the program isn't finished executing and (in the case of the line on which a = 10) nothing is printed out to the 
	screen yet.

 4) At this time (while being frozen in run time):

    where the break red point with arrow inside it is at the line where a = 10
	Hover your mouse over a and notice:
	
	a contains some strange value that's currently -858993460.
	this is the value that is currently stored in a because on the preceding line, 
	a was declared without initializing it. So it gets filled with some rubbish value. This is why, variables need to be initialized 
	as soon as they are declared (The justification is that, rubbish values can casue problem during run time).

	This rubbish value stored in a, is the result of reserving a space in memory for variable a (spaces always contain data) 
	without assigning it a value.

	Now for the break point containing the arrow inside it, on the line where a = 10,
	if I hover my mouse over a, then a will show a rubbish value instead of 10.
	This is because I have not yet executed the line where a = 10.

	So, to store 10 in a, press the "Step into" key:
	That is F11 or click on "Debug" and look for   "Step in F11"

	so after F11 is pressed, then the line of a = 10 is executed
	and the breaking red point with arrow inside it moves to the next line where b = 20 is.
	this means that the line of b = 20 has not been executed yet.
	Now, if you hover your mouse over a where a = 10 is, then a will show that it is currently storing 10 (as the line is now executed).
	And if you hover your mouse over b, then b will show that it's storing some rubbish value.

	and if you again click on F11, 
	then the line where b = 20 is executed and the red breaking point with arrow inside it move to the next line.
	and so on.

	Now, F11 could be a different F# such as F12, depending on the IDE version. it can also be customized..
	So first, always investigate the shortcut for "Stepping into" which executes the program line by line.
	to inverstigate: Click on the Debug button to open up its dropdown and check the shortcut for Stepping into

	So use the debugging feature to trace the code line by line in order to check the values in memory
	for each variable on a given line.


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