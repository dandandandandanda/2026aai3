///week04-2good.cpp
///wrong in codeblocks but right in -std=c++11 or -std=gnu++11 2011CE
///SOIT106_ADVANCE_012
///setting compiler select no.2
#include <vector>
#include <iostream>
using namespace std;
int main()
{
	vector<int> a;
	int now;
	for (int i=0; i<20; i++){
		cin >> now;
		if (now==0) break;
		a.push_back(now);
	}
	cin >> now;
	int ans = 0;
	for(int num : a){
		if (num==now) ans++;
	}
	cout << ans << "\n";
}
