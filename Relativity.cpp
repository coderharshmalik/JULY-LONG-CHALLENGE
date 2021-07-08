//Relativity

#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int g,c;
        cin>>g>>c;
        if(g<=10 && c>=1000 && c<=3000)
        {
            cout<<(c*c)/(2*g)<<endl;
        }
    }
}