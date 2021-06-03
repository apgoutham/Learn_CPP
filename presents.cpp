// Source: https://codeforces.com/problemset/problem/136/A

#include<iostream>

using namespace std;

int main(){
	int N, num;
	int a[100];


	cin >> N;

	for(int i=1; i<=N; i++){
		cin >> num;
		a[num-1] = i;
	}
	for(int i=0; i<N; i++){
		cout << a[i] << " ";
	}
	return 0;
}
