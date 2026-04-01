#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    int arr[n], copy[n];

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++) {
        copy[i] = arr[i];
    }
    cout << "Copied array:\n";
    for(int i = 0; i < n; i++) {
        cout << copy[i] << " ";
    }

    return 0;
}