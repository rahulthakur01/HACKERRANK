#include<iostream>
#include<vector>
using namespace std;

int jumpingOnCloud(vector<int> &c, int k){
    int energy = 100;
    int n = c.size();
    int position = 0;
 while(true){
    position = (position + k)%n;
    if(c[position] == 1){
        energy = energy-3;
    }else{
        energy = energy -1;
    }
    if(position == 0){
        break;
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