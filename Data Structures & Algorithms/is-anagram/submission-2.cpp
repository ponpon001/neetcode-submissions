class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()){
            return false;
        }
        std::unordered_map<char, int> ss, tt;
        for(int i=0; i<s.length(); i++){
            ss[s[i]]++;
            tt[t[i]]++;
        }
        if (ss == tt){
            return true;
        }
        return false;

    }
};
