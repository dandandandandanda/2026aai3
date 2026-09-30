// week04-4 66. Plus One
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int N = digits.size();//幾進位
        int carry = 1;//carry進位英文 右邊一開始+1
        for(int i=N-1; i>=0; i--){
            int now = digits[i] + carry;
            carry = now / 10;//進位
            digits[i] = now % 10;//個位
        }
        if(carry>0)digits.insert(digits.begin(), carry);
        return digits;
    }
};
