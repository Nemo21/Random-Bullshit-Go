#include <iostream>
using namespace std;
int main(){
    int testcase;
    cin>>testcase;
    while(testcase--){
        int Dragon1DSA,Dragon2TOC,Dragon3DM;
        int Sloth1DSA,Sloth2TOC,Sloth3DM;
        cin>>Dragon1DSA>>Dragon2TOC>>Dragon3DM;
        cin>>Sloth1DSA>>Sloth2TOC>>Sloth3DM;
        if(Dragon1DSA+Dragon2TOC+Dragon3DM>Sloth1DSA+Sloth2TOC+Sloth3DM){
            //total marks of dragon is more 
            cout<<"DRAGON";
        }
        else if(Dragon1DSA+Dragon2TOC+Dragon3DM<Sloth1DSA+Sloth2TOC+Sloth3DM){
            //total marks of sloth is more
            cout<<"SLOTH";
        }
        else if(Dragon1DSA+Dragon2TOC+Dragon3DM==Sloth1DSA+Sloth2TOC+Sloth3DM){
            //both equal bruh
            if(Dragon1DSA>Sloth1DSA){
                //dragon gets better rank
                cout<<"DRAGON";
            }
            else if(Dragon1DSA<Sloth1DSA){
                //sloth gets better rank
                cout<<"SLOTH";
            }
            else if(Dragon1DSA==Sloth1DSA){
                //equal dsa score
                if(Dragon2TOC>Sloth2TOC){
                    //dragon better rank
                    cout<<"DRAGON";
                }
                else if(Dragon2TOC<Sloth2TOC){
                    //sloth better rank
                    cout<<"SLOTH";
                }
                else if(Dragon2TOC==Sloth2TOC){
                    //same rank
                    cout<<"TIE";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}