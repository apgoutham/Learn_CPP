// Source: https://codeforces.com/problemset/problem/466/A
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m,a,b;
	cin >> n >> m >> a >> b;
	int cost_wo_m = n*a;
	int cost_w_m = (n/m)*b+(n%m)*a;
	int cost_w_m_only = ((n/m)+1)*b;
	cout << min(min(cost_wo_m, cost_w_m), cost_w_m_only) << endl;
	return 0;
}
