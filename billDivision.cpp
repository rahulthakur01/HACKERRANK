#include<iostream>
#include<vector>
using namespace std;

void bonAppetit(vector<int> &arr, int k, int b){

    
    int total = 0;
    for(int i = 0; i<arr.size(); i++){

        if( k != i){
            total = total + arr[i];
        }
        
    }
    int aanaShare = total /2;
    if(b == aanaShare){
        cout<< "Bon Appetit " << endl;
    }else{
        cout<< (b - aanaShare) << endl;
    }
}


int main(){
    int n = 4;
    int k = 1;
    vector<int> arr = {3,10, 2,9};
    
    int b = 12;
    bonAppetit(arr, k, b);
    return 0;
}