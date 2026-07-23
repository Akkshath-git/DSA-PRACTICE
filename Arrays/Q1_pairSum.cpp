#include<iostream>
#include<vector>
using namespace std;
vector<int> pairSum(vector<int> &nums , int target) {
    vector<int> ans;
    int n = nums.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]+nums[j]==target){
                ans.push_back(nums[i]);
                ans.push_back(nums[j]);
                return ans;
            }
        }
    }
    return ans;
}

vector<int> pairsumOptimized(vector<int> &nums , int target) {
    vector<int> ans1;
    int n = nums.size();
    int i=0 , j=n-1;
    while(i<j){
        int pairSum = nums[i]+nums[j];
        if(pairSum>target){
            j--;
        }
        else if(pairSum<target){
            i++;
        }
        else{
            ans1.push_back(nums[i]);
            ans1.push_back(nums[j]);
            return ans1;}
        }
        return ans1;
        }
    
    

int main(){
    vector<int> nums = {1,2,3,4,5};
    int target = 6;
    vector<int> ans = pairSum(nums, target);
    cout<<"The pair sum is via brute force method: "<<ans[0]<<" and "<<ans[1]<<endl;
    cout<<"The pair sum is via optimized method: "<<pairsumOptimized(nums, target)[0]<<" and "<<pairsumOptimized(nums, target)[1]<<endl;
    return 0;
}
