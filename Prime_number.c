#include<stdio.h>
int main()
{
    int flag = 0, i, n;
    printf("Enter Positive Number: ");
    scanf("%d", &n);
    if(n==0 || n==1)
    {
        flag = 1;
    }
    for(i=2; i<=n/2; ++i)
    {
        if(n%i == 0){
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    {
        printf("%d Is A Prime Number.", n);
    }
    else{
        printf("%d Is Not A Prime Number.", n);
    }
    return 0;
}