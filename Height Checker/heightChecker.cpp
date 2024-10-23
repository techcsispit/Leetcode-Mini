#include<stdio.h>
#include<vector>
#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
int main() {
    vector<int> heights;
    vector<int> expected;
    for(int i = 0; i < heights.size(); i++) {
        heights[i] = expected[i];
    }
    sort(expected.begin(), expected.end());
    for(int j = 0; j < heights.size(); j++) {
        if(heights[j] != expected[j]){
            return j;
            cout << endl;
        }
    }
}