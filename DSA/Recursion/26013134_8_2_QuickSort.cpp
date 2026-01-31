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

//return the index of partition (pivot element)
int partirion(int arr[], int start, int end){
    int pivot = arr[start];
    // counting how many elements are less thatn pivot
    int count=0;
    for(int i=start;i<=end;i++){
        if(arr[i]<pivot)count++;
    }
    //the count gives us the correct position of the pivot element
    //make pivot index at that position
    int pivotIndex = start+count;
    //swap pivot index to pivot element
    swap(arr[pivotIndex],arr[start]);

    //now we need to handle the left and right side of the pivot
    //left should have element less than pivot and right should have elements grater than pivot
    int i=start,j=end;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<pivot)i++;
        while(arr[j]>pivot)j--;
        swap(arr[i++],arr[j--]);
    }

    return pivotIndex;
}

void QuickSort(int arr[],int start, int end){
    if(start>=end)return;

    int p = partirion(arr,start,end);
    
    QuickSort(arr,start,p-1); // left
    QuickSort(arr,p+1,end);   // right
}

int main() {
    int n = 7;
    // cin >> n;
    int arr[] = {4, 5, 2, 1, 7, 3, 8};
    // ArrIn(arr,n);
    ArrOut(arr,n); 
    QuickSort(arr,0,n-1);
    ArrOut(arr,n); 

    

    return 0;
}