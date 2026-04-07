#include <bits/stdc++.h>
using namespace std;
int longestSubarray(vector<int>& nums, int k) {
    unordered_map<int, int> mp;
    int sum = 0, maxLen = 0;
 for (int i = 0; i < nums.size(); i++) {
sum += nums[i];
if (sum == k) maxLen = i + 1;
if (mp.find(sum - k) != mp.end()) {
maxLen = max(maxLen, i - mp[sum - k]);
}
if (mp.find(sum) == mp.end()) {
  mp[sum] = i;
        }
    }
    return maxLen;
}
int main() {
int n, k;
cin >> n;
vector<int> nums(n);
for (int i = 0; i < n; i++) cin >> nums[i];
cin >> k;
cout << longestSubarray(nums, k);
}