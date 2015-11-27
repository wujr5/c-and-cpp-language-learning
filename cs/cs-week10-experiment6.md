# 计科：week10 C String and Functions

## Description

> The C programming language has a set of functions implementing operations on strings (character strings and byte strings) in its standard library. Various operations, such as copying, concatenation, tokenization and searching are supported. For character strings, the standard library uses the convention that strings are null-terminated: a string of n characters is represented as an arrays of an n + 1 elements, the last of which is a "NUL" character.

> The only support for strings in the programming language proper is that the compiler translates quoted string constants into null-terminated strings.

*From wikipedia*

String is a very important thing when we are programming. All of the input and ouput are strings and any kind of data can be translated into a "String Form" include int, double and so on. In other words, an integer or a double number can be represented by a string simply.

Strings in C programming language is implemented by using an character array whose length is n+1(n represents the valid length of the string). So the operations on Strings in C can be treated as the operations for arrays. The following standard C library includes some basic Cstring operations.

#### <cstring>

This header file defines several functions to manipulate C strings and arrays.

#### Functions

##### Copying

**memcpy**
Copy block of memory (function )
**memmove**
Move block of memory (function )
**strcpy**
Copy string (function )...
**strncpy**
Copy characters from string (function )

##### Concatenation:
**strcat**
Concatenate strings (function )
**strncat**
Append characters from string (function )

##### Comparison:
**memcmp**
Compare two blocks of memory (function )
**strcmp**
Compare two strings (function )
**strcoll**
Compare two strings using locale (function )
**strncmp**
Compare characters of two strings (function )
**strxfrm**
Transform string using locale (function )

##### Searching:
**memchr**
Locate character in block of memory (function )
**strchr**
Locate first occurrence of character in string (function )
**strcspn**
Get span until character in string (function )
**strpbrk**
Locate characters in string (function )
**strrchr**
Locate last occurrence of character in string (function )
**strspn**
Get span of character set in string (function )
**strstr**
Locate substring (function )
**strtok**
Split string into tokens (function )

##### Other:
**memset**
Fill block of memory (function )
**strerror**
Get pointer to error message string (function )
**strlen**
Get string length (function )

##### Macros
**NULL**
Null pointer (macro )

##### Types
**size_t**
Unsigned integral type (type )

*From cplusplus.com*

## Separate source file and header file
For header file, we just write the declaration of the functions and constants.
For source file, we implement the functions(function definitions)
For example:

**func.h**

```cpp
#ifndef FUNC_H_INCLUDED
#define FUNC_H_INCLUDED
int plus(int a, int b);
#endif //FUNC_H_INCLUDED
```

func.cpp
```cpp
#include "func.h"
int plus(int a, int b) {
    return a+b;
}
```

## Basic Assignment (90pts):
This time your task is not to just use the functions simply. For this assignment, you will be given serveral function prototypes and your job is to implement the functions with the descriptions and smaples.

```cpp
#ifndef STRING_H_INCLUDED
#define STRING_H_INCLUDED
/*
   Notice all the samples are use for function logic, not exactly the grammar
*/

/*
    function: myStrlen
    @description: Calculate the length of the string
    @input: const string s
    @output: the length of the string
    @sample input: "abcde\0abcde"
    @sample output: 5
    @Notice:  Function myStrlen() show check whether the input array is NULL.
    If so, you show return 0. Note that strlen() in string.h does not check NULL arrays.
*/
unsigned int myStrlen(const char s[]);

/*
    function: myStrcpy
    @description: copy one string to another
    @input: const string source
    @output: string destination
    @sample input: "a" "abc"
    @sample output: "abc"
    @Notice: You can not assign the array directly which will cause a runtime error.
*/
char * myStrcpy(char destination[], const char source[]);

/*
    function: myStrcat
    @input: const string source
    @output: string destination
    @sample input: "abcde" "abc"
    @sample output: "abcdeabc"
    @Notice: You can not assign the array directly which will cause a runtime error.
*/
char * myStrcat(char destination[], const char source[]);

/*
    function: myStrcmp
    @input: const string1 and const string2
    @output: if string1 is euqal to string2, output 0
             if string1 is greater than string2 ouput an integer > 0
             if string2 is greater than string1 output an integer < 0
    @sample input: "abc" "abc"
    @sample output: 0
*/
int myStrcmp(const char str1[], const char str2[]);

/*
    function: Mystrfind
    @input: cosnt string1 and const string2
    @output: if str2 is a substring of str1, output the first index in str1
             otherwise, ouput -1 which indicates can not find
    @sample input: "abcde" "cde"
    @sample output: 2
*/
int MyStrfind(const char str1[], const char str2[]);

/*
    function: LeftRotateString
    @input: string buff, an integer n which indicates the first n
    @output: put the first n chars to the end of the string
    @sample input: "abcdefg" 4
    @sample output: "efgabcd"
*/
void LeftRotateString(char *buff, int n);

/*
    function: myParseInt
    @input: a const string
    @output: an integer parse from a string
    @sample input: "123"
    @sample output: 123
    @Notice: You should notice show extreme conditions such as:
   1 null array input: the input is an array, the program will crash in the access to the null array, 
       so you need to judge whether the array is null before using the array.
   2 The sign: integer not only contain numbers, and may is the positive integer expressed
       starts with a '+' or '-', so if the first character is' - ', 
       to get the integer value is converted to a negative integer.
   3 illegal characters: the input string may contain characters that are not numbers. 
     Therefore, whenever you encounter these illegal characters, the program should stop converting.
   4 integer overflow: the number of input is the string of the form of input,
      so the input of a very long string will likely lead to overflow. You should set the return 
      value to MAX_INT or MIN_INT in the situation.
*/
int myParseInt(const char str[]);

/*
    function: myStrcontain
    @input: const string1 and const string2
    @output: a boolean value. id all chars in str2 are in str1, output true
             else output flase
    @sample input1: "ABCD" "BAD"
    @sample output1: 1
    @sample input2: "ABCD" "BCE"
    @sample output2: 0
*/
int myStrcontain(const char str1[], const char str2[]);

#endif // STRING_H_INCLUDED
```

### Requirements:

1. You need to write a file myString.cpp for all the implements of the function prototypes.
2. In file myString.cpp **you can not include <cstring> any other standard C or C++ library, the file should be the same type like the following:**
    ```cpp
    #include "myString.h"
    #ifndef NULL
    #define NULL 0
    #endif // NULL

    /*code*/
    /*function definations*/
    /*code end*/
    ```

3. **You can not change the function prototypes.**
4. Black box testing will be again applied this experiment. **Please check your file names for three times**.
5. **Please do not add main function in your file**, you can only add it when you are testing. 

## Deep Thinking(10pts)

1. For the function `char * myStrcat(char destination[], const char source[]);`, the array destination indicates the result of the function, why does the function add a return value `char *`? Why not `void myStrcat(char destination[], const char source[]);`?（Microsoft interview question）
2. Many functions in C standar library <string.h> do not check NULL array and they also do not carry about the size of the array. Why? And why strlen_s in c11 provide size check? (Google interview questions)
3.  We have a small C program:

    ```cpp
    #include <iostream>
    using namespace std;

    int main() {
        char s1[100] = "abcdefg";
        char * s2 = "abcdefg";
        s1[0] = 'z';
        s2[0] = 'z';

        return 0;
    }
    ```
What will happen when we run the program and why? What if we remove `s2[0] = 'z';`?
4. Why separate the source file and the header file? Think about the reasons. (Microsoft interview question)
5. How can we improve `LeftRotateString` or `myStrcontain` by other algorithm? (optional question, Microsoft interview questions)
Hint: String Reverse can be applied for LeftRotateString and hash table can be used for myStrcontain.

## Report:
Just answer the questions in deep thinking part

## Submit (Please pay attention to this part)

~~作业提交方式：作业由学委收好，再发到我邮箱.~~

### 提交方式：FTP
地址: ftp://172.18.182.75/
远程目录: Experiment/计科班/Experiment6
**命名规范：13331314_叶嘉祺_EX6_v0.zip**
**注意v0代表你提交的版本号，第一次提交为v0，第二次为v1，以此类推**
**注意，要打包压缩程ZIP格式**

```cpp
--13331314_叶嘉祺_EX6.zip
  |--myString.cpp
  |--report.pdf
```

**注意，文件压缩包里不能出现文件夹，只能包含一层目录**

作业缓交或补交：每缓交一天 -5% 总分

## Deadline

12月5日 18:00 (argue...)

## 最后

1、文件命名绝对不能错
2、你需要先学习如何写一个函数库。也就是第一个任务，如何编写.h文件和.cpp文件分开，然后在main函数中调用.h文件中的函数。说白了就是明白#include <iostream>这种实现的机制。
3、.h文件和.cpp文件请严格遵守要求中的约定。设定好的函数原型和.h文件请不要更改，并且理解为什么一字不能改？对于系统构架师（编写.h的工程师）和具体实现的工程师（编写.cpp文件工程师），以及测试工程师（编写main.cpp进行测试的工程师），和用户（调用库函数的人）之间是怎样合作，怎样沟通理解的？
4、请先自己尝试编写main函数进行测试（文件分离，再编写）
