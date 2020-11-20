#include <bits/stc++.h>
using namespace std;
class Solution
{
public:
    int minValueToBalance(int a[], int n)
    {
       //code here.
       int sum1= std::accumulate(a,a+n/2,0);
       int sum2= std::accumulate(a+n/2,a+n,0);
       return abs(sum1-sum2);
    }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution ob;
        ob.minValueToBalance(arr,n);
    }
    return 0;
}