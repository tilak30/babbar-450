
#include <bits/stdc++.h>
using namespace std;

void union_ele(vector<int> a, vector<int> b, int n, int m){
     set<int> s;
        for(int i=0;i<n;i++)
            s.insert(a[i]);
        for(int i=0;i<m;i++)
            s.insert(b[i]);
        cout<<"Total size "<< s.size();
}

int main()
{
    int n,m;  cin>>n>>m;
    vector<int> v(n),v1(m);
    for(int i=0;i<n;i++)
        cin>>v[i];
    for(int i=0;i<m;i++)
        cin>>v1[i];
    union_ele(v,v1,n,m);
    return 0;
}