#include<bits/stdc++.h>
using namespace std;
int linear_search(int arr[], int n, int key){
    for (int i=0;i<n;i++){
        if(arr[i]==key) return 1;
    }
    return 0;
}
int main(){
    // bruteforce technique
    int n,key;
    cin>>n;
    int arr[n];
    int i= 0;
    while (i<n)
    {
        cin>>arr[i];
        i++;
    }
    cin>>key;
    if(linear_search(arr,n,key)){
        cout<<"Found";
    }
    else{
        cout<<"Not Found";
    }
    return 0;
}