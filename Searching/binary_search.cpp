//Binary search is the divide the conquer searching technique in which  where we have to arrange the data in a particular order before the searching operation and after that we have to find out the middle element of an array and to compare with the target element

//arr=[-1,0,3,4,5,9,12], target = 12

#include<iostream>
#include<vector>
using namespace std;

int BinarySearch(vector<int> arr,int tar){
    int start = 0, end = arr.size()-1;

    while(start<=end){
        int mid = start+(end-start)/2;
        if(tar>arr[mid]){
            start = mid+1;
        }
        else if(tar<arr[mid]){
            end = mid -1;
        }
        else{
            return mid;
        }
    }//
    return -1;

}//

int main(){
    vector<int> arr = {-1,0,3,4,5,9,12};
    int target = 45;
    int result = BinarySearch(arr,target);
    if(result!=-1){
        cout<<"Element found at index:"<<result<<endl;
    }
    else{
        cout<<"Element not found."<<endl;
    }

}