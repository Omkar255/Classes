//https://www.hackerrank.com/challenges/c-tutorial-pointer/problem?isFullScreen=true
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void update (int *a, int *b)
{
    int tmp_a, tmp_b;
    tmp_a = *a;
    tmp_b = *b;
    
    *a = tmp_a + tmp_b;
    *b = abs(tmp_a - tmp_b);
    
    return;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a, b;
    
    cin >> a >> b;
    update(&a, &b);
    cout << a << endl << b;
    return 0;
}
