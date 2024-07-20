#include <iostream>
#include <vector>
using namespace std;

vector<long long> findPrefixScore(vector<int> &nums)
{
    int n = nums.size();
    vector<long long> con(n);
    vector<long long> ans(n);
    int max_i=INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        max_i=max(max_i,nums[i]);
        con[i]=nums[i]+max_i;
    }
    ans[0]=con[0];
    for(int i=1;i<n;i++){
        ans[i]=ans[i-1]+con[i];
    }
    
    return ans;
}

int main()
{
    vector<int> nums{2, 3, 7, 5, 10};
    vector<long long> result = findPrefixScore(nums);
    
    for (long long val : result)
    {
        cout << val << " ";
    }
    
    return 0;
}
