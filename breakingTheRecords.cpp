#include<iostream>
#include<vector>
using namespace std;

vector<int>breakingRecords(vector<int> arr){

    vector<int> count(2,0);
    int minScore = arr[0];
    int maxScore = arr[0];
    for(int i = 0; i<arr.size(); i++){

        if(minScore > arr[i]){
            minScore = arr[i];
            count[1]++;
        }
        else if(maxScore < arr[i]){
            maxScore = arr[i];
            count[0]++;
        }
    }
    return count;

}

int main(){
    vector<int> arr = { 12,24,10,24};

    vector<int> result =  breakingRecords(arr);
    for(int value: result){
        cout<<  value << " ";
    }
    return 0;
}