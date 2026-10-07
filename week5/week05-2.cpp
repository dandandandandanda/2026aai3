///week05-2 Leetcode 709. To Lower Case
class Solution {
public:
    string toLowerCase(string s) {
        ///s[0] = 'h';
        for (int i=0; i<s.length(); i++){
            ///以前 if (s[i]>='A' && s[i]<='Z') s[i] = s[i] - 'A' + 'a';
            ///以前 if ( isupper[i]) s[i] = s[i] - 'A' + 'a';
            s[i] = tolower(s[i]);
        }
        return s;
    }
};
