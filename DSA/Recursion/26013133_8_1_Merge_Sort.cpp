#include <iostream>
using namespace std;

void ArrOut(int *arr,int &n){
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

void merge(int arr[],int l, int r){
    int m = l+(r-l)/2;
    // length1 is the length of left side of the splitted array
    int length1 = m-l+1; //adding 1 as we subtracted 1 while calculating indexes
    // length2 is the length of right side of the splitted array
    int length2 = r-m;
    
    //create new arrays of the sizes of left and right divided portions
    int *arr1 = new int[length1];
    int *arr2 = new int[length2];

    //copy values from l->m in the first array
    int k = l;
    for(int i=0;i<length1;i++){
        arr1[i] = arr[k++];
    }
    //copy values from m+1->r in the second array
    k = m+1;
    for(int i=0;i<length2;i++){
        arr2[i] = arr[k++];
    }

    //After the values are coppied, now we sotr and merge two sorted arrays
    int i=0,j=0;
    k=l;
    while(i<length1 && j<length2){
        if(arr1[i]<arr2[j]){
            arr[k++] = arr1[i++];
        }else{
            arr[k++] = arr2[j++];
        }
    }

    while(i<length1){
        arr[k++]=arr1[i++];
    }
    while(j<length2){
        arr[k++]=arr2[j++];
    }

    //If any object is created using the new keyword, it will be created in the heap memory.
    //If we do not derefereance the memory mannually it will cause memory leak.
    // Heap memory do not get deallocated automatically, only stack memory does.
    //So we should use delete keyword to dereferance the memory mannually
    delete []arr1;
    delete []arr2;


}

void MergeSort(int arr[],int l, int r){
    if(l>=r)return;
    int m = l+(r-l)/2;
    MergeSort(arr,l,m); // passing left side for further dividing
    MergeSort(arr,m+1,r); // passing right side for further dividing
    return merge(arr,l,r);
}



int main() {
    int n = 10;
    int arr[] = {1,6,48,4,8,52,14,16,41,63};
    int l=0,r=n-1;

    MergeSort(arr,l,r);

    ArrOut(arr,n);


    return 0;
}

