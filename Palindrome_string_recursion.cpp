#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int start,int end, string str){

	if(start>=end){
		return true;
	}

	if(str[start]!=str[end]){
		return false;
	}

	return isPalindrome(start+1,end-1,str);
}


int main(){

	string str;
	cin>>str;

	int start = str[0];
	int end = str.size()-1;

	cout<<isPalindrome(start,end,str);

	return 0;
}
