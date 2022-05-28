#include<bits/stdc++.h>
using namespace std;
// prefix sum array method
int largestsum_subarray(int arr[],int n){
    int sum = 0;
    int prefixarr[n];
    prefixarr[0]=arr[0];
    for(int i =1;i<n;i++) {
        prefixarr[i] = prefixarr[i-1]+arr[i];
    }
    for (int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int check =0;
            // for(int k=i;k<=j;k++){
            //     check=check+arr[k];
            // }
            if(i!=0){
                check = prefixarr[j] - prefixarr[i-1];
            }
            else{
                check = prefixarr[j];
            }
            if(check>=sum){
                sum = check;
               
            }
            cout<<endl;
        }
    }
    cout<<"Largest Sum Is"<<sum;
    return 0;
}
int main(){
    int arr[]={-2,3,4,-1,5,-12,6,1,3};
    int n =9;
    largestsum_subarray(arr,n);
    return 0;
}   