

/* Two-Dimensional Array Mental Model:
     
   Examine the following

            int x[3][5]
                  |  |
   # of rows  <---|  |---> # of elements in each row (also refered to unnecessarily as # of columns)

   
   At this moment (before the = sign), 
   a space in memory is reserved for an empty 'table' consisting of 3 rows and 5 columns.
   (or rather a 'table' containing garbage values).

   THEREAFTER, The rows and colums will ALWAYS be accessed, for example, for:

   1- Storing elements.

       A- either directly:    int x[3][5] = { {1,6,4,0,9}, {2,4,8,1,7}, {7,3,0,4,2}   }
       or:
       B- performing calculations and then storing: 
          A nested for-loop is required where the values of i and j could be taken advantage of.

    Note: A & B is for processing the entire table
          but individual elements can be accessed directly via indexing without loops:
          x[1][3] = 42; // storing 42 as the 4th element in the 2nd row.
   
   2- Print the stored elements onto the screen.
      A nested for-loop is required for processing the entire table.
      However, for printing a specific element such as 9, simply use:
      cout << x[0][4] << endl;


      
*/

// CRUCIAL Example: 



#include <iostream>
#include <cstdio>   // for printf
#include <iomanip>  // not needed for this example (just  reminder) :for setw() manipulator.
using namespace std;


/*
 Write a program to store the multiplication table results 10 X 10 and print them out to the screen.

 01  02  03  04  05  06  07  08  09  10
 02  04  06  08  10  12  14  16  18  20
 03  06  09  12  15  18  21  24  27  30
 04  08  12  16  20  24  28  32  36  40
 05  10  15  20  25  30  35  40  45  50
 06  12  18  24  30  36  42  48  54  60
 07  14  21  28  35  42  49  56  63  70
 08  16  24  32  40  48  56  64  72  80
 09  18  27  36  45  54  63  72  81  90
 10  20  30  40  50  60  70  80  90  100

*/


void StoreElementsInArray(int array[10][10]) // automatically passed by ref. Including '&' renders exception.
{
	for (int i = 0; i < 10; i++)   //  outer for-loop (for rows)       // i = 0, i = 1, ... i = 9
	{
		for (int j = 0; j < 10; j++)  // inner for-loop (for columns)      // j = 0, j = 1, j = 2 ....... j= 9
		{
			array[i][j] = (i + 1) * (j + 1);
		}
	}
}

void PrintElementsInArray(int array[10][10])
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			//cout << array[i][j] << " "; // lacks the 2 digit formatting we're after.
			printf("%0*d ", 2, array[i][j]);  // pay attention to the empty space
			//printf("%0*d", 2, array[i][j]);  // deems the numebrs attached to each other (no spacing)
		}

		cout << endl;
	}
}



int main()
{
	int array[10][10];
	// so a space in memory is reserved for an empty'table' consisting of 10 rows & 10 columns
	// to access these rows and columns for storing elements (not directly)
		// do so using nested for-loop:

	StoreElementsInArray(array); // the argument is passed, automatically, along with its address in memory.

	// and to print out the stored elements>
	PrintElementsInArray(array); // the arguments is passed, automatically, along with its address in memory.


	return 0;
}





// Initial solution (perfctly fine):
//
//void FillOutMultiplyTable(unsigned short multiply[10][10])  // automatically passed by ref. Including the & sign renders an exception.
//{
//    for (int i = 0; i < 10; i++)   // i = 0, i = 1, ... i = 9
//    {
//        for (int j = 0; j < 10; j++) // j = 0, j = 1, j = 2 ....... j= 9
//        {
//            multiply[i][j] = (i + 1) * (j + 1);
//        }
//
//        cout << endl;
//    }
//}
//
//
//void PrintMultiplyTable(unsigned short multiply[10][10])  // automatically passed by ref. Including the & sign renders an exception.
//{
//    for (int i = 0; i < 10; i++)   // i = 0, i = 1, ... i = 9
//    {
//        for (int j = 0; j < 10; j++) // j = 0, j = 1, j = 2 ....... j= 9
//        {
//           //cout << multiply[i][j] << " ";
//            printf("%0*d " , 2, multiply[i][j]);
// 
//        }
//
//        cout << endl;
//    }
//}
//
//
//int main()
//{
//    
//    unsigned short multiply[10][10];   // there are 10 rows, each containing 10 elements. They are to be 1- First Filled out  2- and then later, Displayed.
//
//    FillOutMultiplyTable(multiply);   // the argument 'multiply' is automatically passed along with its address in memeory. Hence, the implementation is always passing by ref. without including '&'
//    PrintMultiplyTable(multiply);
//
//
//    return 0;
//}

