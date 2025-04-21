//Bubble sort arranges N elements of an array by placing the largest elements into the proper position....
// Time complexity: B A W : 0(n), 0(n2) , 0(n2).....
//Space complexity: 0(1)

#include<iostream>
using namespace std;
void bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }//
        }//
    }//
}//

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n = 7;
    int arr[]={5,7,8,4,9,3,10};

    cout<<"Original Array:"<<" ";
    printArray(arr,n);

    bubbleSort(arr,n);

    cout<<"Sorted Array:"<<" ";
    printArray(arr,n);
}