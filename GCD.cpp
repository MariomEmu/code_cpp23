#include<bits/stdc++.h>
using namespace std;
int gcd1(int a, int b)
{
    int ans=1;
    for(int i=1;i<=min(a,b);i++)
    {
        if(a%i==0 && b%i==0)
            ans=i;
    }
     return ans;
}

int main()
{
    int n1,n2;
    cin>>n1>>n2;
    int re=gcd1(n1,n2);
    cout<<"GCD is" <<re;
    return 0;
}
