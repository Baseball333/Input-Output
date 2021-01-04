/* This program is regulated by the following logical structure */

read a character
while (character is not end-of-file indicator)
    output the character just read
    read a character

#include <stdio.h>

/* Copy input to output; A version */
main()
{
    int c;
    
    c = getchar();
    while (c != EOF) {
       /* Remember that the syntactical structure follows the logic */
       putchar();
       c = getchar();
    }
}    
  
   
    







