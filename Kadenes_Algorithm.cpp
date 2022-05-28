#include<bits/stdc++.h>
using namespace std;
// Kadene's Algorithm Methods
int largestsum_subarray(int arr[],int n){
    int csum = 0;
    int msum =0;
    for(int i=0;i<n;i++){
        csum = csum + arr[i];
        if(csum <0) csum =0;
        msum = max(csum,msum);
    }
    cout<<"Largest Sum Is"<<msum;
    return 0;
}
int main(){
    int arr[]={-2,3,4,-1,5,-12,6,1,3,2};
    int n =10;
    largestsum_subarray(arr,n);
    return 0;
}   