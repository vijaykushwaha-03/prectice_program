// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    
    int f1,f2,f3,cnt,lmt;
    
    f1 = 0;
    f2 = 1;
    
    printf("Enter Limit of Faconnachi =>");
    scanf("%d",&lmt);
    
    printf("%d\n",f1);
    
    printf("%d\n",f2);
    
    cnt = 0;    
    
    while(cnt <lmt)
    {
        f3 = f1+f2;
        cnt++;
        
        printf("%d\n",f3);
        f1 = f2;
        f2 = f3;
    }
    return 0;
}