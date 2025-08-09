#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};
    vec.push_back(6);
    for (int x : vec) cout << x << ' ';
    cout << endl;
    cout << "Size: " << vec.size() << endl;
    cout << "Front: " << vec.front() << ", Back: " << vec.back() << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};
    for (size_t i = 0; i < vec.size(); ++i)
        cout << vec[i] << " ";
    cout << endl;
    vec[2] = 10;
    for (auto val : vec)
        cout << val << " ";
    cout << endl;
    cout << vec.size() << endl;
    cout << vec.front() << endl;
    cout << vec.back() << endl;
    vec.assign(5, 7);
    for (auto val : vec)
        cout << val << " ";
    cout << endl;
    return 0;
}
