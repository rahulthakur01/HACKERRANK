#include<iostream>
using namespace std;

int main(){
    int n = 3;
    int k = 2;
    int q = 3;
    // vector<int> arr(n);
    vector<int> arr = {1,2,3};
    vector<int> queries = {0,1,2};
}
// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int n, k, q;
//     cin >> n >> k >> q;

//     vector<int> a(n);
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }

//     // Handle cases where k >= n
//     k = k % n;

//     vector<int> queries(q);
//     for (int i = 0; i < q; i++) {
//         cin >> queries[i];
//     }

//     for (int i = 0; i < q; i++) {
//         int queryIndex = queries[i];
//         int originalIndex = (queryIndex - k + n) % n;
//         cout << a[originalIndex] << endl;
//     }

//     return 0;
// }
