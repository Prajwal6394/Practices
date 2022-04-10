#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int start, int end, int target){
    while (start <= end) {
        int mid = (start + end)/2;
        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] > target){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return -1;
}
int ans(int arr[], int target){
    int start = 0;
    int end = 1;
    if(target > arr[end]){
        int temp = end + 1;
        end = (end - start + 1)*2;
        start = temp;
    }
    return binarySearch(arr, start, end, target);
}

int main(){
    int arr[] = {1, 3, 5, 8, 9, 10};
    int target = 5;
    cout<<ans(arr, target)<<endl;
}