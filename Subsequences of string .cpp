#include<bits/stdc++.h>
using namespace std;
int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	 char s[200];
	 cin>>s;
	 int n = strlen(s);
	 int noOfsubsequence = (1<<n) - 1;
	 cout<<"{ }\n";
	 for(int i=1;i<=noOfsubsequence;i++){
	 	int temp = i;
	 	int j = 0;
	 	while(temp>0){
	 		if(temp&1)
	 			cout<<s[j];
	 			j++;
	 			temp = temp>>1;
	 		
	 	}
	 	cout<<'\n'<<endl;
	 }
}
