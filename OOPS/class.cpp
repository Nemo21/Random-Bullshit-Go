#include <iostream>
using namespace std;
template<class T>
class A
{
    T x;
    T y;
    public:
    A(T a,T b)
    {
        x=a;
        y=b;
    }
    void show()
    {
        cout<<x<<y;
    }
};
int main(){
    
    return 0;
}