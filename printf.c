#include <stdio.h>

int main(){
    double i;
    for (i=1; i<100000000000; i*=10){
        printf("[%8.0f]\n",i);
    }
    return 0;
}
