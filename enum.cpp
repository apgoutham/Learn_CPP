// Source: https://www.programiz.com/cpp-programming/enumeration 
#include<iostream>
using namespace std;

enum seasons {
		summer=64, winter, monsoon=75, spring
};

int main(){
		seasons s = summer;
		cout << s << endl;
		s = winter;
		cout << s << endl;
		s = monsoon;
		cout << s << endl;
		s = spring;
		cout << s << endl;
		return 0;
}

