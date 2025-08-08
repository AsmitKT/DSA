#include <bits/stdc++.h>
using namespace std;

void bucketSort(vector<float>& arr)
{
    if (arr.empty()) return;
    int n = arr.size();
    float minVal = *min_element(arr.begin(), arr.end());
    float maxVal = *max_element(arr.begin(), arr.end());
    vector<vector<float>> buckets(n);
    for (int i = 0; i < n; i++)
    {
        int idx = (int)((arr[i] - minVal) / (maxVal - minVal + 1) * n);
        buckets[idx].push_back(arr[i]);
    }
    arr.clear();
    for (int i = 0; i < n; i++)
    {
        sort(buckets[i].begin(), buckets[i].end());
        arr.insert(arr.end(), buckets[i].begin(), buckets[i].end());
    }
}

int main()
{
    vector<float> arr = {0.42, 4.21, 1.23, 0.12, 2.34, 3.14, 2.71};
    cout << "Original array: ";
    for (float n : arr)
        cout << n << " ";
    cout << endl;
    bucketSort(arr);
    cout << "Sorted array: ";
    for (float n : arr)
        cout << n << " ";
    cout << endl;
    return 0;
}
