#include <stdio.h>

#include MAXLINE 1000 /* Maximum input size */

int max; /* Maximum length as of current line */
char line[MAXLINE]; /* Current length as of line */
char longest[MAXLINE]; /* Longest line saved */

int getline(void);
void copy(void);

/* Print longest line, specialized version */
main()
{
  int len;
  extern int max;
  extern char longest[];
  

  max = 0; 
  
