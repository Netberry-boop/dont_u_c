# Important stuff learnt during exploration

1) `<stdio.h>` contains standard input/output functions

2) functions - divide program, improves modularity of code, organization, reusable

3) `main()` function - execution of code in C starts from this function, always returns integer at the end, 0 - usually represents success and 1 - failure

4) `"\n"` - new line character, part of escape sequence, shifts cursor to the next line

5) variable is box in memory with a nametag that stores data that will be used by the program

6) `"char"` datatype is used for storing characters - spans 1 byte in space

7) `"char name[32]"` is a character string variable that is 32 bytes long, last byte is used by `"\0"` - null

8) `"%s"` - this is a type of format string, it tells that we want to read a string of characters

9) use of `&` - address of operator in `scanf()` function is to store the value at address of variable

10) in-case of character strings the name of the variable degrades to the address of the starting character of the string, therefore using `&` in `scanf()` function in that case is not necessary - ex: `scanf("%s", name);`

11) `"%d"` - format string for integers, `"%f"` - format string for float/real numbers

12) shortcut for "go to line number" is `[ctrl + /]` in nano text editor, useful for debugging

13) in `"while()"` loop there is no initialization and operation like `"for(initialization; condition; operation)"` loop, only condition

14) `if(condition){<code>}` - code is not executed if expression evaluates to 0 (false), and is executed if expression evaluates to any non-zero value (true)

15) `else{<code>}` - this code block is executed only if the previous `if(condition)` returns false

16) `"1.0/2"` - this is clever way to trigger implicit conversion, this is called type promotion

17) `"fflush(stdout)"` - function immediately flushes the buffer, it ensures immediate output on the screen - (stdout), it is present in the `<stdio.h>` header file

18) `<stdlib.h>` - contains `"rand()"`, and `"srand()"` functions

19) `<unistd.h>` - contains the `"getpid()"` and `"sleep()"` function

20) `"rand()"` - is a pseudo-random function meaning it produces deterministic random value, but without initializing the seed the program will always give the same random value each time it is executed. Reason: the `"rand()"` function always starts at the same random value in the stream of random values every execution.

21) `"srand(getpid())"` is a smart way to always use different seed every execution as `"getpid()"` returns different pid most of the time

22) `"srand()"` - initializes the start of random sequence for `"rand()"` - the number passed as argument to srand() is called seed, for each seed the value of `"rand()"` is different

23) `"sleep()"` function is used for delaying the execution of the step following the function

24) `"printf()"` writes data to a buffer which normally only flushes when it encounters `"\n"` or when the program ends, therefore while using sleep() it is essential to use `"fflush(stdout)"` to force the text out of the buffer immediately

25) `"scanf()"` leaves the `"\n"` (Enter key) character sitting in the input buffer after taking input, which can cause subsequent character reading functions (`%c`) to accidentally read that leftover newline and skip user input. Prevent this by using a space before character function - ex: `scanf(" %c", &ch);`

26) structure is composite of multiple variables, it is made outside the main function

27) it is efficient to use multiple of "8" for memory allocation for arrays/character strings, prevents multiple memory cycle to fetch single piece of data

28) `"strncpy()"` is simple way to copy string into variable

29) you use `.` to access and manipulate element inside of a structure, ex: `student.name;`

30) `"switch(choice)"` is a good way to access choice programs

31) `"default"` case is a good practice in `"switch()"` based programs

32) pointer variable stores address ex: `int *p = &num;` // printing(p) -> prints address, printing(*p) -> prints the value at the address

33) `"assert(condition)"` is a simple way to do fault handling, if condition is true program continues, else program is terminated