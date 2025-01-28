class Solution {
public:
    string reverseVowels(string s) {
        int n = s.size();int start = 0,end = n-1;
        string vowels = "aeiouAEIOU";
        while(start<end){
            while(start<end && vowels.find(s[start])==string::npos) start++;
            while(start<end && vowels.find(s[end])==string::npos) end--;
            swap(s[start],s[end]);start++;end--;
        }
        return s;
    }
};