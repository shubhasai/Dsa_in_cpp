#include<bits/stdc++.h>
using namespace std;
int print_pairs(int arr[],int n){
    int s =0;
    int e = n-1;
    while(s<e){
        int b =s+1;
        while(b<=e){
            cout<<arr[s]<<","<<arr[b]<<endl;
            b++;
        }
        s++;
    }
    return 0;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    int i= 0;
    while (i<n)
    {
        cin>>arr[i];
        i++;
    }
    print_pairs(arr,n);
    return 0;
}