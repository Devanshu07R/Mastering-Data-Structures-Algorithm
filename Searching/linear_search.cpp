//In the linear search algorithm, we search an element in a given array by Traversing the array from the starting till the ending till the entire element is not found..

#include<iostream>
#include<vector>
using namespace std;

int LinearSearch(vector<int>arr,int tar){
    for(int i = 0; i<arr.size();i++){
        if(arr[i]==tar){
            return i;
        }//
    }//

    return -1;

}
int main(){
    vector<int> arr = {1,34,67,45,89,32,0,-3};//index: 0,1,2,3,4,5,6,7
    int target = 0;
    int result = LinearSearch(arr,target);

    if(result!=-1){
        cout<<"element found at index:"<<result<<endl;
    }else{
        cout<<"Element not found."<<endl;
    }
    return 0;
}