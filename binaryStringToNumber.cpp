#include<bits/stdc++.h>
using namespace std;

int binaryToDecimal(string s){
	string num=s;
	int dec_val=0;
	int base=1;
	int len=num.length();

	for(int i=len-1;i>=0;i--){
		if(num[i] == 1){
			dec_val+=base;
			base*=2;

		}
	}

	return dec_val;
} 