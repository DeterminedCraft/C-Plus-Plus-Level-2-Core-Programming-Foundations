

#include <iostream>
using namespace std;



// The Call Stack / Call Hierarchy is an EXTREMELY important topic to master       هو التدرج في إستدعاء الفنكشن
// Expecially that, one is going to have thousands of lines of code when building applications
// where you want to know the function's implementation is called in the program.

// This concept will be elaborated further on, when introducing the mighty topic of Data Structures.


/*
================================================================================
     PROGRAM                                                CALL STACK
================================================================================

 void Function4()                                      +----------------------+
 {                                                     |      Function4       |   <-- then this one becomes Active Frame when Function4() is called (implementation executed).
     cout << "Hi I'm function4" << endl;   // finally  +----------------------+
                                                            ^
                                                            |
 void Function3()                                      +----------------------+
 {                                                     |      Function3       |   <-- then this one becomes Active Frame when Function3() is called (implementation executed).
     Function4();                                      +----------------------+
                                                            ^
                                                            |
 void Function2()                                      +----------------------+
 {                                                     |      Function2       |   <-- then this one becomes Active Frame when Function2() is called (implementation executed).
     Function3();                                      +----------------------+
                                                            ^
                                                            |
 void Function1()                                      +----------------------+
 {                                                     |      Function1       |   <-- then this one becomes Active Frame when Function1() is called (implementation executed).
     Function2();                                      +----------------------+
                                                            ^
                                                            |
 int main()                                            +----------------------+
 {                                                     |        Main          |   <-- Active Frame (at first) when main() is executed.
     Function1();                                      +----------------------+

     return 0;                                        // There is ONLLY one active frame at a time.
    
 }



 Execution flow:

 Program starts → main() frame is pushed → becomes active.

 main() calls Function1 → Function1 frame pushed → becomes active.

 Function1 calls Function2 → Function2 frame pushed → becomes active.

 Function2 calls Function3 → Function3 frame pushed → becomes active.

 Function3 calls Function4 → Function4 frame pushed → becomes active.

 Function4 prints → finishes → Function4 frame popped.

 Control returns to Function3 → Function3 finishes → Function3 popped.

 Control returns to Function2 → Function2 finishes → Function2 popped.

 Control returns to Function1 → Function1 finishes → Function1 popped.

 Back to main → main finishes → main popped → program ends.

 There is only one active frame at any moment — always the top of the stack.

*/





/*
 It is a Stack = Hierarchy:  a function is called by a function that is called by a function that is called by a function etc.

 A call stack is a reserved block of memory used to store stack frames,
 where each frame represents one function currently being executed.

 When a function is called, a new frame is pushed onto the stack.
 When that function finishes, its frame is popped off the stack.

 The call stack follows the rule:

 Last pushed → First popped
 (LIFO: Last-In, First-Out)

 So if the program calls functions in this order:

 main() → Function1() → Function2() → Function3() → Function4()

 Then Function4 is the last one pushed, and therefore the first one popped.
 After Function4 finishes, its frame is removed, and execution returns to Function3.
 This continues until all frames are popped.

 When the final frame (main) is popped, the call stack becomes empty,
 which means the program has completely finished execution.




*/




void Function4()
{
    cout << "Hi I'm function4" << endl;
}

void Function3()
{
    Function4();
}

void Function2()
{
    Function3();
}

void Function1()
{
    Function2();
}


int main()
{
    Function1();

    return 0;
}

/*   IMPORTANT Exercise:
     
     If you want to examine how the program is built/ put together

     OR:

     When stumbling upon a function's implementation, I'd like to know where it's called in my program:

     1- Highlight the function's name.
     2- Right-click on it.
     3- View Call Hierarchy (Ctrl + K,   Ctrl + T)    // or View Call Stack in some IDEs.
     
     Then, Call Hierarchy window open up:
        One will have all info on where this function was called; plus the entire call hierarchy in the program.
     





*/