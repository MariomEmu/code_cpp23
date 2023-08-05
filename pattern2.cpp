#include<bits/stdc++.h>
using namespace std;
/*void pattern11( int n)
{ int start=1;

    for (int i=0;i<n;i++)
     {

        if(i%2==0) start =1;
        else start =0;
        for(int j=0;j<=i;j++)
        {
            cout<<start;
            start =1-start;
        }
        cout<<endl;
    }
}

void pattern12(int n)
{  int i;
    int space=2*(n-1);
    for(int i=1;i<=n;i++)
    {
        //number
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        //space
        for(int j=1; j<=space;j++)
        {
            cout<<" ";
        }
        //number
          for(int j=i;j>=1;j--)
        {
            cout<<j;
        }

        cout<<endl;
        space=space-2;

    }
}

void pattern13(int n)
{   int num=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<num<<" ";
            num=num+1;
        }
        cout<<endl;
    }
}

void pattern14(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(char ch='A'; ch<'A'+i;ch++)
        {
            cout<<ch;
        }
        cout<<endl;
    }
}

void pattern15(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(char ch='A';ch<='A'+n-i;ch++)
        {
            cout<<ch;
        }
        cout<<endl;
    }

}
*/

void pattern16(int n)
{
    for(int i=0;i<n;i++)
    {
        char ch='A'+i;
        for(int j=0;j<=i;j++)
        {
            cout<<ch;
        }
        cout<<endl;
    }
}
int main()
{
    int n=5;
    //pattern11(n);
     //pattern12(n);
      //pattern13(n);
      //pattern14(n);
      //pattern15(n);
      //pattern16(n);
    return 0;
}
