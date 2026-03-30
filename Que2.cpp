#include<iostream>
using namespace std;
int main(){
    int arr[]={4,8,6,2,9};
    int min= arr[0];
    for(int i=0;i<5;i++){
       if(arr[i]<min) 
      min =arr[i];
    }
    cout<<min;
    return 0;

}