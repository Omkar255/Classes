//https://www.hackerrank.com/challenges/c-tutorial-functions/problem?isFullScreen=true

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

// Function to return the maximum of four integers
int max_of_four(int a, int b, int c, int d) {
    int max_val = a;
    if (b > max_val) max_val = b;
    if (c > max_val) max_val = c;
    if (d > max_val) max_val = d;
    return max_val;
}

int main() {
    int a, b, c, d;
    
    // Reading input values
    cin >> a >> b >> c >> d;
    
    // Calling the function and printing the result
    cout << max_of_four(a, b, c, d) << endl;
    
    return 0;
}
