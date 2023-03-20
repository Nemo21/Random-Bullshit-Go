#include <iostream>
using namespace std;
int main(){
    int a=1;
    int b=a++;
    int c=++a;
    cout<<"value of b is " <<b<<endl;
    cout<<"value of c is "<<c<<endl;
    return 0;
}

//output is b=1 c=3
