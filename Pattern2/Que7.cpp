// Find reverse array and maximum from the reverse array

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

    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max)
            max=arr[i];
        
        
    }
    cout<<max;
    return 0;
}