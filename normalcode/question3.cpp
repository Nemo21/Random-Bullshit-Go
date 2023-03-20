#include <iostream>
using namespace std;
int main(){
    unsigned int X;
    float Y;
    // scanf("%d%f",&X,&Y);
//    // if((int)X%5!=0 && Y>X){
//         Y=Y-X-0.50;
//         printf("%0.2f",Y);
//     }
//     else{
//         printf("%0.2f",Y);
//     }
    int witdh;
    float balace;

    cin >> witdh >> balace;

    if((witdh%5==0) && (balace > (witdh+0.50))){

      cout << balace - witdh - 0.50;
    }else {
      cout << balace;
    }
    // if(X>Y+0.50 && X%5==0){
    //     printf("%0.2f",Y);
    // }
    // else if(X%5==0){
    //     Y=Y-X-0.5;
    //     printf("%0.2f",Y);
    // }
    // else{
    //     printf("%0.2f",Y);
    // }
    return 0;
}


//while(X!5=0) break;