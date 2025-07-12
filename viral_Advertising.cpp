#include<iostream>
using namespace std;

int viralAdvertising(int n){
    int totalLike = 0;
    int sharedLike = 5;
    for(int i = 0; i< n; i++){
        int like = sharedLike / 2;
        sharedLike = like * 3;
        totalLike = totalLike + like;
    }
    return totalLike;
}

int main(){
    int n = 5;
    int result = viralAdvertising(n);
    cout<< result << endl;
    return 0;
}