#include<bits/stdc++.h>
using namespace std;
// TimeComplexity of the Algorithm is Log n base 2
int binary_search(int arr[],int n,int key){
    int s =0;
    int e =n-1;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]== key){
            return 1;
        }
        else if(arr[mid]>key){
            e = mid-1;
        }
        else{
            s = mid +1;
        }
    }
    return 0;
}
int main(){
    int n,key;
    cin>>n;
    int arr[n];
    //  Provide Sorted Array In the Input 
    int i= 0;
    while (i<n)
    {
        cin>>arr[i];
        i++;
    }
    cin>>key;
    if(binary_search(arr,n,key)){
        cout<<"Found";
    }
    else{
        cout<<"Not Found";
    }
    return 0;
}