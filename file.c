#include <stdio.h>
int main() {
    FILE *fp;
    int c;
   
    // open the current input file
    fp = fopen(__FILE__,"r"); //opens the current file due to __FILE__ macro in the stdio header file 

    do {
         c = getc(fp);   // read character 
         putchar(c);     // display character
    }
    while(c != EOF);  // loop until the end of file is reached
    
    fclose(fp);
    return 0;
}

