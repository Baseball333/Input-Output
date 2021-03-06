# Input-Output
My comprehension of input-output theory in C.

First Commit:
I began to learn C in 2020 for a myriad of reasons.For now I will attest my interest in learning the sligthly esoteric principles of computer science. Upon further investigation, I concluded the language of the original Unix family would be the most likely to have greatly influenced the discipline from its inception in the late 60s. One of my advantages was also learning a relatively low-level language compared to my native Python. I will explain substantially more in the future.

Second Commit:
The first file which was written from the "C Programming Language Book". It is a file copying program which specifies the char data type to store character data. Char is applied to return a value that is not confused for a real character. Remember that EOF is an integer defined in the <stdio.h>, which is replacable by any symbolic constant. Another file will be written to explain its logical structure (employed for instruction).

Third Commit:
The iologic.c file is the logical representation of the original input-output program. In the C implementation the getchar() and putchar() functions which are specified in the C standard library for input and output. After the while statement these functions are applied to return the character data.

Fourth Commit:
Character data is often processed in C with the char data type of the functions of the standard input-output library. Most of C's character data is manipulated without the usage of external implementation.

Fifth Commit:
Tomorrow I will include many commits about a recent character counting program taken from "the C: Programming Language".

Sixth Commit:
I have a lot to write. I have completed several programs from "the C:Programming Language". Among these the two are the character and word counting programs. The character counting is similar to the copy program. I will include the file and explain its functionality in the next commit.

Seventh Commit:
The character counting program is rudimentary, as it primarily functions through the ++nc operator. The body of the for loop is also empty, as the majority of the functionality is completed through the test and increment parts. Syntactically the empty for loop is maintained by an isolated semicolon. The isolated semicolon is called a null statement which satisfies the syntactic requirement. One of my favorite aspects of this program is how Dennis Ritchie/Ken Thompson remarked "One of the nice things about while and for is that they test at the top of the loop before proceeding with the body. Programs should act intelligently when given zero-length input. The while and for statements help ensure that programs do reasonable things with boundary conditions." I can understand why C directly influened  the scope of programming and computer science in general. 


Eighth Commit:
The next program is a line counting program. I've yet to write it, although I read from the text "As we mentioned above, the standard library ensures that an input text stream appears as a sequence of lines, each terminated by a newline." Sounds interesting. Got to complete my English homework.

Ninth Commit:
The line counting program is rudumentary. The <stdio.h> standard library ensures that an input text stream is counted as a sequence of lines, each terminated by a newline specification. Counting lines is considered counting "newlines".

Tenth Commit:
A test commit

Eleventh Commit:
The following file will detail a program of arrays. Its mathematical structure will be explained in the next README commit.

Twelfth Commit:
Many programs in C follow the mathematical structure of this program, with a special reliance on conditions. In C, a condition is evaluated from the top until an instance is satisfied. At that point the corresponding statement is executed and the entire construction is finished. If none of the statements are satisfied the statement after the final else in this program is executed in the present. This single fact has influenced virtually all programming languages since C's inception during the 1970s.

Thirteenth Commmit:
The next commit will describe the scope of a mathematical function in C.

Fourteenth Commit:
In C, a function is equivalent to any other logical construct of programming languages common throughout the time. According to the text, "a function provides a convenient manner to encapsulate computation without worrying of its implementation." In computer science, functions are applied to reduce the complexity of certain programs. In this program, the function power(m, n) is raised to obtain an integer m to a positive integer n. This function is not considered a practical exponentiation routine as it only allows positive powers of small integers.

Fifteenth Commit:
The function's implementation relies upon the previous information.

Sixteenth Commit:
In C, all function are passed by value. This indicates the function is attributed its arguments in temporary variables. A function cannot alter a variable in the calling function. This characteristic allows for compact programs.

Seventeenth Commit:
As is evident, the "call-by-value" characteristic allows for C programs to be compact, which makes C such a universal language.

Eighteenth Commit:
Have  I got a program for you!

Ninteenth Commit:
The next program is a line counter with inter-function communication and array implementation as described by Dennis Ritchie/Ken Thompson.

Twentieth Commit:
The functionality of the program exists through the getline and copy functions(which are declared at the beginning of the program). These respective functions 
communicate through several arguments and a return value. The communicative arguments are expressed by the following argument.

int getline(char [s], int lim)

Storage size is a key component of C and is specified through an array s in getline. The line also conveniently returns an int. getline is also the most 
prominent function in this program as it returns a useful value and marks a null character at the end of the array. The last aspect of this program is the getline control over an input line. getflow revises any possible overflow, though the typical user is aware of a string's length.

Twenty-First Commit:
The next program is the final in the "Input-Output" chapter of the C:Programmming Language textbook.

Twenty-Second Commit:
External variables exist within main, getline and output. The syntactic structure of such external variables must be intiated toward the function. The extern declaration at the beginning of these variables is consequently redundant, as common practice is to place definitions at the beginning of such a file. If a definition  is divided across several files then an integrated file called a header must be written to unite each declaration. "Declaration" and "definition" are distinct references in the C programming language. The input-output repository has officially been completed.
