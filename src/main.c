#include <stdio.h>

int main(int argc, char **argv)
{
    fprintf(stdout, "Hello, World!\n");
    fflush(stdout);
    fprintf(stderr, "Error, World!\n");

    return 0;
}