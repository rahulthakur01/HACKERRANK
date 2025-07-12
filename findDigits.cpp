#include<iostream>
using namespace std;


int findDigits(int n) {
    int count = 0;
    int original = n;
    while(n != 0){
        int digit = n % 10;
        if(digit != 0 && original % digit == 0){
            count++;
        }
        n = n/10;
    }
    return count;
}

int main(){
    int n = 124;
    int result = findDigits(n);
    cout<< result << endl;
}