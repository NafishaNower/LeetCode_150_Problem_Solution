#include<bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
   bool containsDuplicate(vector<int>& nums) {
        set<int> numbers;
        for (int i=0;i<nums.size();i++){
            numbers.insert(nums[i]);
        }
         if(numbers.size()== nums.size()){
            return false;
         }
         return true;
   }
};


int main(){
    Solution solution;
 string input;
 cout<<"nums = ";
 getline(cin, input);

 stringstream input_array(input);
 string temp;
 //set<ll> numbers;
 vector<int> actual_array;
 while(getline(input_array,temp,'[')&& getline(input_array,temp,']')){
    stringstream check_coma (temp);
    while(getline(check_coma,temp,',')){
        //numbers.insert(stoi(temp));
        actual_array.push_back(stoi(temp));
    }
 }

 cout<< boolalpha << solution.containsDuplicate(actual_array)<<endl;

    return 0;
}
