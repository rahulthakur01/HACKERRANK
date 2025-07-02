#include<iostream>
#include<vector>
using namespace std;

int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
    
    int closestSum = -1;
   
    for(int i = 0; i< keyboards.size(); i++){
       
        for(int j = 0; j< drives.size(); j++){
           int sum = keyboards[i] + drives[j];
            if(closestSum < sum &&  sum < b){
                closestSum = sum;
            }
        }
    }
    return closestSum;
}

int main(){
    vector<int> keyboards = {40,50,60};
    vector<int> drives = {5,8,12};
    int b = 60;
    int result = getMoneySpent(keyboards, drives, b);
    cout<< result << endl;
}