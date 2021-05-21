// Source: https://codeforces.com/problemset/problem/546/A
#include<iostream>
using namespace std;

int total_cost(int k, int w){
	int cost=0;
	for(int i=1; i<=w; i++){
		cost += i*k;
	}
	return(cost);
}



int main(){
	
	int k, n, w;
	int cost, borrow;
	cin >> k >> n >> w;
	
	cost = total_cost(k, w);
	borrow = ((cost-n)>0)?(cost-n):0;
	cout << borrow << endl;
	return 0;
}





























