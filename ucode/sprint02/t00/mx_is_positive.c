#include <unistd.h>

 void mx_printstr(const char *s);
 void mx_is_positive(int i) {
    if (i > 0) {
         char *rslt = "positive\n";
         mx_printstr(rslt);
    }
    else if (i == 0) {
         char *rslt = "zero\n";
         mx_printstr(rslt);
    }
    else if (i < 0) {
         char *rslt = "negative\n";
         mx_printstr(rslt);
    }
    return;
}

int main (void) { 
    mx_is_positive(1);
    mx_is_positive(-1);
    mx_is_positive(0);
}
