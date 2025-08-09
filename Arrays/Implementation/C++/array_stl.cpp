#include <bits/stdc++.h>
using namespace std;

int main() {
    array<int, 5> arr = {1, 2, 3, 4, 5};
    for (int x : arr) cout << x << ' ';
    cout << endl;
    cout << "Size: " << arr.size() << endl;
    cout << "Front: " << arr.front() << ", Back: " << arr.back() << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    array<int, 5> arr = {1, 2, 3, 4, 5};
    for (size_t i = 0; i < arr.size(); ++i)
        cout << arr[i] << " ";
    cout << endl;
    arr[2] = 10;
    for (auto val : arr)
        cout << val << " ";
    cout << endl;
    cout << arr.size() << endl;
    cout << arr.front() << endl;
    cout << arr.back() << endl;
    arr.fill(7);
    for (auto val : arr)
        cout << val << " ";
    cout << endl;
    return 0;
}
