#include <stdbool.h>
#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

bool mx_isdigit(int c) {
    if (c >= 48 && c <= 57)
        return 1;
    else    
        return 0;
}
 int main(void) {
    char c = 'A';
     if(mx_isdigit(c))
      printf("return 1\n", c);
      else 
       printf("return 0\n", c);
 }
    



