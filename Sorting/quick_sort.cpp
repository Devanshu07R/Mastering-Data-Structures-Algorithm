#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int> &arr,int start,int end){ //Time complexity: 0(n) and Space complexity: 0(1)
    int idx = start-1, pivot = arr[end];
    for(int j=start; j<end; j++){
        if(arr[j]<=pivot){
            idx++;
            swap(arr[j],arr[idx]);
        }
    }
    idx++;
    swap(arr[idx],arr[end]);
    return idx;
}

void quickSort(vector<int> &arr,int start,int end){
    if(start<end){
        int pivIdx = partition(arr,start,end);
        quickSort(arr,start,pivIdx-1);
        quickSort(arr,pivIdx+1,end);
    }
}
int main(){
    vector<int> arr = {12,31,35,8,32,17};
    quickSort(arr,0,arr.size()-1);

    for(int val:arr){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}