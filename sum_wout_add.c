// Online C compiler to run C program online
#include <stdio.h>

 

int sum(int a,int b)
{
    int carry;
    
    while(b!=0)
    {
        carry = a&b;
        a = a^b;
        b = carry <<1;
    return a;
    }
}

// int sum(int a,int b)
// {
//     int i;
    
//     for(int i=1; i<=b; i++)
//     {
//         a++;
        
//     }
//     return a;
// }

int main() {
    // Write C code here
      int a=10, b=20;
      
      printf("%d",sum(a,b));
    return 0;
}