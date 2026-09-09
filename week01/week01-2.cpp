//week01-2.cpp (SOIT106_ADVANCE_001)
#include <iostream> ///C++的輸入功能
int main()
{
	int N;
	std::cin >> N; ///C++ 輸入資料 標準::輸入 送到右邊 N
	int b = N, ans = 0;
	while(N>0){
		ans = ans*10 + N%10;
		N = N / 10;
	}
	///依序送到左邊
	///std::cout << b << ans << b+ans;//wrong
	///std::cout << b << "+" << ans << "=" << b+ans << std::endl;//right
	///std::cout << b << "+" << ans << "=" << b+ans << "/n";//right
	printf("%d+%d=%d\n", b, ans, ans+b);
}
