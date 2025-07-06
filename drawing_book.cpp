#include<iostream>
#include<algorithm>
using namespace std;

// int pageCount(int n, int p){
//    int front = p /2;
//    int back = n/2 - p/2;
//    int ans;
//    if(front < back){
//     ans = front;
//    }else{
//     ans = back;
//    }
//    return ans;
// }
int pageCount(int n, int p){
    // using min
    return min(p/2, n/2 - p/2);
 }

int main(){
   int n = 6;
   int p = 2;
   int result = pageCount(n, p);
   cout<< result << endl;
    return 0;
}