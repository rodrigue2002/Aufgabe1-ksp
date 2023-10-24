#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[]){
    int res = strcmp(argv[1], argv[2]);
    printf("%d %s\n", res, (res == 0 ? "gleich" : "ungleich"));
    return 0;
}
