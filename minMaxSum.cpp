#include<iostream>
#include<climits>
#include<vector>
using namespace std;


void minMax(vector<int> &arr){
    long totalSum = 0;
    long maxValue = INT_MIN;
    long minValue = INT_MAX;

    for(int i = 0; i< arr.size(); i++){
        totalSum = totalSum + arr[i];
        if(arr[i] <minValue){
            minValue = arr[i] ;
        }
        if(maxValue < arr[i]){
            maxValue = arr[i];
        }
    }
    long minSum = totalSum - maxValue;
    long maxSum = totalSum - minValue;

    cout<< minSum << " " << maxSum << endl;
}

int main(){
    // vector<int> arr =  {1, 5, 7, 9};
    vector<int> arr =  {-1,2,5,6,0};
    // vector<int> arr =  {0};

    minMax(arr);
    return 0;
}