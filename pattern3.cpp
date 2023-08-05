#include<bits/stdc++.h>
using namespace std;

/*void pattern17(int n)
{
    //outer loop
    for(int i=0;i<=n;i++)
    {    //space
        for(int j=0;j<=n-i;j++)
        {
            cout<<" ";
        }
        //char
        char ch ='A';
        int breakpoint=(2*i+1)/2;
        for(int j=1;j<=2*i+1;j++)
        {
            cout<<ch;
            if(j<=breakpoint)ch++;
                else ch--;
        }
         for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}

void pattern18(int n)
{
    for(int i=0;i<=n;i++)
    {
        for(char ch='E'-i;ch<='E';ch++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void pattern19(int n)

{
    int spaces=0;
    for(int i=0;i<n;i++)
    {
        //star
        for(int j=1;j<=n-i;j++)
        {
            cout<<"*";
        }
        //space
        for(int j=1;j<=spaces;j++)
        {
            cout<<" ";
        }
        //star
         for(int j=1;j<=n-i;j++)
        {
            cout<<"*";
        }
        spaces=spaces+2;
        cout<<endl;
    }
    spaces=2*n-2;
    for(int i=1;i<=n;i++)
    {
        //star
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        //space
        for(int j=0;j<spaces;j++)
        {
            cout<<" ";
        }
        //star
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        spaces=spaces-2;
        cout<<endl;
    }
}


void pattern20(int n)
{
    int spaces=2*n-2;
    for(int i=1;i<=2*n-1;i++)
    {
        int star=i;
        //int star=i;
        if(i>n)  star=2*n-i;

        for(int j=1;j<=star;j++)
        {
            cout<<"*";
        }
        //spaces
        for(int j=1;j<=spaces;j++)
        {
            cout<<" ";
        }
         for(int j=1;j<=star;j++)
        {
            cout<<"*";
        }
        cout<<endl;
        if(i<n) spaces=spaces-2;
        else spaces= spaces+2;
    }
}

void pattern21(int n)
{
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<n;j++)
      {
          if(i==0 || j==0 || i==n-1 || j==n-1)

              cout<<"*";

          else
            cout<<" ";
      }
      cout<<endl;
  }
}
*/
void pattern22(int n)
{
    for(int i=0;i<2*n-1;i++)
    { for(int j=0;j<2*n-1;j++){

         int top=i;
        int left=j;
        int right =(2*n-2)-j;
        int down=(2*n-2)-i;
        cout<<(n-min(min(top,down),min(left,right)))<<" ";
    }
        cout<<endl;
    }

}

int main()
{
  int n=4;
    //pattern17(n);
     //pattern18(n);
     //pattern19(n);
    // pattern20(n);
   // pattern21(n);
   pattern22(n);
    return 0;
}
