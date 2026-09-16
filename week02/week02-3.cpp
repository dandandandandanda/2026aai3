//week02-3
//LeetCode 1768. Merge Strings Alternately
//¦r¦êªø«× .length()
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int N1 = word1.length(), N2 = word2.length();
        string ans;
        for (int i=0; i < max(N1, N2); i++) { //longer one as main, check each and insert
            if(i < N1) ans += word1[i];//within range, insert word[1], word[2]
            if(i < N2) ans += word2[i];
        }
        return ans; //ans
    }
};
