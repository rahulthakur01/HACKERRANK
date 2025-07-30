#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int birthdayCakeCandles(int arr[], int n){
  // int maxHeight = arr[0];
  int maxHeight = INT_MIN;
    int count = 0;
    for(int i = 0; i<n; i++){
       if(arr[i] > maxHeight){
        maxHeight = arr[i];
        count = 1;
       }else if( arr[i] == maxHeight){
          count++;
       }
    
    }
    return count;
}

int main(){
  int arr[5] = {3,3,3,0,2};
  int result = birthdayCakeCandles(arr, 5);
    cout<< "Number of tallest candles: " << result << endl;
    return 0;
}