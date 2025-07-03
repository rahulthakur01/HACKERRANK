#include <iostream>
#include <vector>
using namespace std;
vector<int> compareTriplets(vector<int> &a, vector<int> &b)
{
    vector<int> count(2, 0);

    int i = 0;
    int j = 0;
    while (i < a.size() && j < b.size())
    {
        if (a[i] > b[j])
        {
            count[0]++;
            i++;
            j++;
        }
        else if (a[i] == b[j])
        {
            i++;
            j++;
        }
        else if (a[i] < b[j])
        {
            count[1]++;
            i++;
            j++;
        }
    }
    return count;
}

int main()
{
    vector<int> a = {5, 6, 7};
    vector<int> b = {3, 6, 10};
    vector<int> result = compareTriplets(a, b);
    for (int value : result)
    {
        cout << value ;
    }
    return 0;
}

// Solution using for loop 
// If You Want to Make It Dynamic
// If you want to support any array size instead of hardcoding 3, you can do this:

// vector<int> compareTriplets(const vector<int>& a, const vector<int>& b)
// {
//     vector<int> count(2, 0);
//     int size = min(a.size(), b.size()); // safety check
//     for (int i = 0; i < size; ++i)
//     {
//         if (a[i] > b[i]) count[0]++;
//         else if (a[i] < b[i]) count[1]++;
//     }
//     return count;
// }
