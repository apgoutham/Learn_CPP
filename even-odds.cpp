// Source: https://codeforces.com/problemset/problem/318/A
#include<iostream>
using namespace std;

int main(){
	long long int N, in;
	cin >> N >> in;
	if((in <= (N/2)) || (in <= (N+1)/2) ){
		cout << 2*in-1 << endl;
	}
	else{
		cout << 2*(in-(N+1)/2) << endl;
	}
	return 0;
}

