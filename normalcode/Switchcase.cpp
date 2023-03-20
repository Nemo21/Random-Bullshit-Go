#include <iostream>
using namespace std;
int main()
{
    long int month; /*declaring month variable*/
    cout<<"Enter the number of month in a year i.e from (1-12): "; /*input number of month*/
    cin>>month; /*input number*/
    switch (month){ /* switch cases taking only the floor part of the input */
        case 1: /*cases for each month */ 
            cout<<"Jan";
            break; /* break statement to prevent the display of all the months together */
        case 2:
            cout<<"Feb";
            break;
        case 3:
            cout<<"March";
            break;
        case 4:
            cout<<"April";
            break;
        case 5:
            cout<<"May";
            break;
        case 6:
            cout<<"June";
            break;
        case 7:
            cout<<"July";
            break;
        case 8:
            cout<<"Aug";
            break;
        case 9:
            cout<<"Sept";
            break;
        case 10:
            cout<<"Oct";
            break;
        case 11:
            cout<<"Nov";
            break;
        case 12:
            cout<<"Dec";
            break;
    }
}

/* do for months instead ig */