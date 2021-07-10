//Optimal Denomination

#include<bits/stdc++.h>
#include<climits>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int min=*min_element(a.begin(),a.end());
        int max=*max_element(a.begin(),a.end());
        int sum=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==max)
            {
                a[i]=min;    
                break;  
            }
        }
        for(int i=0;i<n;i++)
        {
           sum=sum+(a[i]/min);
        }
        cout<<sum<<endl;
    }
    return 0;
}