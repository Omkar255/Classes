#include <iostream>
using namespace std;

class Singleton
{
public:
    Singleton(const Singleton&) = delete;

    static Singleton& Get(){
        return s_instance;
    }
    void function() {}
private:
    Singleton() {}
    static Singleton s_instance;
};
Singleton Singleton :: s_instance;
int main()
{
    Singleton& instance = Singleton::Get();
    instance.function();
    return 0;
}