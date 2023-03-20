#include <iostream>
using namespace std;
void count();
int main(){
    count();
    count();
    return 0;
}
void count()
{
    static int c=0;
    c++;
    cout<<"count: "<<c<<endl;
}