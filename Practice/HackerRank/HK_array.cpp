//https://www.hackerrank.com/challenges/arrays-introduction/problem?isFullScreen=true
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;

    // Read the number of elements
    cin >> n;

    // Declare a vector to hold the elements
    vector<int> arr(n);

    // Read the elements into the array
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Print the elements in reverse order
    for (int i = n - 1; i >= 0; --i) {
        cout << arr[i];
        if (i > 0) {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}
