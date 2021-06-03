#include <unistd.h>

int mx_strlen(const char *str);

void mx_printstr(const char *s) {
   write(1, s, mx_strlen(s));
}

// int main(int argc, char **argv) {
//       mx_printstr(argv[1]);
//       return 0;
// } 
