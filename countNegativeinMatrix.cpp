#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        
        int negative = 0;

        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j] < 0)
                    negative++;
            }
        }

        return negative;
    }
};