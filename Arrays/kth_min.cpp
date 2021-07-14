#include <bits/stdc++.h>
using namespace std;

void kth_min(vector<int> v, int k){
    //as we have distinct elements
    sort(v.begin(),v.end());
    //kth smallest element
    cout<<v[k-1];
}

int main()
{
    int n;  cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    int k; cin>>k;
    kth_min(v,k);
    return 0;
}