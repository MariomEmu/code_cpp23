#include<bits/stdc++.h>
using namespace std;

/*void pattern1(int n)
{


for(int i=0;i<n;i++)
  {
      for(int j=0;j<n;j++)
      {
          cout<<"*";
      }
      cout<<endl;
  }
}

void pattern2(int n)
{
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern3(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
}

void pattern4(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i;

        }
        cout<<endl;
    }
}


void pattern5(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern6(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>=i;j--)
        {
            cout<<n-j+1;
        }
        cout<<endl;
    }
}
*/

void pattern7(int n)
{
    for(int i=1;i<=n;i++)
    {
        //space
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        //star
        for(int j=1;j<=2*i-1;j++)
        {
            cout<<"*";
        }
        //space
        for(int j=1;j<n-i;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern8( int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=2*n-(2*i-1);j++)
        {
            cout<<"*";
        }
        for(int j=1;j<=i;j++)
            {
                cout<<" ";
            }
        cout<<endl;
    }
}

int main()
{
  int n=5;
 // pattern1(n);
    //pattern2(n);
    //pattern3(n);
    //pattern4(n);
    //pattern5(n);
    //pattern6(n);
    pattern7(n);
    pattern8(n);

    return 0;
}
