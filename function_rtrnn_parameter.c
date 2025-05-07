#include<stdio.h>
int sum()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int result = a + b;
    return result;
}

int main()
{
    
    int total_result = sum();
    printf("%d",total_result);
    return 0;
}
