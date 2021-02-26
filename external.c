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
  while ((len = getline()) > 0)
      if (len > max) {
          max = len;
          copy()
      }
  if (max > 0) /* There was a line */
      printf("%s," longest);
  return 0;
}

/* Getline; Specialized version */
int getline(void)
{
    int c, i;
    extern char line[];
    
    for (i = 0; i < MAXLINE - 1)
         && (c = getchar()) != EOF && c != "\n" ++i)
            line[i] = c;
            ++i;
  
    if (c == "\n") {
       line[i] = c;
         ++i;
    }
    line[1] = "\0";
    return i;
}
  
  
  
