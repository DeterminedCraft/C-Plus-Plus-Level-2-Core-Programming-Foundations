
#include <iostream>
using namespace std;

/*
   
   formatted يعني مرتب بالشكل الذي انت تريده 

 
   
   The printf and the cout functions are similar.
   However; the former is a formatting function.The latter is not.
   The printf allows us to format the numbers that are printed out to the screen. The cout can not.

   The C++ printf has an equivalent in most programming languages.

    In this lesson, we will demonstrate how to format the integer numbers
    that are printed out to the screen.


*/







/*
  The format goes as follows:

  printf     %d         ,variable         ==>  Example:               printf("The number is = %d \n" , 100);        // output: 100
             |                          
             |                            ==> Instead of the usual:   cout << "The number is = " << 100 << "\n";     // output: 100
             |                                where 'cout' and '<<'  are utilized.
             |
             |
             |-->  or :   %0*d, #     (width = total number of digits for the number)

             ex:  variable = 8   
                               %0*d , 2   =  08
                               %0*d , 3   =  008
                               %0*d , 4   =  0008
                               %0*d , 5   =  00008                                                                                                              

*/


    int main() {

        int page = 1, TotalPages = 10;

        // print string and int variable
        printf("The page number = %d \n", page);    //    The page number = 1
        printf("You are in page %d of %d \n", page, TotalPages);   // You are in page 1 of 10


        //Width specification (is the practical actual use)
        // As sometimes you may want all numbers (or some) to be of a specific number of digits.
        printf("The page number = %0*d \n", 2, page);    // The page number = 01
        printf("The page number = %0*d \n", 3, page);    // The page number = 001
        printf("The page number = %0*d \n", 4, page);   // The page number = 0001
        printf("The page number = %0*d \n", 5, page);   // The page number = 00001

        int Number1 = 20, Number2 = 30;
        printf("The Result of %d + %d = %d \n", Number1, Number2, Number1 + Number2);  
               // "The Result of 20 + 30 = 50"
    }
    


     /*Equivalent code with all of the couts extra work.
     Side by side comparison.*/

    int main() {

        int page = 1, TotalPages = 10;

        // print string and int variable
        printf("The page number = %d \n", page);
        cout << "The page number = " << page << "\n";   // I'm using:   cout , <<

        printf("You are in page %d of %d \n", page, TotalPages);
        cout << "You are in page " << page << " of " << TotalPages << "\n";

        //Width specification
        printf("The page number = %0*d \n", 2, page);    // 01
        cout << "The page number = 0" << page << "\n"; 

        printf("The page number = %0*d \n", 3, page);     // 001
        cout << "The page number = 00" << page << "\n";

        printf("The page number = %0*d \n", 4, page);     // 0001
        cout << "The page number = 000" << page << "\n";

        printf("The page number = %0*d \n", 5, page);    //  00001
        cout << "The page number = 0000" << page << "\n";


        int Number1 = 20, Number2 = 30;
        printf("The Result of %d + %d = %d \n", Number1, Number2, Number1 + Number2);
        cout << "The Result of " << Number1 << " + " << Number2 << " = " << Number1 + Number2 << "\n";
    }

