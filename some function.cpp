////some function of bitmanipulation 
#include<bits/stdc++.h>
using namespace std;
int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	 //Simple assignment
	// bitset<2>arr;
	// arr[0] = 1;
	// arr[1] = 0;
	// cout<<arr<<'\n';//01


	//Interger to bitset and vice-versa
	// bitset<4>a_int(8);
	// cout<<a_int<<"\n";//1000
	// int n = (int) a_int.to_ulong();
	// cout<<n<<endl;//8



    //string to bitset
    // string str = "1010101100";
    // bitset<10>brr(str);

    // cout<<brr[0]<<endl;//0
    // string new_str = brr.to_string();
    // cout<<new_str<<endl;//1010101100

    // //count no of onesj
    // cout<<brr.count()<<endl;
    

    //basic operations
    // bitset<4>a(string("0101"));
    // bitset<4>b(string("1010"));

    // cout<<(a&b)<<endl;//0000
    // cout<<(a|b)<<endl;//1111
    // cout<<(a^b)<<endl;//1111
    // cout<<(~a)<<endl;//1010
    // cout<<(a<<1)<<endl;//1010
    // cout<<(b>>1)<<endl;//0101




    // string str1 = "1010110100";
    // istringstream  stream(str1);
    // bitset<2>s1;
    // bitset<6>s2;
    // stream>>s1;
    // cout<<s1<<endl;
    // stream>>s2;
    // cout<<s2<<endl;

    //check if any bit is set 
    // bitset<4>a1(string("1010"));
    // bitset<4>b1(string("0000"));

    // cout<<a1.any()<<endl;//true
    // cout<<b1.any()<<endl;//false;

    //check if none of the bits are set 
    // cout<<a1.none()<<endl;//false
    // cout<<b1.none()<<endl;//true

    //check if all bits are set
    // bitset<4>ball(string("1111"));//true
    // cout<<ball.all()<<endl;//true;
    // bitset<4>balll(string("1010"));//false
    // cout<<balll.all()<<endl;


    //flip all or any particular bit
    // bitset<4>a3(string("1010"));
    // cout<<a3.flip()<<endl;//0101
    // cout<<a3.flip(1)<<endl;/0111




    //reset all or any particular bit:
    // bitset<4>a4(string("1010"));
    // cout<<a4.reset(1)<<endl;//1000
    // cout<<a4.reset()<<endl;//0000


    // //set all or any particlular bit;
    // bitset<4>a5(string("1010"));
    // cout<<a5.set(0)<<endl;//1011
    // cout<<a5.set()<<endl;//1111




return 0;
  
}
