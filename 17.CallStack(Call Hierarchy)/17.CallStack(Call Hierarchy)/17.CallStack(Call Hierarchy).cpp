

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
 {                                                     |      Function4       |   <---- Then this becomes the Active Frame
     cout << "Hi I'm function4" << endl;   // finally  +----------------------+     
 }                                                          ^
                                                            |
 void Function3()                                      +----------------------+
 {                                                     |      Function3       |   <---- Then this becomes the Active Frame
     Function4();                                      +----------------------+
 }                                                           ^
                                                            |
 void Function2()                                      +----------------------+
 {                                                     |      Function2       |    <---- Then this becomes the Active Frame
     Function3();                                      +----------------------+
 }                                                           ^
                                                            |
 void Function1()                                      +----------------------+
 {                                                     |      Function1       |    <---- Then this becomes the Active Frame.
     Function2();                                      +----------------------+
 }                                                          ^
                                                            |
 int main()                                            +----------------------+
 {                                                     |        Main          |   <---- The first Active Frame.
     Function1();                                      +----------------------+      
                                                                                           
     return 0;                                        
 }


 // Important note:  There is ONLY one active frame at a time.

           
/* 
================================================================================ 
                    COMPLETE FUNCTION CALL & RETURN SEQUENCE
================================================================================ 
                        
 
1. main() begins executing. 
 
2. A stack frame for main() is created/added to the call stack. 
 
3. main() becomes the Active Frame. 
 
4. The implementation/body of main() starts executing. 
 
5. main() reaches the line: 
       Function1(); 
 
6. Function1() is called by main(). 
 
7. A stack frame for Function1() is created/added to the call stack. 
 
8. Function1() becomes the Active Frame. 
 
9. The implementation/body of Function1() starts executing. 
 
10. Function1() reaches the line: 
        Function2(); 
 
11. Function2() is called by Function1(). 
 
12. A stack frame for Function2() is created/added to the call stack. 
 
13. Function2() becomes the Active Frame. 
 
14. The implementation/body of Function2() starts executing. 
 
15. Function2() reaches the line: 
        Function3(); 
 
16. Function3() is called by Function2(). 
 
17. A stack frame for Function3() is created/added to the call stack. 
 
18. Function3() becomes the Active Frame. 
 
19. The implementation/body of Function3() starts executing. 
 
20. Function3() reaches the line: 
        Function4(); 
 
21. Function4() is called by Function3(). 
 
22. A stack frame for Function4() is created/added to the call stack. 
 
23. Function4() becomes the Active Frame. 
 
24. The implementation/body of Function4() starts executing. 
 
25. Function4() reaches the line: 
        cout << "Hi I'm function4" << endl; 
 
26. The cout statement is executed. 
 
 
================================================================================ 
                         POPPING / RETURNING FRAMES
================================================================================ 
 
27. Function4() finishes executing its implementation/body. 
 
28. Function4() reaches the end of its implementation/body. 
 
29. Function4() returns to Function3(), which is the function that called it. 
 
    IMPORTANT: 
    This "return to Function3()" refers to the CODE execution. 
 
    Execution goes back to the point in Function3() immediately after: 
        Function4(); 
 
    It does NOT mean that the Function4() frame remains on the stack. 
 
30. The Function4() stack frame is popped/removed from the call stack. 
 
31. Function3() becomes the Active Frame again. 
 
32. Function3() RESUMES execution at the point immediately after: 
        Function4(); 
 
    IMPORTANT: 
    Function3() had NOT finished executing before Function4() was called. 
 
    Function3() was PAUSED at: 
        Function4(); 
 
    While Function4() was executing, Function3() remained on the stack 
    but was NOT the Active Frame. 
 
    After Function4() returns and its frame is popped, Function3() 
    becomes the Active Frame again and RESUMES from where it was paused. 
 
33. Function3() now finishes executing its remaining implementation/body. 
 
34. Function3() returns to Function2(), which is the function that called it. 
 
    This "return to Function2()" refers to the CODE execution. 
    Execution goes back to the point in Function2() immediately after: 
        Function3(); 
 
35. The Function3() stack frame is popped/removed from the call stack. 
 
36. Function2() becomes the Active Frame again. 
 
37. Function2() RESUMES execution at the point immediately after: 
        Function3(); 
 
38. Function2() finishes executing its remaining implementation/body. 
 
39. Function2() returns to Function1(), which is the function that called it. 
 
    This "return to Function1()" refers to the CODE execution. 
    Execution goes back to the point in Function1() immediately after: 
        Function2(); 
 
40. The Function2() stack frame is popped/removed from the call stack. 
 
41. Function1() becomes the Active Frame again. 
 
42. Function1() RESUMES execution at the point immediately after: 
        Function2(); 
 
43. Function1() finishes executing its remaining implementation/body. 
 
44. Function1() returns to main(), which is the function that called it. 
 
    This "return to main()" refers to the CODE execution. 
    Execution goes back to the point in main() immediately after: 
        Function1(); 
 
45. The Function1() stack frame is popped/removed from the call stack. 
 
46. main() becomes the Active Frame again. 
 
47. main() RESUMES execution at the point immediately after: 
        Function1(); 
 
48. main() reaches: 
        return 0; 
 
49. main() returns. 
 
50. The main() stack frame is popped/removed from the call stack. 
 
51. The call stack is now empty. 
 
 
================================================================================ 
                              THE KEY CONCEPT
================================================================================ 
 
A function does NOT finish executing when it calls another function. 
 
For example: 
 
    void Function3() 
    { 
        Function4();       // Function3() PAUSES here 
 
        // code here       // Function3() RESUMES here after Function4() 
                           // returns 
    } 
 
The sequence is: 
 
    Function3() starts executing 
            | 
            v 
    Function4() is called 
            | 
            v 
    Function3() PAUSES at Function4(); 
            | 
            v 
    Function4() frame is added to the stack 
            | 
            v 
    Function4() becomes the Active Frame 
            | 
            v 
    Function4() executes 
            | 
            v 
    Function4() finishes 
            | 
            v 
    Function4() returns to Function3() 
            | 
            v 
    Function4() frame is popped from the stack 
            | 
            v 
    Function3() becomes the Active Frame again 
            | 
            v 
    Function3() RESUMES immediately after Function4(); 
            | 
            v 
    Function3() finishes 
            | 
            v 
    Function3() returns to Function2() 
 
 
================================================================================ 
                         PUSH / POP ORDER
================================================================================ 
 
When functions are called: 
 
    main() 
      | 
      +--> Function1()     PUSH 
              | 
              +--> Function2()     PUSH 
                      | 
                      +--> Function3()     PUSH 
                              | 
                              +--> Function4()     PUSH 
 
 
The stack becomes: 
 
    +----------------------+ 
    |      Function4       |  <-- Active Frame 
    +----------------------+ 
    |      Function3       | 
    +----------------------+ 
    |      Function2       | 
    +----------------------+ 
    |      Function1       | 
    +----------------------+ 
    |        main          | 
    +----------------------+ 
 
 
When functions return, they are popped in REVERSE order: 
 
    Function4()  --> POPPED FIRST 
    Function3()  --> POPPED SECOND 
    Function2()  --> POPPED THIRD 
    Function1()  --> POPPED FOURTH 
    main()       --> POPPED LAST 
 
 
Therefore: 
 
    LAST frame ADDED  --> FIRST frame POPPED 
    FIRST frame ADDED --> LAST frame POPPED 
 
 
================================================================================ 
                           ACTIVE FRAME RULE
================================================================================ 
 
There is ONLY ONE Active Frame at a time. 
 
When a new function is called: 
 
    1. The new function's frame is added to the stack. 
    2. The new function becomes the Active Frame. 
    3. The calling function remains on the stack but becomes inactive. 
    4. The new function executes. 
    5. When the new function finishes, its frame is popped. 
    6. The calling function becomes the Active Frame again. 
    7. The calling function RESUMES execution immediately after the 
       function call that caused the new frame to be created. 


================================================================================
                    ACTIVE FRAME DIAGRAMS — PUSHING
================================================================================


After main() begins:

    +----------------------+
    |        main          |  <-- Active Frame
    +----------------------+


main() calls Function1():

    +----------------------+
    |      Function1       |  <-- Active Frame
    +----------------------+
    |        main          |
    +----------------------+


Function1() calls Function2():

    +----------------------+
    |      Function2       |  <-- Active Frame
    +----------------------+
    |      Function1       |
    +----------------------+
    |        main          |
    +----------------------+


Function2() calls Function3():

    +----------------------+
    |      Function3       |  <-- Active Frame
    +----------------------+
    |      Function2       |
    +----------------------+
    |      Function1       |
    +----------------------+
    |        main          |
    +----------------------+


Function3() calls Function4():

    +----------------------+
    |      Function4       |  <-- Active Frame
    +----------------------+
    |      Function3       |
    +----------------------+
    |      Function2       |
    +----------------------+
    |      Function1       |
    +----------------------+
    |        main          |
    +----------------------+


================================================================================
                    ACTIVE FRAME DIAGRAMS — POPPING
================================================================================


Function4() finishes.

Function4() is popped:

    +----------------------+
    |      Function3       |  <-- Active Frame
    +----------------------+
    |      Function2       |
    +----------------------+
    |      Function1       |
    +----------------------+
    |        main          |
    +----------------------+


Function3() resumes and eventually finishes.

Function3() is popped:

    +----------------------+
    |      Function2       |  <-- Active Frame
    +----------------------+
    |      Function1       |
    +----------------------+
    |        main          |
    +----------------------+


Function2() resumes and eventually finishes.

Function2() is popped:

    +----------------------+
    |      Function1       |  <-- Active Frame
    +----------------------+
    |        main          |
    +----------------------+


Function1() resumes and eventually finishes.

Function1() is popped:

    +----------------------+
    |        main          |  <-- Active Frame
    +----------------------+


main() reaches return 0 and finishes.

main() is popped:

    +----------------------+
    |      EMPTY STACK     |
    +----------------------+


================================================================================
                         COMPLETE PUSH → POP VIEW
================================================================================


                         PUSHING


    main()
       |
       v
    +----------------------+
    |        main          |  <-- Active
    +----------------------+

       |
       | Function1()
       v

    +----------------------+
    |      Function1       |  <-- Active
    +----------------------+
    |        main          |
    +----------------------+

       |
       | Function2()
       v

    +----------------------+
    |      Function2       |  <-- Active
    +----------------------+
    |      Function1       |
    +----------------------+
    |        main          |
    +----------------------+

       |
       | Function3()
       v

    +----------------------+
    |      Function3       |  <-- Active
    +----------------------+
    |      Function2       |
    +----------------------+
    |      Function1       |
    +----------------------+
    |        main          |
    +----------------------+

       |
       | Function4()
       v

    +----------------------+
    |      Function4       |  <-- Active
    +----------------------+
    |      Function3       |
    +----------------------+
    |      Function2       |
    +----------------------+
    |      Function1       |
    +----------------------+
    |        main          |
    +----------------------+


                         POPPING


    Function4() finishes
       |
       v
    Function4() POPPED

    +----------------------+
    |      Function3       |  <-- Active
    +----------------------+
    |      Function2       |
    +----------------------+
    |      Function1       |
    +----------------------+
    |        main          |
    +----------------------+


       |
       | Function3() finishes
       v

    Function3() POPPED

    +----------------------+
    |      Function2       |  <-- Active
    +----------------------+
    |      Function1       |
    +----------------------+
    |        main          |
    +----------------------+


       |
       | Function2() finishes
       v

    Function2() POPPED

    +----------------------+
    |      Function1       |  <-- Active
    +----------------------+
    |        main          |
    +----------------------+


       |
       | Function1() finishes
       v

    Function1() POPPED

    +----------------------+
    |        main          |  <-- Active
    +----------------------+


       |
       | main() returns
       v

    main() POPPED

    +----------------------+
    |      EMPTY STACK     |
    +----------------------+


================================================================================
                              FINAL SUMMARY
================================================================================


CALLING / PUSHING:

    main()
       |
       +--> Function1()    PUSH
                |
                +--> Function2()    PUSH
                         |
                         +--> Function3()    PUSH
                                  |
                                  +--> Function4()    PUSH


STACK AT MAXIMUM DEPTH:

    +----------------------+
    |      Function4       |  <-- Active Frame
    +----------------------+
    |      Function3       |
    +----------------------+
    |      Function2       |
    +----------------------+
    |      Function1       |
    +----------------------+
    |        main          |
    +----------------------+


RETURNING / POPPING:

    Function4()  --> POP
         |
         v
    Function3()  --> becomes Active Frame
         |
         v
    Function3()  --> POP
         |
         v
    Function2()  --> becomes Active Frame
         |
         v
    Function2()  --> POP
         |
         v
    Function1()  --> becomes Active Frame
         |
         v
    Function1()  --> POP
         |
         v
    main()       --> becomes Active Frame
         |
         v
    main()       --> POP
         |
         v
    EMPTY STACK


THE MOST IMPORTANT RULE:

    LAST frame ADDED
           |
           v
    FIRST frame POPPED


    FIRST frame ADDED
           |
           v
    LAST frame POPPED


And:

    A function does NOT finish executing simply because it calls
    another function.

    The calling function PAUSES at the function call.

    The called function becomes the Active Frame.

    When the called function finishes, its frame is POPPED.

    The calling function becomes the Active Frame again.

    The calling function then RESUMES execution immediately after
    the function call.

================================================================================

 This version now shows the** stack growing one frame at a time** 
 during calls and **shrinking one frame at a time** during returns, while keeping your original explanation intact.
*/



/*        SIMPLIFIED QUICK EXPLANATION

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