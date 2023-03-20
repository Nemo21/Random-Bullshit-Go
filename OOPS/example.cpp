#include <iostream>
using namespace std;
class Emplyeee
{
    public:

    int eid;
    string ename;
    float salary;
    void input();
    void show()
    {
        cout<<eid<<ename<<salary;
    }
};
void Emplyeee :: input()
{
    cin>>eid;
    string ch;
    getline(cin,ch);
    getline(cin,ename);
    cin>>salary;
}
int main(){
    Emplyeee cat,cat1;
    cat.input();
    cat1.input();
    cat.show();
    cat1.show();
    return 0;
}