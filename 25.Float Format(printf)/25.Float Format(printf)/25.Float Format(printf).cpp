
#include <iostream>
using namespace std;

// Examine the code below:

 int main() {

    float PI = 3.14159265;

    //Precision specification
    printf("Precision specification of %.*f\n", 1, PI);    // 3.1
    printf("Precision specification of %.*f\n", 2, PI);    // 3.14
    printf("Precision specification of %.*f\n", 3, PI);    // 3.142
    printf("Precision specification of %.*f\n", 4, PI);    // 3.1416


    float x = 7.0, y = 9.0;
    printf("\nThe float division is : %.3f / %.3f = %.3f \n\n", x, y, x / y);   //       7.000 / 9.000  =0.778

    double d = 12.45;
    printf("The double value is : %.3f \n", d);    // 12.450
    printf("The double value is : %.4f \n", d);    // 12.4500


    return 0;
 }


 /* Miscellaneous notes:
  


  Intuitive note regarding the expression   %.*f
  : pay attention to the star * as it dictates the number of digits after the decimal.

  On a line such as:
  printf("Precision specification of %.*f\n", 3, PI);
  The value stored in PI is 'grabbed', replacing the %.*f expression with it resulting in 3.142


  The original value of PI will not be modified
  as the formatting is only performed for the onto screen display.
 
 
 
 
 */
