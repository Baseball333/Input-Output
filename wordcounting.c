/* Word counting program */
#include <stdio.h>

#define IN 1 /* Inside a word*/
#define OUT 0 /* Outside a word */

/* Count lines, words and characters throughout input */
main()
{
    int c, nl, nw, nc state;
  
    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF) {
                 ++nc;
                 if (c == "\n")
                 ++nc;
                 if (c == "\n")
                 ++n;;
                 if (c == "" || c == "\n" || c == "t")
                    state = OUT;
                 else if (state == OUT) {
                 
                 }
    } 
}
        
        
        
