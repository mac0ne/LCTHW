#include <stdio.h>
#include <stdlib.h>
int main()
{
    char c = '@';
    char str[] = "This is a string.";
    printf("char: %c\n", c);
    printf("string1: %s\n", str);
    //也可以直接输出字符串
    printf("string2: %s\n", "This is another string.");

    system("pause");
    return 0;
}
