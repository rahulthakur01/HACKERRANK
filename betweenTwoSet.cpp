#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int hcf(int a, int b){
    while( b!=0 ){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm( int a, int b){
    return (a * b)/hcf(a,b);
}

int findLcm( vector<int> &arr1){
    int result = arr1[0];
    
    for(int i = 1; i<arr1.size(); i++){
        result = lcm(result, arr1[i]);
    }
    return result;
}

int findHcf(vector<int> &arr2){
    int result = arr2[0];
    for(int i = 1; i< arr2.size(); i++){
        result = hcf( result, arr2[i]);
    }
    return result;
}

int getTotalX(vector<int> &arr1, vector<int> &arr2){
    int lcmOfList = findLcm( arr1);
    int hcfOfList = findHcf(arr2);
    int count = 0;
    for(int i = lcmOfList; i<= hcfOfList; i = i+lcmOfList){
        if(hcfOfList%i == 0){
            count++;
        }
    }
    return count;
}

int main(){
    vector<int> arr1 ={2,6};
    vector<int> arr2 ={24,36};
    int ans = getTotalX(arr1, arr2);
    cout<< " Answer is : " << ans << endl;
    return 0;
}
