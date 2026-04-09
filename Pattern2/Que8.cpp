// Print he second height number from an Array,take input from the user.....

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>ans)
        ans=arr[i];
    }
    int sec=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=ans)
        sec=max(arr[i],sec);
        
    }
   cout<<sec;
    return 0;
}