#include<bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    bool isAnagram(string s, string t) {
      sort(s.begin(),s.end());
      sort(t.begin(),t.end());
      if (s==t)return true;

      return false;
    }
};


int main() {
    Solution solution;
    string input;
    getline(cin, input);

    stringstream ss(input);
    string temp, s, t;
    while (getline(ss, temp, ',')) {
        stringstream ss_temp(temp);
        string key, value;
        ss_temp >> key >> temp >> value;
        if (key == "s") {
            s = value;
        } else if (key == "t") {
            t = value;
        }
    }

 cout<< boolalpha << solution.isAnagram(s,t)<<endl;

    return 0;
}

