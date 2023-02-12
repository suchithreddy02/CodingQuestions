#include <stdio.h>
#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    
    list<int> ans;
    
    int maxNumberLeft = -1;
    
    for(int i=n-1;i>=0;i--)
    {
        if(i==n-1||v[i]>maxNumberLeft)
        {
            ans.push_front(v[i]);
            maxNumberLeft = v[i];
        }
    }
    
    for(auto it=ans.begin();it!=ans.end();++it)
    {
        cout<<*it<<" ";
    }
    
    cout<<endl;
    return 0;
}
