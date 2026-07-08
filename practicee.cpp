#include<iostream>
#include <vector>
using namespace std;
vector<int> pairSum(vector<int> nums, int target) {
    vector<int>ans;
    int n=nums.size();
    int i=0, j=n-1;
    while(i<j){
        if(nums[i]+nums[j]==target){
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
        else if(nums[i]+nums[j]<target){
            i++;
        }
        else{
            j--;
        }
    }
    return ans;
}
int main(){
    vector<int> nums={1,2,3,4,5,6};
    int target=9;
    vector<int>ans = pairSum(nums,target);
    if(ans.size()==0){
        cout<<"No pair found"<<endl;
    }
    else{
        cout<<"Pair found at indices: "<<ans[0]<<" and "<<ans[1]<<endl;
    }
    return 0;
}