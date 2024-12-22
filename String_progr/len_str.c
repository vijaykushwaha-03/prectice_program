// Online C compiler to run C program online
#include <stdio.h>
 

int main() {
    // Write C code here
    char str[50];
    int len = 0;
    char rev[50];

    printf("Enter String =>");
    scanf("%s",&str);
    
    int flag = 0;
    
    for(int i=0; str[i] != '\0'; i++)
    {
        len++;
    }

    for(int i=0; i<len; i++)
    {
        rev[i] = str[len - i - 1];
        
        if(str[i] == rev[i])
        {
            flag = 1;   
        }
        else
        {
            flag = 0;
        }

    }
    
    printf("%s \n",str);
    printf("%s \n",rev);
   
   if(flag == 1)
   {
       printf("Is Palindrom");
   }
   else
   {
       printf("Not Palindrom");
   }

    return 0;
}