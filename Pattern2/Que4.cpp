// Que - Find the maximum number form the array , take the input from the user

#include<iostream>
using namespace std;

int main(){
    
    int size;
    cin>>size;
    int arr[1000];
    

    for(int i=0;i<7;i++){
    cin>>arr[i];
    // cout<<arr[i]<<" ";
    
    
}
int max=arr[0];
for(int i=0;i<7;i++){
if(arr[i]>max){
        max=arr[i];
    }
}
    cout<<max;
    //cout<<arr[i];
    return 0;

}


