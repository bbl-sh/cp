 #include<bits/stdc++.h>
using namespace std;

bool canPartition(vector<int>& nums) {
   return false;
}

bool subset(vector<int>& nums, int n){
   int s = nums.size();
   int arr[s+1][n+1];
    for(int i = 0; i <= n; i++) 
        arr[0][i] = false;
    for(int j = 0; j <= s; j++)
        arr[j][0] = true;

    for(int i = 0; i <= s; i++){
        for(int j = 0; j <= n; j++){
          if(nums[i] <= n)
            arr[i][j] = arr[i][j - nums[j-1]] || arr[i-1][j];
          else
            arr[i][j] = arr[i-1][j];
     }
   }
   return arr[s][n];
 }

int main(){
  #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
     // freopen("output.txt","w",stdout);
  #endif

  vector<int> nums{1,5,11,5};
  //canPartition(nums);
  cout << subset(nums, 7);
  return 0;
}
