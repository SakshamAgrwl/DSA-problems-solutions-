//refer to: https://www.udemy.com/course/cpp-data-structures-algorithms-prateek-narang/learn/quiz/5245690#announcements

#include<bits/stdc++.h>
using namespace std;

int compress(vector<char>& chars){
	string ans;
	int count=1;

	for(int i=0;i<chars.size();i++){
		while(i<chars.size()-1 && chars[i] == chars[i+1]){
			count+=1;
			i++;
		}
		ans += chars[i];

		//if length of group is 1
		if(count==1){
			continue;
		}

		ans += to_string(count);
		count=1;
	}

	chars.clear();
	for(int i=0;i<ans.length();i++){
		chars.push_back(ans[i]);
	}

	return chars.size();
}