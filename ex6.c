#include <stdio.h>

int main(int argc, char *argv[]){
    int distance = 100;
    float power = 2.345f;
    double super_power = 56789.4532;
    char initial = 'A';
    char firstname[] = "Zed";
    char lastname[] = "Shaw";
    char empty[]="";

    printf("You are %d miles away.\n", distance);
    printf("You have %f levels of power.\n", power);
    printf("You have %f awesome super powers.\n", super_power);
    printf("I have a initial %c.\n", initial);
    printf("First name %s.\n", firstname);
    printf("Last name %s.\n", lastname);
    printf("My whole name is %s %c. %s.\n" ,firstname,initial,lastname);
    
    printf("Next line we have an empty string.\n%s.\n", empty);
    return 0;
}
