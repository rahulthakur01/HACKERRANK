#include<iostream>
#include<vector>
using namespace std;
vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {
        int n = a.size();
        k = k %n;
        vector<int> roated(n);
        // first rotate array
        for(int i = 0; i<n; i++){
            roated[(i + k) % n] = a[i];
        }
        // then store and print
        vector<int> ans;
    for(int i = 0; i<queries.size(); i++){
        ans.push_back(roated[queries[i]]);
    }
    return ans;
}


int main(){
    int n = 3;
    int k = 2;
  
    vector<int> arr = {1,2,3};
    vector<int> queries = {0,1,2};
    vector<int> result = circularArrayRotation(arr, k, queries);
    for(int value: result){
        cout<< value << endl;
    }
    return 0;
}

