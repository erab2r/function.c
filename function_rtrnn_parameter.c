#include<stdio.h>
int sum(int a, int b)
{
    int result = a + b;
    return result;
}

int main()
{
    int total_result = sum(10,15);
    printf("%d",total_result);
    return 0;
}
