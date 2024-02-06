//just wow !
#include<bits/stdc++.h>
using namespace std;
int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin>>n;
	vector<int>arr(n);
	for(int i=0;i<n;i++)cin>>arr[i];


		int binaryArray[32];
	for(int i=0;i<n;i++){
		int number = arr[i];
		int j = 0;
		while(number>0){
			binaryArray[j] +=(number&1);
			j++;
			number=number>>1;
		}

	}
	int ans = 0;
	int position = 1;
	for(int i=0;i<31;i++){
		binaryArray[i] = binaryArray[i]%3;
		ans+=binaryArray[i]*position;
		position = position<<1;

	}
	cout<<ans<<endl;
}
