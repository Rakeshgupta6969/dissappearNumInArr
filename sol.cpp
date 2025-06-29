class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
   
     int n  =  nums.size();
   vector<bool> check((n+1),false);
    vector<int> ans;

   for(auto & num:nums){
     check[num] =  true;
   }



   for(int i = 1; i<=n; i++){


    if(!check[i]){
     ans.push_back(i);
    }
   }




   return ans;

    }
};