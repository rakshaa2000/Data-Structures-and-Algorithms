#include <bits/stdc++.h>
using namespace std;

int MissingNumber(vector<int>&array, int n){
    return (n*(n+1))/2 - std::accumulate(array.begin(), array.end(), 0);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n-1];
        for(int i=0; i<n-1; i++)
            cin>>arr[i];
        cout<<MissingNumber(arr,n)<<endl;
    }
    return 0;
}