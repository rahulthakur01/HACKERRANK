#include<iostream>
using namespace std;
int saveThePrisoner(int n, int m, int s) {
    int result = (s+m -1) % n;
    if(result ==0){
        return n;
    }else{
        return result;
    }

}

int main()
{
    int t;
    cin>> t;
    while(t--){
            int n, m, s;
    cin>> n >> m>> s;
    int ans = saveThePrisoner(n,m,s);
    cout<< ans << endl;
    }
    return 0;
}