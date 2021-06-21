// Given an array nums of distinct integers, print all the possible permutations.
// Idea:
// You are at index idx, try out all the possible swap, Ensuring that you don’t produce
// duplicates.
#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>&nums, vector<vector<int>>&ans, int idx){
    if(idx == nums.size()-1){
        ans.push_back(nums);
        return;
    }
    for (int i = idx; i < nums.size(); i++)
    {
        swap(nums[i], nums[idx]);
        solve(nums, ans, idx+1);
        swap(nums[i], nums[idx]); // backtracking
    }
    return;
}

vector<vector<int>> permute(vector<int>nums){
    vector<vector<int>> ans;
    solve(nums,ans,0);
    return ans;
}


int main(){
    vector<vector<int>> res = permute({1,2,3});
    for(auto i : res){
        for(auto j : i){
            cout<<j<<" ";
        }cout<<endl;
    }
    return 0;
}