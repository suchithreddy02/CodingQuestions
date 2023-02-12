#include <stdio.h>
#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    int ans = 0;
    int temp=0;
    
    for(int i=1;i<n;i++)
    {
        if(i==1)
        {
            temp=v[i]-v[i-1];
        }
        else
        {
            temp=max(temp+v[i]-v[i-1],v[i]-v[i-1]);
        }
        
        ans=max(ans,temp);
    }
    
    cout<<ans<<endl;
    
    return 0;
}
