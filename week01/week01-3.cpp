//week01-3.cpp 學習計畫 Basic3
///find-the-index-of-the-first-occurrence-in-a-string
//大海撈針 find needle in a hay bale
class Solution {
public:
    int strStr(string haystack, string needle) {
        int N1 =haystack.length(), N2 = needle.length();//函式呼叫
        for(int i=0; i<=N1-N2; i++){//迴圈
            if(haystack.substr(i,N2) == needle) return i;//find answer
            //如果大字串的.substr(開始,長度) 等於小字串即正確
        }
        return -1;//cant find
    }
};
