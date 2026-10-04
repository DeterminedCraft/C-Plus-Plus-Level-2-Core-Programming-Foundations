
#include <iostream>
using namespace std;

/* 
┌──────────────────────────────────────────────────────────────┐   ┌─────────────────────────────┐
│                          PROGRAM                             │   │            MEMORY           │
│                                                              │   │                             │
│  #include <iostream>                                         │   │  Name: a                    │
│  using namespace std;                                        │   │  ┌────────┐                 │
│                            At this point                     │   │  │   10   │                 │
│  void Function1(int a)   --------------------------------->  │   │  └────────┘                
│  {                                                           │   │  Address: 000000469851FC54  │
│      a++;                                                    │   │                             │
│  }                                                           │   │                             │
│                                                              │   │  Name: a                    │
│  int main()                                                  │   │  ┌────-───┐                 │
│  {                      At this point                        │   │  │   10   │
│      int a = 10;  ---------------------------------------->  │   │  └─────-──┘                 │
│                                                              │   │  Address: 000000469851FD31  │
│      Function1(a);                                           │   │                             │
│      cout << a << endl;     // 10                                │                             │
│                                                              │   │                             │
│      return 0;                                               │   │                             │
│  }                                                           │   │                             │
└──────────────────────────────────────────────────────────────┘   └─────────────────────────────┘
*/


// to explain more:

void function1(int a) // passing by value. 
{                     // A space in memory is created for another variable also named a, whose scope is function1, with the copied value 10.
	a++;
}


int main()
{
	int a = 10; // A space in memory is created for 'a',whose scope is main(),s with the value 10.

	function1(a);  // 'a' is passed as an argument in this calling function
	
	cout << a << endl;   // 10.

	return 0;
}





// This is exactly the same as:
/*
┌──────────────────────────────────────────────────────────────┐   ┌─────────────────────────────┐
│                          PROGRAM                             │   │            MEMORY           │
│                                                              │   │                             │
│  #include <iostream>                                         │   │  Name: x                    │
│  using namespace std;                                        │   │  ┌────────┐                 │
│                            At this point                     │   │  │   10   │                 │
│  void Function1(int x)   --------------------------------->  │   │  └────────┘
│  {                                                           │   │  Address: 000000469851FC54  │
│      x++;                                                    │   │                             │
│  }                                                           │   │                             │
│                                                              │   │  Name: a                    │
│  int main()                                                  │   │  ┌────-───┐                 │
│  {                      At this point                        │   │  │   10   │
│      int a = 10;  ---------------------------------------->  │   │  └─────-──┘                 │
│                                                              │   │  Address: 000000469851FD31  │
│      Function1(a);                                           │   │                             │
│      cout << a << endl;     // 10                                │                             │
│                                                              │   │                             │
│      return 0;                                               │   │                             │
│  }                                                           │   │                             │
└──────────────────────────────────────────────────────────────┘   └─────────────────────────────┘
*/


// to explain more:


void function1(int x)  // here I decided to name it x instead of a      // passing by value. 
{                     // A space in memory is created for x, whose scope is function1, with the copied value 10.
	x++;
}


int main()
{
	int a = 10; // A space in memory is created for 'a',whose scope is main(),s with the value 10.

	function1(a);  // 'a' is passed as an argument in this calling function

	cout << a << endl;   // 10.

	return 0;







////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////


	/*
┌──────────────────────────────────────────────────────────────┐   ┌─────────────────────────────┐
│                          PROGRAM                             │   │            MEMORY           │
│                                                              │   │                             │
│  #include <iostream>                                         │   │                             │
│  using namespace std;                                        │   │                             │
│                          points to the address of variable a     │
│  void Function1(int &a)  ---------------------------------------
│  {                                                           │ |    
│      a++;                                                    │ |                               │
│  }                                                           │ |                               │
│                                                              │ |     Name: a                   │
│  int main()                                                  │ |    ┌────-───┐                 │
│  {                      At this point                        │ |    │   10   │
│      int a = 10;  ---------------------------------------->  │ |    └─────-──┘                 │
│                                                              │ |---> Address: 000000469851FD31 │
│      Function1(a);                                           │                                 │
│      cout << a << endl;     // 11                                                              │
│                                                              │   │                             │
│      return 0;                                               │   │                             │
│  }                                                           │   │                             │
└──────────────────────────────────────────────────────────────┘   └─────────────────────────────┘
*/

	// to explain more:

	void function1(int &a) // passing by reference.
	{              // No space in space in memory is created. it points to the address of variable a (what's sent).
		a++;       
	}



	int main()
	{
		int a = 10; // A space in memory is created for 'a',whose scope is main(),s with the value 10.

		function1(a);  // 'a' is passed as an argument in this calling function

		cout << a << endl;   // 11.

		return 0;
	}


	
	// This is exactly the same as:


	/*
┌──────────────────────────────────────────────────────────────┐   ┌─────────────────────────────┐
│                          PROGRAM                             │   │            MEMORY           │
│                                                              │   │                             │
│  #include <iostream>                                         │   │                             │
│  using namespace std;                                        │   │                             │
│                          points to the address of variable a     │
│  void Function1(int &x)  ---------------------------------------
│  {                                                           │ |
│      x++;                                                    │ |                               │
│  }                                                           │ |                               │
│                                                              │ |     Name: a                   │
│  int main()                                                  │ |    ┌────-───┐                 │
│  {                      At this point                        │ |    │   10   │
│      int a = 10;  ---------------------------------------->  │ |    └─────-──┘                 │
│                                                              │ |---> Address: 000000469851FD31 │
│      Function1(a);                                           │                                 │
│      cout << a << endl;     // 11                                                              │
│                                                              │   │                             │
│      return 0;                                               │   │                             │
│  }                                                           │   │                             │
└──────────────────────────────────────────────────────────────┘   └─────────────────────────────┘
      a هذا المتغير في الذاكرة له اسم     
      x و كذلك اسم الدلع له هو
      
	  so a & x has the EXACT SAME space in memory  ( meaning same address)
	  that's, in this specific program, either accessed via x or a
	  
	  */ 

	void function1(int& x) // passing by reference.
	{                 // No space in space in memory is created. it points to the address of variable a (what's sent).
		x++;
	}


	int main()
	{
		int a = 10; // A space in memory is created for 'a',whose scope is main(),s with the value 10.

		function1(a);  // 'a' is passed as an argument in this calling function

		cout << a << endl;   // 11.

		return 0;
	}




	/////////////////////////////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////////////////
	// 
	// Examine the below program demonstrating how the address of a variable is printed out 

	void function1(int& x) // passing by reference.
	{                 // No space in space in memory is created. it points to the address of variable a (what's sent).
		x++;
	}


	int main()
	{
		int a = 10; // A space in memory is created for 'a',whose scope is main(),s with the value 10.

		function1(a);  // 'a' is passed as an argument in this calling function

		cout << a << endl;   // 11.
		cout << &a << endl;   // Prints the Hexidecimal address of variable a

		return 0;
	}
