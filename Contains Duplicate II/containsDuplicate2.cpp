#include<stdio.h>
#include<vector>
#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
bool main() {
    vector<int> nums;
    int k;
    for(int i = 0; i < nums.size(); i++) {
        for(int j = i + 1; j < nums.size(); j++) {
            if(nums[i] == nums[j] && (abs(i - j) <= k)){
                return true;
            }
        }
    }
    return false;
}