
#include <iostream>
using namespace std;

/* In the past, we have studied LOGICAL OPERATORS that are the:

   AND &&    OR ||      NOT !

   Again- I emphasize that these are LOGICAL OPERATORS.
   ___________________________________________________________________


       ***** A review on the OR || Logical operator: *****

      Any "True" in OR, then the result is true:

      A       B       A || B
      ----------------------
      True    True    True
      True    False   True
      False   True    True
      False   False   False


      A       B       A || B
      ----------------------
      1       1       1
      1       0       1
      0       1       1
      0       0       0



   ------------------------------------------------------------------
   However,

   The single I, is called:   The Bitwise I Operator (The Bitwise Or Operator)

   Q: Why is it called Bitwise ?
   A: Examine the following:




    (12 I 25) ?

    12 = 00001100 (In Binary)
    25 = 00011001 (In Binary)

    Bit Operation of 12 and 25:

     00001100
   | 00011001       // these 2 binary numbers are compared bit by bit; hence the name "Bitwise" operator.
     -----------
     00011101 = 29 (In decimal)


     Therefore, (12 | 25) = 29

     - AND THIS HAS SOME MAGICAL APLICATIONS MOVING FORWARD.
     - This one simple frivolous line: (12 | 25) saves us weeks worth of work.



*/

int main()
{
    cout << "Result: " << (12 | 25) << endl;
    return 0;
}



int main()
{
    cout << "Result: " << (12 || 25) << endl;    // (1 || 1) = 1 or (True || True) = True  and 1 is printed out to the screen. (anything other than 0 is true).
    return 0;
}