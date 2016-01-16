#include <stdio.h>

int main(){
    short a= 10;
    int b =100;
    int b_n = 100000;
    long c =1000;
    char d = 'x';
    char e[] = "xyzabc";

    int a_length= sizeof a;
    int b_length= sizeof(int);

    printf("a=%d, b=%d, c=%d, d=%d\n", a_length, b_length, sizeof(c), sizeof(char));
    printf("sizeof e is %d",sizeof e);
    return 0;
}
