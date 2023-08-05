#include<bits/stdc++.h>
using namespace std;
int reverno1(int n)
{
    int revno=0;
    while(n>0)
    {
        int ld=n%10;
        revno=(revno*10) +ld;
        n=n/10;
    }
    cout<<revno;

}

int main()
{
    int n=12345;
    cout<<reverno1(n);
    return 0;
}
