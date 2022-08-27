#include<bits/stdc++.h>

void permute(int pos, string str, vector<string> &ans){

	if(pos>=str.size()){
		ans.push_back(str);
	}

	//do small task
	for(int i=pos;i<str.size();i++){
		swap(str[pos],str[i]);
		permute(pos+1,str,ans);
		swap(str[pos],str[i]);
	}
	
}

vector<string> generatePermutation(string &str){

	vector<string> ans;
	permute(0,str,ans);
	sort(ans.begin(),ans.end());
	return ans;
	
}

//langford pairing
//create sequence
//print series