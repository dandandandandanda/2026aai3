//week02-4
//leetCode 389. Find the Difference
//shuffle and find the extra one
// return the extra to t
class Solution {
public:
    char findTheDifference(string s, string t) {
        int H[26] = {}; //陣列統計左邊的字母 {}代表都是0
        for(char c : s){ //for迴圈 一個一個取出字母
            H[c-'a'] += 1;// 統計字母出現次數
        }
        for(char c : t){ //for迴圈 一個一個取出字母
            H[c-'a'] -= 1;// 減掉1個字母
            if(H[c-'a'] < 0 ) return c;//選擇到的字母不夠了 找到答案
        }
        return 0;
    }
};
