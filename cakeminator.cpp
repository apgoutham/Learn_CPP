// Source:https://codeforces.com/problemset/problem/330/A 
#include<iostream>

using namespace std;

int main(){
	int r,c,r_count=0,c_count=0;
	char cake[10][10];
	cin >> r >> c;
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			cin >> cake[i][j];
		}
	}

	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			if(cake[i][j] == 'S'){
				r_count++;
				break;
			}
		}
	}

	for(int j=0; j<c; j++){
		for(int i=0; i<r; i++){
			if(cake[i][j] == 'S'){
				c_count++;
				break;
			}
		}
	}
	cout << (r-r_count)*c + (c - c_count)*r - (r-r_count)*(c-c_count) << endl; 

	return 0;
}

