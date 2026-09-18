
#include <iostream>
using namespace std;


/* Two Dimensional Arrays :
      
    int x[3][4] = {    // Immediately think: It's a table with 3 rows, each containing 4 elements.

                     {1, 2, 3, 4},         // this is the 1st row  // that contains 4 elements (columns).
                     {5, 6, 7, 8},        // 2nd row              // that contains 4 elements (columns).
                     {9, 10, 11, 12}     // 3rd row              // that contains 4 elements (columns).
                  };

 
  This is the best way to initialize this 2-d array & that's how it should be done (or rather recommended).
  as other ways of initializing do exist where each individual value is initialized one by one
  but it makes developers error - prone and deems the code hard t read.

*/

/*  
===============================================================================================================
                                           |      
                                           |
                                           |  +---------+----------+----------+----------+----------+
int main()                                 |  |         |  Col 1   |  Col 2   |  Col 3   |  Col 4   |
{                                          |  +---------+----------+----------+----------+----------+
                                           |  |  Row 1  | x[0][0]  | x[0][1]  | x[0][2]  | x[0][3]  | <-- This row by itself is a 1-d array.
    //int x[Rows][Columns];                |  +---------+----------+----------+----------+----------+
                                           |  |  Row 2  | x[1][0]  | x[1][1]  | x[1][2]  | x[1][3]  | <-- This row by itself is another 1-d array.
    int x[3][4] = {                        |  +---------+----------+----------+----------+----------+
        {1, 2, 3, 4},                      |  |  Row 3  | x[2][0]  | x[2][1]  | x[2][2]  | x[2][3]  | <-- This row by itself is another 1-d array.
        {5, 6, 7, 8},                      |  +---------+----------+----------+----------+----------+
        {9, 10, 11, 12}                    |
    };                                     |       
                                           |
    return 0;                              |  +---------+----------+----------+----------+----------+
}                                          |  |         |  Col 1   |  Col 2   |  Col 3   |  Col 4   |
                                           |  +---------+----------+----------+----------+----------+
                                           |  |  Row 1  |    1     |    2     |    3     |    4     |
                                           |  +---------+----------+----------+----------+----------+
                                           |  |  Row 2  |    5     |    6     |    7     |    8     |
                                           |  +---------+----------+----------+----------+----------+
                                           |  |  Row 3  |    9     |    10    |    11    |    12    |
                                           |  +---------+----------+----------+----------+----------+
*/


/* Two Dimensional Arrays
   
   a (normal) variable:     int x     string name     double t    etc.



   an array variable:       int x[3]  // if it stores 3 elements           string names[4]  // if it stores 4 elements    etc.



   a 2-d array variable:    x[3][4]         // Immediately: it's a table with 3 rows, each containing 4 elements (columns).  
                              |  |
                    3 rows  <-|  |-> 4 columns  (each row contains 4 elements).
        
  
       // reserve a space in memory for a table containing 3 rows and 4 columns,
       // where, at this moment before the = sign, the table is empty or rather containing garbage values.
*/



// Examine the below code and follow the instructions:
int main()
{

    int x[3][4] = {  {1,2,3,4},   {5,6,7,8},   {9,10,11,12}  }; //  int x[3][4] immediately means: you've 3 rows, each containing 4 elements (columns).
                     // 1st row   // 2nd row   // 3rd row
                     // 
    // For accessing the 2-d array:
    for (int i = 0; i < 3; i++)       // i=0, i=1, i=2      // Outer for-loop representing rows  
    {
        for (int j = 0; j < 4; j++)    // i=0, i=1, i=2, i=3 // Inner for-loop representing the actual elements (columns).
        {
            cout << x[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}

/* Instructions to trace, step by step, the initialization of the 2-d array (CRUCIAL):
   
   1- Place a break point on the outer for-loop line:   for (int i = 0; i < 3; i++) 

   2- Run (to debug)

   3- Hightlight x, then SHIFT + F9 so that QuickWatch window pops up.

        - Note that x will be shown to have 3 rows.
            Expand on each row, to find out that it has 4 elements(columns).
            so 2-d array variable that's x has a space reserved in memory.


     4- Keep on Stepping Into (gradually executing the code) till reaching the line:   cout << x[i][j] << " ";
        where x[i][j]  is  x[0][0] 
     
     5- Hightlight  x[i][j], then SHIFT + F9  so that QuickWatch window pops up.
        Notice that its value is 1.

        Do another Step Into, so that 1 is printed out to the screen. 

        Keep on Stepping Into, till again reaching the line cout << x[i][j] << " "; 
        where  x[i][j]  is now  x[0][1] 

        Hightlight  x[i][j], then SHIFT + F9  so that QuickWatch window pops up.
        Notice that its value is 2

        Do another Step Into, so that 2 is printed out to the screen.

        DURING THIS PROCESS, you CAN highlight the values of i & j in both for-loops to MONITOR THEIR CURRENT VALUES.

        so keep on doing that tracing how the 2-d array gets initialized step by step.



*/

