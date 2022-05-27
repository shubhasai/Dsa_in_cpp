#include<bits/stdc++.h>
using namespace std;
int reverse_array(int arr[],int n){
    int s=0;
    int e = n-1;
    while (s<e){
        swap(arr[s],arr[e]);
        s +=1;
        e-=1;
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
    reverse_array(arr,n);
    i=0;
    while (i<n)
    {
        cout<<arr[i]<<endl;
        i++;
    }
    return 0;
}

