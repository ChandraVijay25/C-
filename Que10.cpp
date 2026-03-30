// find the second minimum element form the reverse array, take input from the user...

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int start=0;
    int end=n-1;

    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    int ans=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<ans)
        ans=arr[i];
    }
   int sec=10000;
   for(int i=0;i<n;i++){
    if(arr[i]!=ans)
    sec=min(arr[i],sec);

   }
   cout<<"Second smallest element is  " <<sec;
}