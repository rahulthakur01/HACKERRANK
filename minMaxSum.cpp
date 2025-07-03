#include <iostream>
#include <vector>
using namespace std;

void minMaxSum(vector<int> arr)
{
    long totalSum = 0;
    long minValue = arr[0];
    long maxValue = arr[0];

    for (int i = 0; i < arr.size(); i++)
    {
        totalSum = totalSum + arr[i];
        if (arr[i] > minValue)
        {
            minValue = arr[i];
        }
        if(maxValue > arr[i])
        {
            maxValue = arr[i];
        }
    }
    long minSum = totalSum - minValue;
    long maxSum = totalSum - maxValue;
    cout << minSum << " " << maxSum << endl;
}

int main()
{
    vector<int> arr = {1, 5, 7, 9};

    minMaxSum(arr);

    return 0;
}