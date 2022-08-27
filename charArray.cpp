#include<bits/stdc++.h>
using namespace std;

int main(){
	
	//wil return garbage at last as null character is missing


	char a[] = "abcdefgh"; // {'a','b','c','d','e','f','g','\0'}; 

	cout<< a<<endl;

	cout<<strlen(a)<<endl; //returns number of chars in array
	cout<<sizeof(a)<<endl; //return +1 more than strlen as it contains /0 character

	char b[100];
	cin>>b;

	cout<<b<<endl;

	return 0;

}

