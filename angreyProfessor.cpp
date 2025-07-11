#include<iostream>
#include<vector>
#include<string>
using namespace std;

string angryProfessor(int k, vector<int> &arr){
    int count = 0;
    for(int i = 0; i< arr.size(); i++){
        if(arr[i] <= 0){
            count++;
        }
    }
    if( count >= k){
        return "NO";
    }else{
        return "YES";
    }
}


int main(){
    int k = 3;
    vector<int> arr ={-2,-1,0,1,2};
  cout<<   angryProfessor(k, arr) << endl;
    return 0;
}