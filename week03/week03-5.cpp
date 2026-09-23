///week03-5 vector <int> a
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a;///宣告 "伸縮自如" 陣列
    a.push_back(99); ///put in 99
    a.push_back(88); ///
    a.push_back(77); ///
    for (int i=0; i < a.size(); i++) cout << a[i] << " ";
    cout << "\n";///陣列印完後 再印跳行

    a.push_back(88); ///
    a.push_back(77); ///
    for (int i=0; i < a.size(); i++) cout << a[i] << " ";
    cout << "\n";///陣列印完後 再印跳行


}
