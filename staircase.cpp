#include<iostream>
using namespace std;


void staircase(int n) {
    int i = 0;
    while(i<n){
        int space = n - i-1;
        while(space > 0){
            cout<< "  ";
            space--;
        }
        int j = 0;
        while(j<=i){
            cout<<  " * ";
            j++;
        }
        cout<<endl;
        i++;
    }
   

}

int main()
{
    int n;
    cin>>n;
    staircase(n);
    return 0;
}