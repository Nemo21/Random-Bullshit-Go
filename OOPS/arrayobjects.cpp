#include <iostream>
using namespace std;
class Emplyeee
{
    public:

    int eid;
    string ename;
    float salary;
    static string company;
    void input();
    void show()
    {
        cout<<eid<<ename<<salary<<company;
    }
};
string Emplyeee:: company="TCS";
void Emplyeee :: input()
{
    cin>>eid;
    string ch;
    getline(cin,ch);
    getline(cin,ename);
    cin>>salary;
}
int main(){
    Emplyeee cat[3];
    for(int i=0;i<3;i++)
    {
        cat[i].input();
        cat[i].input();
    }
    return 0;
}