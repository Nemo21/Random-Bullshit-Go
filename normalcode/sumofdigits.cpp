#include <iostream>
using namespace std;
int main(){
    int Testcase;
    cin>>Testcase;
    for (int i=0;i<Testcase;i++){
        int a,b;
        cin>>a>>b;
        cout<<a+b<<endl;
    }
    return 0;
}


/*
// bits/stdc++.h works in linux. 
// It loads most of the libraries of C++ required.#include <bits/stdc++.h> 
using namespace std;
int main() {
	// Read the number of test cases.
	int T;
	scanf("%d", &T);
	while (T--) {
		// Read the input a, b
		int a, b;
		scanf("%d %d", &a, &b);
		// Compute the ans.
		int ans = a + b;
		printf("%d\n", ans);
	}
	return 0;
}
*/
