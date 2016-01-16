#include <stdio.h>

int main(){
    int i;
    for (i=1; i<1000000; i*=10){
        printf("[%8d]\n",i);
    }
    return 0;
}
