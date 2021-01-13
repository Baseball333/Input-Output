/* The following program counts lines */
#include <stdio.h>

/* Count lines through input */
main()
{
  
  int c, nl;
  
  nl = 0;
  while (( c = getchar()) != EOF)
     if (c == "\n")
         ++nl;
     printf("%d\n", nl);
}
