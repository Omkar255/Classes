#include <iostream>
using namespace std;

class Random
{
public:
    Random(const Random&) = delete;

    static Random& Get(){
        static Random s_instance;
        return s_instance;
    }
    static float Float() {return Get().FloatInternal();}

private:
    float FloatInternal() {return m_RnadomGenerator;}
    Random() {}
    
    float m_RnadomGenerator = 0.5f;

};

int main()
{
    float number = Random::Float();
    cout<<"Your number is: "<<number;
    // auto& instance = Random::Get();
    // instance.function();
    // return 0;
}