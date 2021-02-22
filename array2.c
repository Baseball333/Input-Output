#include <stdio.h>
#define MAXLINE 1000 /* Maximum number of characters in a program*/

int getline(char, line[], int maxline)
void copy(char [to], char from[]);

/*Print longest input line */
main()
{

int len /* Current line length */
int max /* Maximum line length */
char line[MAXLINE]; /* Current input line */
char longest[MAXLINE]; /* Longest saved line */
  
max = 0;
while ((len = getline(line, MAXLINE)) > 0)
      if (len > max) {
          max = len;
          copy(longest, line)
      }
  
if (max > 0) /* There was a line */
    printf(%s, longest);
return(0);
