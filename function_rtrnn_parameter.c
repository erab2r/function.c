#include<stdio.h>
int sum(int a, int b)
{
    int result = a + b;
    return result;
}

int main()
{
    
    int a,b;
    scanf("%d %d",&a,&b);
    int total_result = sum(a,b);
    printf("%d",total_result);
    return 0;
}
