//Maximum Production

#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int d,x,y,z;
        cin>>d>>x>>y>>z;
        int a=7*x;
        int b,c;
        if(d<7)
        {
            b=d*y;
            c=(7-d)*z;
        }
        cout<<max(a,(b+c))<<endl;
    }
    return 0;
}