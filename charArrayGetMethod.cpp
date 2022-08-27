#include<iostream>
using namespace std;

int main(){

	char sentence[1000];

	char temp = cin.get();

	int length = 1;
	while(temp !='\n'){  //will not stop till break character is there
		 length++;
		 cout<<temp;
		 temp = cin.get();
	}

	cout<<"Length "<<length<<endl;

	return 0;
}