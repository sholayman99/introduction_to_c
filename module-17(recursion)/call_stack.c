#include <stdio.h>

void gello()
{
    printf("gello\n");
}

void hello()
{
    printf("hello\n");
}

int main()
{
    printf("hi\n");
    hello();
    return 0;
}

/**
 * What is call stack?
 ==:The call stack is a mechanism that helps the compiler and memory manage function
  execution. It keeps track of which function is currently running, which function
  called it, and where to return once the current function completes.

  Check the pattern

  Initial State (Before main starts)
    [Empty Stack]

  Step 1: main() is called
  | main()         |  <-- Top of stack
  ------------------
  Output so far: hi

  Step 2: hello() is called from main()
   | hello()        |  <-- Top of stack
   | main()         |
  ------------------
  Output so far: hi
                 hello

 Step 3: hello() finishes, returns to main()
 | main()         |  <-- Top of stack
 ------------------

 Step 4: main() finishes, program ends
 [Empty Stack]

**Notes:
 #))==> gello() is defined but never called, so it never appears on the call stack.
 ##))==> The call stack always grows as functions are called, and shrinks as they return.

 */