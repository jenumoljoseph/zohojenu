#include <bits/stdc++.h>
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
   vector<int> v = {3,2,4,5,8,1};
   Solution ob;
   cout << (ob.lastStoneWeightII(v));
}

/*

Output
Test case :1
PS C:\Users\USER\Documents\GitHub\zohojenu> cd "c:\Users\USER\Documents\GitHub\zohojenu\" ; if ($?) { g++ 22.cpp -o 22 } ; if ($?) { .\22 }
0
Test case :2
PS C:\Users\USER\Documents\GitHub\zohojenu> cd "c:\Users\USER\Documents\GitHub\zohojenu\" ; if ($?) { g++ 22.cpp -o 22 } ; if ($?) { .\22 }
1

*/
