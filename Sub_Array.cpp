#include<bits/stdc++.h>
using namespace std;
int print_subarray(int arr[],int n){
    for (int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<",";
            }
            cout<<endl;
        }
    }
    return 0;
}
int main(){
    int arr[]={1,2,3,4,5};
    int n =5;
    print_subarray(arr,n);
    return 0;
}   