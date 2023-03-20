#include <iostream>
using namespace std;
int main()
{
    long int x,y,z,max; /* declaring the values of the variables used */
    cout<<"Enter three numbers: ";
    cin>>x>>y>>z; /*input the three variables */
    max=x; /*considering this value as max and then comparing it with the other two */
    if(y>max) /*comparing the number with one number */
        max=y;
    if(z>max) /* comparing the number with another number */
        max=z;
    cout<<"\n"<<"Largest of "<<x<<","<<y<<" and "<<z<<" is "<<max;
    /* printing the largest number of all */
}