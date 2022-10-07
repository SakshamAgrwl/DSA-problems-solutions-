#include<bits/stdc++.h>
using namespace std;

int main(){

	map<int,string> Students;

	Students[1] = "Vibhu";
	Students[2] = "Yash";
	Students[3] = "Abhi";
	Students[4] = "Neelam";

	cout<<Students.size()<<endl;

	for(map<int,string>:: iterator it = Students.begin(); it!=Students.end();it++){

		cout<<(*it).first<<":"<<(*it).second<<endl;
	}

	for(map<int,string>:: reverse_iterator i = Students.rbegin(); i!=Students.rend();i++){

		cout<<(*i).first<<":"<<(*i).second<<endl;
	}

	return 0;
}