#include <iostream>
using namespace std;
template <class T> void maxval(T a,T b);
void maxval(int a,int b)
{
    if(a>b)
    {
        cout<<a;
    }
    else
    {
        cout<<b;
    }
    return;
}
int main(){
    int a;
    int b;
    cin>>a>>b;
    cout<<"Max value between"<<a<<"and"<<b;
    maxval(a,b);
    return 0;
}