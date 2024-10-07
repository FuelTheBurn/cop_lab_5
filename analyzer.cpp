#include <bits/stdc++.h>
#include "stringdata.h"
using namespace std;

int linear_search(vector<string>& container, string element){
	for(int i=0;i<container.size();i++){
		if(container[i]==element){
			return i;
		}
	}
	return -1;
}
int binary_search(vector<string>& container, string element){
	int power=1;
	int power_counter=1;
	while(power<container.size()){
		power*=2;
		power_counter+=1;
	}
	int ans=0;
	for(int i=power_counter;i>=0;i--){
		if(ans+(1<<i)<container.size() && container[ans+(1<<i)]<=element){
			ans+=(1<<i);
		}
	}
	if(container[ans]==element){
		return ans;
	}
	else{
		return -1;
	}
}

int main()
{
    vector<string> data=getStringData();
    string s="not_here";
    long long st=systemTimeNanoseconds();
    cout<<"linear search, string "<<s<<" found at "<<linear_search(data,s)<<endl;
    long long et=systemTimeNanoseconds();
    cout<<"took "<<et-st<<" nanoseconds"<<endl;
    st=systemTimeNanoseconds();
    cout<<"binary search, string "<<s<<" found at "<<binary_search(data,s)<<endl;
    et=systemTimeNanoseconds();
    cout<<"took "<<et-st<<" nanoseconds"<<endl;

    s="mzzzz";
    st=systemTimeNanoseconds();
    cout<<"linear search, string "<<s<<" found at "<<linear_search(data,s)<<endl;
    et=systemTimeNanoseconds();
    cout<<"took "<<et-st<<" nanoseconds"<<endl;
    st=systemTimeNanoseconds();
    cout<<"binary search, string "<<s<<" found at "<<binary_search(data,s)<<endl;
    et=systemTimeNanoseconds();
    cout<<"took "<<et-st<<" nanoseconds"<<endl;

    s="aaaaa";
    st=systemTimeNanoseconds();
    cout<<"linear search, string "<<s<<" found at "<<linear_search(data,s)<<endl;
    et=systemTimeNanoseconds();
    cout<<"took "<<et-st<<" nanoseconds"<<endl;
    st=systemTimeNanoseconds();
    cout<<"binary search, string "<<s<<" found at "<<binary_search(data,s)<<endl;
    et=systemTimeNanoseconds();
    cout<<"took "<<et-st<<" nanoseconds"<<endl;

    return 0;
}