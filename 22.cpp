#include <bits/stdc++.h>
//#include<iostream>
using namespace std;
class Solution {
   public:
   int lastStoneWeightII(vector<int>& stones) {
      int n = stones.size();
      int total = 0;
      for(int i = 0; i < n; i++){
         total += stones[i];
      }
      int req = total / 2;
      vector <bool> dp(req + 1, false);
      dp[0] = true;
      int reach = 0;
      for(int i = 0; i < n; i++){
         for(int j = req; j - stones[i] >= 0; j--){
            dp[j] = dp[j] || dp[j - stones[i]];
            if(dp[j]) reach = max(reach, j);
         }
      }
      return total - (2 * reach);
   }
};
main(){
   vector<int> v = {3,9,4,5,8,0};
   Solution ob;
   cout << (ob.lastStoneWeightII(v));
}