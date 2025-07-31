#include<iostream>
#include<vector>
using namespace std;
int divisibleSumPairs( int k, vector<int> &ar) {
    int n = ar.size();
    int count = 0;

    for(int i = 0; i<n; i++){
        for(int j = i + 1; j<n; j++){
            if((ar[i] + ar[j]  ) % k == 0){
                count++;
            }
        }
    }
    return count;
}


int main(){
    vector<int> arr = {1, 3, 2, 6, 1, 2};
    int k = 3;
    int result = divisibleSumPairs(k, arr);
    cout<< result << endl;
}