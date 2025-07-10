#include<iostream>
#include<vector>
using namespace std;

int hurdleRace(vector<int> &height, int k){
    int doese;
    int maxHeight = height[0];
    for(int i = 1; i< height.size(); i++){
        if(height[i] > maxHeight){
            maxHeight = height[i];
        }
        if(maxHeight > k){
            doese = maxHeight-k;
        }else{
            return 0;
        }
    }
    return doese;
}


int main(){
   int k =4;
   
   vector<int> arr = {1,6,3,5,2};
   int result = hurdleRace(arr,k);
   cout<< result <<endl;
   return 0;
}