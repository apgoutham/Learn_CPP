//Source: https://codeforces.com/problemset/problem/467/A

#include<iostream>

using namespace std;

int main(){
	int N,count=0;
	int p, q;
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> p >> q;
		if(p<q-1){
			count++;
		}
	}
	cout << count << endl;
}

