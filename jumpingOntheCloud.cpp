#include<iostream>
#include<vector>
using namespace std;

int jumpingOnCloud(vector<int> &c, int k){
    int energy = 100;
    int n = c.size();
    int position;
    for(int i = 0; i<n; i=i+2){
        position = (i + k)%n;
        if(c[position] == 1){
            energy = energy-3;
        }else{
            energy = energy -1;
        }
    }
    return energy;
}

int main(){
    int k = 2;
    vector<int> arr = {0, 0, 1, 0, 0, 1, 1, 0};
    int result = jumpingOnCloud(arr, k);
    cout<< result << endl;
    return 0;
}