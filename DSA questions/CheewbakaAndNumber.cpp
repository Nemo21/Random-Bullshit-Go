#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n>=10){
        n=n/10;
    }
    int Firstdigit=n;
    if (Firstdigit==9 || Firstdigit==0){
        //then dont invert
    }
    else{
        //loop karna till reach ones's
    while(n>0){    
        int m=n%10;      
        n=n/10;    
        if(9-n<=n){
            n=9-n;
        }
    }
        //if(9-n)<=n
        //change n=9-n;
        //else 
        //keep n 
        cout<<n;
    }
    return 0;
}



///#include<cstdio>
// #include<iostream>
// #include<algorithm>
// #include<cstring>
// #include<cmath>

// using namespace std;

// int main()
// {
// 	char str[20];
// 	int i = 0;
// 	scanf("%s", str);
// 	while(str[i])
// 	{
// 		if(i==0 && str[i] == '9')
// 		{
// 			i++;
// 			continue;
// 		}
// 		else if(str[i]>='5')
// 		{
// 			str[i] = '9'-str[i]+'0';
// 			i++;
// 			continue;
// 		}
// 		i++;
// 	}
// 	printf("%s\n", str);
// 	return 0;
// }