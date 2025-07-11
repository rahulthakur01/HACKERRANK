#include<iostream>
#include<cmath>
using namespace std;

int beautifulDays(int i, int j, int k) {
    int count = 0;
    for(int num = i; num <=j; num++){
        int originalNum = num;
        int reverse = 0;
        while(originalNum !=0){
            int digit = originalNum % 10;
            reverse = reverse * 10 + digit;
            originalNum = originalNum /10;
        }
        int diff = abs(num - reverse);
        if(diff % k ==0){
            count++;
        }
    }
    return count;
}



int main(){
    int i = 20, j=23;
    int k = 6;
    int result = beautifulDays(i,j,k);
    cout<< result << endl;
    return 0;
}