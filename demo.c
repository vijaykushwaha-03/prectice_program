<<<<<<<<<<<<<<  ✨ Codeium Command ⭐  >>>>>>>>>>>>>>>>
#include <stdio.h>

int prime(int n)
{
    int flag = 0;
    for(int i=2; i<=n/2; i++)
    {
        if(n%i==0)
        {
            flag = 1;
            break;
        }
    }
    
    if(flag == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n,num=2;
    printf("Enter Number =>");
    scanf("%d",&n);
    
    while(num<=n)
    {
        if(prime(num)==1)
        {
            printf("%d\n",num);
        }
        num++;
    }
    return 0;
}
 