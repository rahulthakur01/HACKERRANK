#include<iostream>
#include<vector>
using namespace std;

// 7 11
// 5 15
// 3 2
// -2 2 1
// 5 -6

void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    int appleCount = 0;
    int orangeCount = 0;

    for(int i = 0; i< apples.size(); i++){
         int landingPosOf_a = a + apples[i];
         if( s<=landingPosOf_a && landingPosOf_a<=t){
            appleCount++;
         }
    }
    for(int i = 0; i< oranges.size(); i++){
        int landingPosOf_b = b + oranges[i];
        if(s<=landingPosOf_b && landingPosOf_b <= t){
            orangeCount++;
        }
    }
    cout<< appleCount << endl;
    cout<< orangeCount << endl;
}


int main(){
    int s = 7, t = 11;
    int a = 5, b = 15;
    vector<int> apples = {-2,2,1};
    vector<int> oranges = {5, -6};
    countApplesAndOranges( s, t, a, b, apples, oranges);
   
    return 0;
}