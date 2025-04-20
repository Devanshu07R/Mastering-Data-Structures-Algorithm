//Selection sort..where in the case of the selection sort..we basically separate down the array elements into "sorted"___"unsorted" we finding out the minimum(smallest)element into an array and then swapping it into the first element..as the same process get continous...

#include<iostream>
using namespace std;
void SelectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int SmallestIdx = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[SmallestIdx]){
                SmallestIdx=j;

            }
        }
        swap(arr[i],arr[SmallestIdx]);

    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n = 8;
    int arr[]={34,56,78,21,19,8,90,100};

    cout<<"Original Array:"<<" ";
    printArray(arr,n);

    SelectionSort(arr,n);
    
    cout<<"Sortyed Array:"<<" ";
    printArray(arr,n);


    return 0;
}