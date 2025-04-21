#include<iostream.h>
#include<conio.h>
int main()
{
  int n;
  cin >>n;
  clrscr();

  for(int i=1; i<=n; i++)
  {
   for(int j=1; j<=i; j++)
   {
    cout << "*";
   }
   cout << endl;
  }
  getch();
}