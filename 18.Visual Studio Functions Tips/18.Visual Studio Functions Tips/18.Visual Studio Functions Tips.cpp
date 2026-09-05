
#include <iostream>
using namespace std;

/*
  Collapse/ Expand,  Go to Definition,  Go to Declaration,  View call Hierarchy, Final All References, Re-naming (for a single project or a solution)
  ----------------------------------------------------------------------------------------------------------------------------------------------------


  Tips on how to use Visual Studio.
  This is CRUCIAL when you have large programs or simply applications.

  1-  Get habituated with collapsing / expanding functions. Collapsing is especially useful for gaining clarity on the structure.

  2-  Reaching the implementation of a called function:
		1- Hightlight the called function  --> The implementation will be hightlighted as well (practical for small programs).
		2- However when you have large programs:  Right-click on the called function > Go to definition (F12)

  3- Reaching the declaration of an implemented function:
		1- Highlight the name of the implemented function --> Right-click ---> Go to Declaration ( Ctrl + F12).

  4- To know who called a function:
		Right-click --> View Call Hierarchy Ctrl+K, Ctrl+T

  5- Where a function was referenced ? (both called & implemented) ?: Right-Click --> Find All References (Shift + F12)

  6- ** Peak Definition (Alt + F12)

  7- Changing a function's name: Right-click --> re-name --> the re-name window pops up:

														"Search Scope" option:

														 - Current Project.
														 - Entire Solution ( this is an advanced topic where one solution can contain more than one project so the new name is reflected across the entire solution).


*/



void Function2();

void Function4()
{
	cout << "Hi I'm function4 " << endl;
}


void Function3()
{
	Function4();
}


void Function1()
{
	Function2();
	Function4();
}



int main() {
	Function1();
	return 0;
}


void Function2()
{
	Function3();
}
