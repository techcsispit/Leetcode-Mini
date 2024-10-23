#include<stdio.h>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
bool main() {
    vector<int> nums;
    int n;
    sort(nums.begin(), nums.end());
    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] == nums[i - 1]){
            return 1;
        }
    }
    return false;
}