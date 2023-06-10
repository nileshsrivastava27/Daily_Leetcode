#include<iostream>
using namespace std;

class Solution {
public:
    int maxValue(int n, int index, int maxSum) {
        int res = 1, left = index, right = index;
        maxSum -= n;
        while (maxSum >= right - left + 1) {
            maxSum -= right - left + 1;
            res++;
            if (left > 0) {
                --left;
            }
            if (right < n - 1) {
                ++right;
            }
            if (right - left + 1 == n) {
                break;
            } 
        }
        res += maxSum / n;
        return res;
    }
};