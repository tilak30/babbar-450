#include <bits/stdc++.h>
using namespace std;

void neg_pos_rearrange(vector<int> v, int n){
    //two pointer approach
    int x=0,y=n-1;
    while(x<y){
        if(v[x]<0){
            x++;
        }
        if(v[y]<0){
            swap(v[x],v[y]);
            x++;
        }
        y--;
    }

    //PRINT ARRAY
    for(auto x: v){
        cout<<x<<" ";
    }
}

int main()
{
    int n;  cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    neg_pos_rearrange(v,n);
    return 0;
}