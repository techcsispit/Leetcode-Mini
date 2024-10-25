#include<stdio.h>
#include<vector>
#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
int main() {
    vector<int> nums;
    sort(nums.begin(), nums.end());
    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] + 1 != nums[i + 1]) {
            return nums[i] + 1;
        }
    }
}