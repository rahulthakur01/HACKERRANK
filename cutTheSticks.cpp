#include<iostream>
#include<climits>
#include<vector>
using namespace std;

vector<int> cutTheSticks(vector<int> &arr){
    vector<int>ans;

    // find smallest element
   while(true){
    int count = 0;
    int min = INT_MAX;
    for(int i = 0; i< arr.size(); i++){
        if(arr[i]>0){
            count++;
            if(arr[i] <min){
                min = arr[i];
            }
        }
    }
    if(count == 0) {
        break;
    };

    ans.push_back(count);

    // cut the stick and update arr
    for(int i = 0; i<arr.size(); i++){
        if(arr[i] > 0){
            arr[i] = arr[i] - min;
        }
    }
   }
   return ans;

}

int main(){
    
    vector<int> arr = {5, 4, 4, 2, 2, 8};
    vector<int> result = cutTheSticks(arr);
    for(int value: result){
        cout<< value << endl;
    }
    return 0;
}

//======================= optimize solution 
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// vector<int> cutTheSticks(vector<int> arr) {
//     vector<int> result;
//     sort(arr.begin(), arr.end());  // Sort the stick lengths

//     int n = arr.size();
//     result.push_back(n);  // All sticks at start

//     for (int i = 1; i < n; i++) {
//         if (arr[i] != arr[i - 1]) {
//             result.push_back(n - i);  // Remaining sticks after cut
//         }
//     }

//     return result;
// }

// int main() {
//     vector<int> arr = {5, 4, 4, 2, 2, 8};
//     vector<int> result = cutTheSticks(arr);
//     for (int value : result) {
//         cout << value << endl;
//     }
//     return 0;
// }
