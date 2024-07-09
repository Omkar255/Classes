#include <iostream>
using namespace std;

class SmarPtr
{
    int *ptr;

public:
    explicit SmarPtr(int *p = NULL) { ptr = p; }
    ~SmarPtr() { delete (ptr); }
    int &operator*() { return *ptr; }
};
int main()
{
    SmarPtr ptr(new int());
    *ptr = 20;
    cout << *ptr;
    return 0;
}