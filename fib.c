#include <stdio.h>
#include <time.h>

// 递归计算斐波那契数
long fibonacci_recursion( int n )
{
    if( n <= 2 )
        return 1;

    return fibonacci_recursion(n-1) + fibonacci_recursion(n-2);
}

// 迭代计算斐波那契数
long fibonacci_iteration( int n )
{
    long result;
    long previous_result;
    long next_older_result;

    result = previous_result = 1;

    while( n > 2 ){
        n -= 1;
        next_older_result = previous_result;
        previous_result = result;
        result = previous_result + next_older_result;
    }
    return result;
}

int main(){
    int N = 45;

    // 递归消耗的时间
    clock_t recursion_start_time = clock();
    long result_recursion = fibonacci_recursion(N);
    clock_t recursion_end_time = clock();

    // 迭代消耗的时间
    clock_t iteration_start_time = clock();
    long result_iteration = fibonacci_iteration(N);
    clock_t iteration_end_time = clock();

    // 输出递归消耗的时间
    printf("Result of recursion: %ld \nTime: %fseconds",
        fibonacci_recursion(N),
        (double)(recursion_end_time-recursion_start_time)/CLOCKS_PER_SEC
    );
    printf("\n-----------------------\n");
    // 输出迭代消耗的时间
    printf("Result of iteration: %ld \nTime: %fseconds",
        fibonacci_iteration(N),
        (double)(iteration_end_time-iteration_start_time)/CLOCKS_PER_SEC
    );

    return 0;
}
