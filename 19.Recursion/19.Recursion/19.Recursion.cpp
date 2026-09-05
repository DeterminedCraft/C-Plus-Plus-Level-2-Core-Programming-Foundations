
#include <iostream>
using namespace std;


/* Recursion: 
   
   A function that calls itself ?
   This called a recursive call. Recursion has benefits but it also has **SEVERE disadvantages or drawbacks.

   here, we will explain what recursion is, when to use it, 
   & especially when NOT to use recursion as this is the aspect that's not touched on by most instructors. 
   Most instructors will teach you about it, but they will never WARN about when not to use it.



   Now, simply look at the program diagram below:

*/





/*
================================================================================
     PROGRAM                         OUTPUT                    CALL STACK
================================================================================


 void PrintNumbers(int N, int M)
 {
     if (N <= M)
     {
         cout << N << endl;             4       +----------------------+
         PrintNumbers(N + 1, M);                | PrintNumbers(4,4)   |   <-- <-- then this one becomes Active Frame when PrintNumbers(4, 4) is called (implementation executed).
     }                                          +----------------------+

 }                                      3       +----------------------+
                                                | PrintNumbers(3,4)   |   <-- then this one becomes Active Frame when PrintNumbers(3, 4) is called (implementation executed).
                                                +----------------------+

  int main()                            2       +----------------------+
  {                                             | PrintNumbers(2,4)   |   <-- then this one becomes Active Frame when PrintNumbers(2, 4) is called (implementation executed).
                                                +----------------------+
 
     PrintNumbers(1, 4);                1       +----------------------+
                                                | PrintNumbers(1,4)   |   <-- then this one becomes Active Frame when PrintNumbers(1, 4) is called (implementation executed).
      return 0;                                 +----------------------+

  }                                             +----------------------+
                                                |         Main         |  <-- Active Frame (at first) when main() is executed.
                                                +----------------------+
     
 


 // Crucial reminder: 
    when main() becomes the active frame, the line(s) of code if it/they exist will execute
    and then on the next line, the called function (in this case: PrintNumbers(1, 4)) becomes the active frame as it's executed.



    When PrintNumbers(4,4) frame becomes active -- >   if (false)  
    --> controller exits PrintNumbers(4,4) in the program --> and as soon as controller exists: Function  PrintNumbers(4,4)  popped off the stack.


    now, PrintNumbers(3,4) is what we have on the top of the stack  --> is there something to execute in the code ? 
    Answer is no, so  PrintNumbers(3,4) is popped off the stack.

    now, PrintNumbers(2,4) is what we have on the top of the stack  --> is there something to execute in the code ?
    Answer is no, so  PrintNumbers(2,4) is popped off the stack.

    now, PrintNumbers(1,4) is what we have on the top of the stack  --> is there something to execute in the code ?
    Answer is no, so  PrintNumbers(1,4) is popped off the stack.

    now, main() is what we have on the top of the stack  --> is there something to execute in the code ?
    Answer is yes (return 0) and program controller exits main(), so  main() is popped off the stack.

    The stack is now empty.

  
  So, this is the concept of Recursive call (Recursion): A function that calls itself !

  This concept is EXTREMELY important to train on & master.





================================================================================
*/

// it is CRUCIAL that you train on & understand the following code snippet:


//void PrintNumbers(int N, int M)
//{
//    if (N <= M)
//    {
//        cout << N << endl;
//        PrintNumbers(N + 1, M);
//    }
//}
//
//int main()
//{
//    PrintNumbers(1,10);
//
//    return 0;
//
//}


/*Now, we're told that recursive functions can be used with no issues and all is fine !

  this is because 99 % of instructors have no experience with recursive functions, never used it or had experienced its dangers
  nor know what is Stack and Call Stack is.
 
  and on top of that, Call Stack has its limits. This is why you can not just use recursive functions without understanding.
  For example, 
  
  let us slightly modify our program so that we have:     */

 

//void PrintNumbers(int N, int M)
//{
//    if (N <= M)
//    {
//        cout << N << endl;
//        PrintNumbers(N + 1, M);
//    }
//}
//
//int main()
//{
//    PrintNumbers(1, 100);
//
//    return 0;
//
//}

// and the output will be from 1 to 100 with no problem.



// But if we have a random large number such as  999919  & observe what the use of recursion induces:

void PrintNumbers(int N, int M)
{
    if (N <= M)
    {
        cout << N << endl;
        PrintNumbers(N + 1, M);
    }
}

int main()
{
    PrintNumbers(1, 999199);

    return 0;

}

/* The outcome is a run - time exception :
 where the console displays up to 3992
 and a run time STACK OVERFLOW exception is displayed on the line " cout << N << endl;"

Exception non gérée à 0x00007FFFF5590CF7 (ucrtbased.dll) dans 19.Recursion.exe  : 0xC00000FD : Stack overflow(paramètres  : 0x0000000000000001, 0x00000090F2303000).

 The analogy is that a stack is similar to a water storage unit having a limited volume (data can overflow = STACK OVERFLOW exception).
 
 In a call stack, every function call reserves a space in memory. This is why, one has to be cautious.

 THIS IS THE REASON WHY THE CONCEPT OF RECURSION / UTILIZATION OF RECURSIVE CALLS IS NOT TO BE USED ALL TOGETHER.
 So stick to loops instead of recursion.
 Recursion is to ONLY be used if you are sure that you won't reach a Stack Overflow situation / Error.

 This is why programming, in general, requires knowledge and not just postulations and assumptions
 because we are working with memory and systems.

 So for example- for your applications, the numbers of users increased and now, all of the sudden, the whole app is down.
 this is because you never understood many concepts (7afid mish fahim).


 Fun info: Python gives you a little stack memory whereas C++ gives you a much bigger stack.
*/

