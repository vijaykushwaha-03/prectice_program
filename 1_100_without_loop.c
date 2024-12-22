// Online C compiler to run C program online
// #include <stdio.h>

 void loop(int n)
 {
     if(n<=100)
     {
         printf("%d ",n);
         loop(n+1);
     }
     
 }
int main() {
    // Write C code here
     int n=1;
     loop(1);

    return 0;
}