
#include <iostream>
#include <iomanip>    // needed for setw(#) manipulator.  //This library is stored at  std::setw
using namespace std;



/* Understand setw() very well as it will be very frequently utilitzed in future projects and homeworks:
   
   - How to draw menus.
   - Show existing items.
   
   * It is just a manipulator; Not a function.


* */


/* setw Manipulator:

  The Set Width Manipulator helps with formatting the putput with spaces.
   
   Example: I have decided that:    setw(10) << "Ahmad"
                                    
                                    Reserves 10 spaces and inside it there will be Ahmad
                                    so Ahmad will be printed from the right and the rest will is 5 spaces.


 Setw() manipulator exists in the iomanip library.



*/


int main()
{
    cout << "---------|--------------------------------|---------|" << endl;
    cout << "  Code   |         Name                   |  Mark   |" << endl;
    cout << "---------|--------------------------------|---------|" << endl;
    cout << "C101" << "|" << "Introduction to Programming 1" << "|" << "95" << "|" << endl;
    cout << "C102" << "|" << "Computer Hardware" << "|" << "88" << "|" << endl;
    cout << "C10352" << "|" << "Network" << "|" << "75" << "|" << endl;

    cout << "---------|--------------------------------|---------|" << endl << endl << endl << endl;

      /* After running the program, we notice that the header and the footer are displayed properly.
      
       However, the content is out of format
       where one element is longer, then the next is shorter, etc.
       Therefore, the display appears disarrayed.
    
       Manually adjusting spaces is IMPRACTICAL 
       as the cource codes have different lengths along with their repective titles (The sane applies to marks). 
       PLUS, manual spacing as a primitive resort.
    
       to resolve this issue we use the Set Width manipulator setw() that in exists in the library iomanip   */


    cout << "*************************************************************\n\n\n\n";
   
    


    cout << "---------|--------------------------------|---------|" << endl;
    cout << "  Code   |         Name                   |  Mark   |" << endl;
    cout << "---------|--------------------------------|---------|" << endl;
                     
    cout << setw(9) << "C101" << "|" << setw(32) << "Introduction to Programming 1" << "|" << setw(9) << "95" << "|" << endl;
    cout << setw(9) << "C102" << "|" << setw(32) << "Computer Hardware" << "|" << setw(9) << "88" << "|" << endl;
    cout << setw(9) << "C10352" << "|" << setw(32) << "Network" << "|" << setw(9) << "75" << "|" << endl;
    cout << "---------|--------------------------------|---------|" << endl;


    /*  Explanation:
        cout << setw(9) << "C101"  // Reserve 9 spaces & inside it there will be C101
                                   // so C101 is printed out from the right and the rest is 5 spaces.

        
        setw(32) << "Introduction to Programming 1"  // Reserve 32 spaces & inside it there will be  Introduction to Programming 1
                                                    // so  Introduction to Programming 1  is printed from the right and the rest is 3 spaces.


        cout << setw(9) << "C102" // reserve 9 spaces & inside it there will be C102
                                 // so C102 is printed out from the right and the rest is 5 spaces.

        cout << setw(9) << "C10352" // reserve 9 spaces & inside it there will be C10352
                                   // so C10352 is printed out from the right and the rest is 3 spaces.


        So, I deliberately chose 9 and 32 as the columns widths
        as they are bigger than the biggest course code & the Course Name 
        that I currently have or WILL HAVE in the FUTURE.

    */

    
 return 0;
}



