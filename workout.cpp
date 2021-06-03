// Source: https://codeforces.com/problemset/problem/255/A
#include<iostream>

using namespace std;

int main(){
	int N,n, c=0, bcp=0, bk=0;
	cin >> N;

	for(int i=0; i<N; i++){
		cin >> n;
		if(i%3 == 0){
			c+=n;
		}
		else if(i%3 == 1){
			bcp+=n;
		}
		else{
			bk+=n;
		}
	}
	cout << (((c>bcp) && (c>bk))?"chest":(bk>bcp)?"back":"biceps") << endl;

	return 0;
}   

