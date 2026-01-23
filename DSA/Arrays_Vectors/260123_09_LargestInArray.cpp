//https://www.geeksforgeeks.org/problems/largest-element-in-array4009/1

#include <iostream>
using namespace std;

void ArrIn(int *arr,int &n){
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}
void ArrOut(int *arr,int &n){
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;
}
int LargestArr(int *arr,int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(max<arr[i])max=arr[i];
    }
    return max;
}
int SecLargestArr(int *arr,int n){
    int max=INT_MIN,max_2=INT_MIN;
    for(int i=0;i<n;i++){
        if(max<arr[i])max=arr[i];
        if(max_2<arr[i] && arr[i]!=max)max_2 = arr[i];
    };
    return max_2;
}
int ThirdLargestArr(int *arr,int n){
    int max=INT_MIN,max_2=INT_MIN,max_3=INT_MIN;
    for(int i=0;i<n;i++){
        if(max<arr[i])max=arr[i];
        if(max_2<arr[i] && arr[i]!=max)max_2 = arr[i];
        
    };
    return max_3;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    ArrIn(arr,n);
    cout << "Largest of Array :" << LargestArr(arr,n) << endl;
    cout << "Second Largest of Array :" << SecLargestArr(arr,n) << endl;
    // cout << "Third Largest of Array :" << ThirdLargestArr(arr,n) << endl;

    return 0;
}