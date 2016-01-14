#include <stdio.h>

int main(){
    short a= 10;
    int b =100;
    long c =1000;
    char d = 'x';

    int a_length= sizeof a;
    int b_length= sizeof(int);

    printf("a=%d, b=%d, c=%d, d=%d\n", a_length, b_length, sizeof(c), sizeof(char));

    return 0;
}
