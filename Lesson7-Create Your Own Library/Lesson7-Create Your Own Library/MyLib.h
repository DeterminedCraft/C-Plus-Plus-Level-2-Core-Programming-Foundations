#pragma once   // this is Compiler Directive: do not re-load this liobrary every single time.




// Start including utilities below (functions & procedures) under a category that is effectively our own namespace
// serving as a virtual embrella, under which, our lumped in utilities exist.

// this is just how we've been having the line:  using namespace std;
//                                               where the "std" part has built-in utilities under it.



// For example- I will have the following implementation that I can call in my main file.:

#include <iostream>
using namespace std;

namespace MyLib
{
	void test()
	{
		cout << "This is my first function inside my first library\n";   
		
		/* cout portion will be in red unless unless you include:
		   
		   #include <iostream>
		   using namespace std;
		   
		
		* */
	}

	/* Now, calling this utility in the main file requires the following :
	
	  1- #include "MyLib.h"    // double quotation is for local libraries; <> are for buil-in libraries.
	
	*/

	int Sum2Numbers(int Num1, int Num2)
	{
		return Num1 + Num2; 
	}

}
