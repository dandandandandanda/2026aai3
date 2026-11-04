///week09-4 SOIT106_ADVANCE_009
#include <iostream>
using namespace std;
void f(int n)///¨ç¦¡©I¥s¨ç¦¡
{
	if (n==0) return;
	cout << n%10;
	f(n/10);
}
int main()
{
	int N;
	cin >> N;
	f(N);
	cout << "\n";
}
