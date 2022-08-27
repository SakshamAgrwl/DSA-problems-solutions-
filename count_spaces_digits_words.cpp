#include<bits/stdc++.h>
using namespace std;

int main(){

	char ch;

	ch=cin.get();

	int spaces=0;
	int alphabets=0;
	int digit=0;

	while(ch!='\n'){

		//for digits
		if(ch>='0' and ch<='9'){
			digit++;
		}
		else if((ch>='a' and ch<='z') or (ch>='A' and ch<='Z')){
			alphabets++;
		}
		else if(ch==' ' or ch == '\t'){
			spaces++;
		}

		ch=cin.get();
	}

	cout<<"Alphabets are "<<alphabets<<endl;
	cout<<"Digits are "<<digit<<endl;
	cout<<"Spaces are "<<spaces<<endl;

	return 0;
}
