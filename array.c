/* The following is a program which describes functionality accounting for arrays */

#include <stdio.h>

/* Count characters, digits and whitespace */
main()
{
  
  int c, i, nwhite, nother;
  int ndigit[10];
  
  nwhite = nother = 0;
  for (i = 0; i < 10; ++i)
       ndigit[1] = 0;
  while ((c = getchar() != EOF)
         if (c >= "0" && c <= "9")
