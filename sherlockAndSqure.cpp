#include<iostream>
using namespace std;

int squares(int a, int b) {
    int count = 0;
    for(int i = 1; i*i<=b; i++){
        int squre = i * i;
        if( squre >= a ){
            count++;
        }
    }
    return count;
}

int main()
{
    int q;
    cin>> q;
    while(q--){
        int a,b;
    cin>> a >> b;
    int result = squares(a,b);
    cout<< result << endl;
    }
}