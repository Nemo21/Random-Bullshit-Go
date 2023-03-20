#include <iostream>
using namespace std;
class Test{
    int x;
    public:
        Test(int x){
            this->x=x;
        }
};
int main(){
    Test t1(20);
    Test t2;
    cout<<t1.x<<endl;
    cout<<t2.x<<endl;
    return 0;
}