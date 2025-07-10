#include<iostream>
using namespace std;

int utopianTree(int n) {
    int height = 1;
    if(n == 0){
        return height;
    }
    for(int i = 1; i<=n; i++){
        if( i % 2 == 1){
            height = height * 2;
        }else{
            height = height + 1;
        }
    }
    return height;
}

int main()
{
    int t;
    cin>> t;
    while (t--){
        int n;
        cin>>n;
        int result = utopianTree(n);
        cout<< result << endl;
    } 
    return 0;
}