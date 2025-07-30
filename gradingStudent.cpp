#include<iostream>
#include<vector>
using namespace std;

vector<int> gradingStudent(vector<int>arr ){

    int n = arr.size();
    vector<int> ans(n);
    for(int i = 0; i<n; i++){
        int m = arr[i];
        if(m < 38){
            ans.push_back(m);

        }else{
            int nexMultiple = m + (5 - (m%5));
            if(nexMultiple - m < 3){
                ans.push_back(nexMultiple);
            }else{
                ans.push_back(m);
            }
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {73,67, 38, 33};
    vector<int> result = gradingStudent(arr);
    for(int value: result){
        cout<< value << endl;
    }
    return 0;
}