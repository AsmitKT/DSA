#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) cout << arr[i] << ' ';
    cout << endl;
    cout << "Size: " << sizeof(arr) / sizeof(arr[0]) << endl;
    cout << "First: " << arr[0] << ", Last: " << arr[4] << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; ++i)
        cout << arr[i] << " ";
    cout << endl;
    arr[2] = 10;
    for (int i = 0; i < 5; ++i)
        cout << arr[i] << " ";
    cout << endl;
    cout << sizeof(arr) / sizeof(arr[0]) << endl;
    cout << arr[0] << endl;
    cout << arr[4] << endl;
    for (int i = 0; i < 5; ++i)
        arr[i] = 7;
    for (int i = 0; i < 5; ++i)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
