//Recursive binary Serch...

#include<iostream>
#include<vector>
using namespace std;

int recBinarySearch(vector<int>arr,int tar ,int start, int end ){
    int start = 0, end = arr.size()-1;
    while(start<=end){
        int mid = start+(end-start)/2;
        if(tar>arr[mid])
        {
            return recBinarySearch(arr,tar,mid+1,end);

        }else if(tar<arr[mid]){
            return recBinarySearch(arr,tar,start,mid-1);

        }
        else{
            return mid;
        }

    }//
    return -1;
}

int main(){
    vector<int> arr ={-1,0,3,5,9,12};
    int target = 5;
    int result = recBinarySearch(arr,target,0,arr.size()-1);
    
    if(result!=-1){
        cout<<"Element found at index:"<<result<<endl;
    }
    else{
        cout<<"Element not found."<<endl;
    }

}