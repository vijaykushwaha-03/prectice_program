#include<iostream.h>
#include<conio.h>

int main()
{
    int row,col;
    clrscr();
    cout <<"Enter row : ";
    cin >> row;
    cout <<"Enter column :";
    cin >> col;

    for(int i=1; i<=row; i++)
    {
      for(int j=1; j<=col; j++)
      {
       cout <<"*";
      }
      cout << endl;
    }

    getch();
}