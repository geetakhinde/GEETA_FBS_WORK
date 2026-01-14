## &nbsp;           **C Programming Quick Revision Sheet**

## 

## 

1\. Basics



Data Types: int, float, char, double



Variables: store values, must declare before use



Operators:



* Arithmetic: + - \* / %
* Relational: == != > < >= <=
* Logical: \&\& || !
* Increment/Decrement: ++i (pre), i++ (post)
* Assignment: =, +=, -=





2\. Input / Output



* printf() → output
* scanf() → input
* getchar() → read one char
* puts() → print string





3\. Control Structures



* If / Else / Switch
* Loops: for, while, do-while
* Jump: break, continue, return





4\. Functions



* Syntax: return\_type function\_name(parameters)
* Pass by value: copy → original unchanged
* Pass by reference: pointer → original can change





5\. Pointers



* Store address of variable
* \*ptr → value at address
* \&var → address of variable
* Dangling pointer: points to freed memory
* Dynamic memory: malloc(), calloc(), realloc(), free()





6\. Arrays \& Strings



* Arrays: int arr\[5];
* Strings: char str\[] = "Hello";
* strlen(str) → length without \\0
* sizeof(str) → memory size including \\0



7\. Structures \& Unions



* Struct: members have separate memory
* Union: members share memory → only one valid at a time





8\. File Handling



* Open: fopen("file.txt","r")
* Read/Write: fscanf(), fprintf(), fread(), fwrite()
* Close: fclose(file)



9\. Preprocessor \& Constants



* \#define PI 3.14 → macro
* const int a=10; → read-only variable
* \#include <stdio.h> → include header



10\. Advanced Topics



* Volatile: variable may change unexpectedly
* Enum: list of named constants
* Bitwise operators: \& | ^ << >> ~





Quick Tips



* Pass by value → original unchanged
* Pass by reference (pointer) → original changes
* Struct → use all members
* Union → use only one member at a time
* Dangling pointer → set pointer to NULL after free
* malloc() → allocates memory, uninitialized
* calloc() → allocates and initializes memory to 0
* realloc() → resizes memory block
