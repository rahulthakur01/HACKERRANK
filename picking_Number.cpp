#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

// Hash Map Frequency Counting or Hashing Technique
int pickingNumbers(vector<int> &arr){
    unordered_map<int, int> freqNum;
    for(int i = 0; i<arr.size(); i++){
        int matchPair = arr[i];
        freqNum[matchPair] = freqNum[matchPair]+1;
    }
    int maxLength = 0;
   for(auto pair: freqNum){
      int currentVal = pair.first;
      int totalPlus = freqNum[currentVal] + freqNum[currentVal+1];
      int totalMinus = freqNum[currentVal] + freqNum[currentVal -1];
      maxLength = max({maxLength, totalPlus, totalMinus});
   }
   return maxLength;
}

int main(){

    vector<int> arr = {1,1,2,2,4,4,5,5,5};
    cout << "Array: ";
    for(int num : arr) cout << num << " ";
    cout << endl;
    int result = pickingNumbers(arr);
    cout<< result << endl;

    return 0;
}

// #include<iostream>
// #include<vector>
// using namespace std;

// int pickingNumbers(vector<int> &arr){
//     // Step 1: Frequency array
//     vector<int> freq(101, 0); // 0 to 100

//     for(int num : arr){
//         freq[num]++;
//     }

//     // Step 2: Check max sum of two adjacent frequencies
//     int maxLength = 0;
//     for(int i = 1; i <= 100; i++){
//         int sum = freq[i] + freq[i-1];
//         maxLength = max(maxLength, sum);
//     }

//     return maxLength;
// }

// int main(){
//     vector<int> arr = {1,1,2,2,4,4,5,5,5};

//     cout << "Array: ";
//     for(int num : arr) cout << num << " ";
//     cout << endl;

//     int result = pickingNumbers(arr);
//     cout << "Result: " << result << endl;

//     return 0;
// }
