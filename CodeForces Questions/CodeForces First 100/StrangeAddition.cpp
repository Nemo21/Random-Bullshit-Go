#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
int n,ans[105],le,t;
bool fl1,fl2;
int main(){
	scanf("%d",&n);
	for(int i=1,x;i<=n;i++){
		scanf("%d",&x);
		if(!x||x==100)ans[++le]=x;
		else if(x<10){
			if(!fl1)ans[++le]=x,fl1=1;
		}
		else{
			if(!fl2){
				if(!(x%10))ans[++le]=x,fl2=1;
				else t=x;
			}
		}
	}
	if(!fl1&&!fl2&&t)ans[++le]=t;
	printf("%d\n",le);
	for(int i=1;i<=le;i++)printf("%d ",ans[i]);
	return 0;
}