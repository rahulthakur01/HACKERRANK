#include<iostream>
#include<vector>
using namespace std;

int getMoneySpent(const vector<int> &keyboards, const vector<int>&drives, int b) {
    
    int closestSum = -1;
   
    if(keyboards.empty() || drives.empty()){
        return -1;
    }
    for(int i = 0; i< keyboards.size(); i++){
       
        for(int j = 0; j< drives.size(); j++){
           int sum = keyboards[i] + drives[j];
            if(closestSum < sum &&  sum <= b){
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
// find the most expensive combination of one keyboard and one USB drive that does not exceed the given budget b. If no valid combination exists, it returns -1.
// Better approach 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
    sort(keyboards.begin(), keyboards.end(), greater<int>());  // Descending
    sort(drives.begin(), drives.end());  // Ascending

    int maxSpent = -1;
    int i = 0, j = 0;

    while (i < keyboards.size() && j < drives.size()) {
        int total = keyboards[i] + drives[j];
        if (total > b) {
            i++; // Too expensive, try cheaper keyboard
        } else {
            maxSpent = max(maxSpent, total);
            j++; // Try more expensive drive
        }
    }

    return maxSpent;
}
