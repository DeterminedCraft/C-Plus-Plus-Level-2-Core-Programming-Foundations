
#include <iostream>
using namespace std;

// Register Variables have been abolished since C++ version 11.
// 
// because of the risks associated with their use.
// nevertheless, it is worthy to understand what they were.



/* Some pre-requisite knowledge forn understanding Register Variables:

  DURING RUNTIME, a space is reserved in memory for a variable when its line is executed. 
  (for example int a = 1;   or  string name = "Ahmad";);
  The RAM is where the reserved memory is.


  In terms of the speed of retrieving the value in memory:
  From the slowest to the fastest ( = nFrom the farest to the closest to CPU):

  Hard disk > RAM > Cash Memory > Register (a register is a tiny, ultra-fast storage location built directly inside the CPU).    

  Now, in the past the keyword "register" could be placed before the variable,
       so that the variable is stored in the CPU register instead of the RAM.
       this was done where extremely high speeds are required.
       Nevertheless, due to the associated risks, the use of register variables was abolished since C++ 11.
       (Registers are the most invaluable aspects in a PC in terms of, at least, speed.

  


*/



int main()
{
    



    return 0;
}


