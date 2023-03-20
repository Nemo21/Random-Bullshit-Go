#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define pii pair<ll, ll>
#define vi vector<ll>
#define vt(type) vector<type>
#define si set<ll>

void solve()
{
    int ChoiceA,ChoiceB,ChoiceC,ChoiceD;
    string Test;
    cin>>Test;
    ChoiceA=Test.size();
    cin>>Test;
    ChoiceB=Test.size();
    cin>>Test;
    ChoiceC=Test.size();
    cin>>Test;
    ChoiceD=Test.size();
    ChoiceA-=2;
    ChoiceB-=2;
    ChoiceC-=2;
    ChoiceD-=2;
    Test="";
    if((ChoiceA<=(ChoiceB/2)&&ChoiceA<=(ChoiceC/2)&&ChoiceA<=(ChoiceD/2))||(ChoiceA>=(ChoiceB*2)&&ChoiceA>=(ChoiceC*2)&&ChoiceA>=(ChoiceD*2)))
        Test+="A";
    if((ChoiceB<=(ChoiceA/2)&&ChoiceB<=(ChoiceC/2)&&ChoiceB<=(ChoiceD/2))||(ChoiceB>=(ChoiceA*2)&&ChoiceB>=(ChoiceC*2)&&ChoiceB>=(ChoiceD*2)))
        Test+="B";
     if((ChoiceC<=(ChoiceA/2)&&ChoiceC<=(ChoiceB/2)&&ChoiceC<=(ChoiceD/2))||(ChoiceC>=(ChoiceA*2)&&ChoiceC>=(ChoiceB*2)&&ChoiceC>=(ChoiceD*2)))
        Test+="C";
     if((ChoiceD<=(ChoiceA/2)&&ChoiceD<=(ChoiceB/2)&&ChoiceD<=(ChoiceC/2))||(ChoiceD>=(ChoiceA*2)&&ChoiceD>=(ChoiceB*2)&&ChoiceD>=(ChoiceC*2)))
        Test+="D";
    if(Test.size()==1)
        cout<<Test;
    else cout<<"C";

}

int main()
{

    int t = 1;

    // cin >> t;

    while (t--)
    {

        solve();
        cout << "\n";
    }

    return 0;
}