#include<bits/stdc++.h>
using namespace std;

int main(){

	char route[1000];
	cin.getline(route,1000);

	int x,y=0;

	for(int i=0;route[i]!='\0';i++){

		switch(route[i]){
			case 'N': y++;
					break;

			case 'E': x++;
					break;

			case 'S': y--;
					break;

			case 'W': x--;
					break;
		}

	}

	cout<<"x and y are "<<x<<","<<y;

	if(x>=0 and y>=0){

		while(y--){
			cout<<"N";
		}
		while(x--){
			cout<<"E";
		}
	}

	else if(x>=0 and y<=0){

		while(y>0){
			cout<<"S";
		}

		while(x--){
			cout<<"E";
		}
	}

	else if (y<=0 and x<=0){

		while(y>0){
			cout<<"S";
		}
		while(x>0){
			cout<<"W";
		}
	}

	else {

		while(x>0){
			cout<<"W";
		}

		while(y--){
			cout<<"N";
		}
	}

	return 0;

}