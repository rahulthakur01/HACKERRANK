#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int migratoryBirds(vector<int> &arr){
    unordered_map<int, int> freqNum;
    for(int i = 0; i< arr.size(); i++){
        int bird = arr[i];
        freqNum[bird] = freqNum[bird] + 1;
    }
    int maxFreq = 0;
    int ans = 0;
    for(int i = 0; i<freqNum.size(); i++){
        if(freqNum[i] > maxFreq){
            maxFreq = freqNum[i];
            ans = i;
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {1,2,3,4,5,4,3,2,1,3,4};
     int result = migratoryBirds(arr);
     cout<< result << endl;
    return 0;
}