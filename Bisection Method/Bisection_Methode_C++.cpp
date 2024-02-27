#include<bits/stdc++.h>
using namespace std;
#define f(x) pow(x,3)-2*x-5
int main()
{
    float poss,nag;cin>>poss>>nag;
    float e;cin>>e;
    float x,f1;
    int count=0;
    do
    {
        x=(poss+nag)/2;
        f1=f(x);
        if(f1>0) poss=x;
        else nag=x;
        count++;
        cout <<count<< "X :"<<x<<"f(x) :"<<f1 << endl;
    }
    while(abs(f1)>e);
    cout << "\n Roots is :"<<x << endl;
    return 0;
}
