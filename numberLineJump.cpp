#include<iostream>
using namespace std;

string kangaroo(int x1, int v1, int x2, int v2) {

    if(v1 > v2){
        while(x1 <= x2){
            if(x1 == x2){
                return "Yes";
            }
            x1 = x1 + v1;
            x2 = x2 + v2;
        }
    }
    return "No";
}

int main(){
    int x1 = 0;
    int v1 = 4;
    int x2 = 3;
    int v2 = 2;

    cout << kangaroo(x1, v1, x2, v2) << endl;
    return 0;
}
