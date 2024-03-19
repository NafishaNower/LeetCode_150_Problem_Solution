class Solution {
public:
    bool isPalindrome(string s) {
     vector<char> alphanumeric_string;

     for(int i=0;i<s.size();i++){
        if(isalnum(s[i])){
            alphanumeric_string.push_back(toupper(s[i]));
        }
     }

     vector <char> reverse_string = alphanumeric_string;
     reverse(reverse_string.begin(),reverse_string.end());

     if(reverse_string==alphanumeric_string) return true;
     else return false;

    }
};
