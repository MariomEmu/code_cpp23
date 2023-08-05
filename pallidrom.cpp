
#include<bits/stdc++.h>
using namespace std;

int reverse_num(int x)

{   int y=0;
    while(x>0)
    {
        int ld=x%10;
        y=y*10+ld;
        x=x/10;
    }
    return y;
}
int main()
{    int x;
     cin>>x;
     int dummy=x;
     int y=reverse_num(x);
     if(dummy==y){
        cout<<"palindrome number"<<endl;
     }
     else
     {
         cout<<"Not palindrome number"<<endl;
     }


    return 0;
}
