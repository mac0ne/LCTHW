#include <stdio.h>
#include <stdlib.h>
int main()
{
    typedef struct _FP_SIGLE{
        unsigned int nMantissa : 23;  //尾数部分
        unsigned int nExponent :  8;  //指数部分
        unsigned int nSign     :  1;  //符号位
    } FP_SINGLE;

    float a = 128.101f;
    FP_SINGLE* p = (FP_SINGLE*)&a;
    printf("%3.3f\n", a);
    printf("%d, %#X, %#X\n", p->nSign, p->nExponent-127, p->nMantissa);

    double b = 128.101;
    printf("%lf\n", b);
    FP_SINGLE* q = (FP_SINGLE*)&b;
    printf("%d,%#X,%#X\n", q->nSign, q->nExponent-127, q->nMantissa);
    
    system("pause");
    return 0;
}
