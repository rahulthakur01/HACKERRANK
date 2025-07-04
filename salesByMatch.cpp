#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int sockMerchant(int n, vector<int> arr){
    unordered_map<int, int> freqNum;
    for(int i = 0; i<n; i++){
        int matchPair = arr[i];
        freqNum[matchPair] = freqNum[matchPair] + 1;
    }
    int totalPairs = 0;
    // We can do it but we face issue regarding index
    // for(int i = 1; i<= freqNum.size(); i++){
    //    totalPairs = totalPairs + (freqNum[i] / 2);
    // }
    for(auto item: freqNum){
        totalPairs = totalPairs + item.second / 2;
    }
    return totalPairs;
}

int main(){
    int n = 10;
    vector<int> arr = {10, 20, 20, 10, 10, 30, 50, 50, 10, 20};

    int result = sockMerchant(n, arr);
    cout<< result << endl;
    return 0;
}