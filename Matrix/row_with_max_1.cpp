#include <bits/stdc++.h>
using namespace std;

void row_with_max_1(vector<vector<int>> arr, int n, int m){
    int max=0,row=-1;
	    for(int i=0;i<n;i++){
	        for(int j=0;j<m;j++){
	            if(arr[i][j]==1){
	                if(max<m-j){
	                    max=m-j;
	                    row=i;
	                }
	                break;
	            }
	        }
	    }
	   cout<<"Row with max 1: "<<row<<endl;
}

int main()
{
    int n,m;  cin>>n>>m;

    vector<vector<int>> v;

    for(int i=0;i<n;i++){
        vector<int> v1;
        for(int j=0;j<m;j++){
            int num;  cin>>num;
            v1.push_back(num);
        }
        v.push_back(v1);
    }

    row_with_max_1(v,n,m);
    return 0;
}