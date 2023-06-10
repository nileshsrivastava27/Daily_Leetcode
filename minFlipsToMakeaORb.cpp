#include<iostream>
using namespace std;

class Solution {
public:
    int minFlips(int a, int b, int c) {

        int ans = 0;

        while(a!=0 || b!=0 || c!=0)
        {
            if(a%2!=0 && b%2!=0 && c%2==0)
                ans+=2;
            else if(a%2==0 && b%2==0 && c%2!=0)
                ans+=1;
            else if(a%2!=0 && b%2==0 && c%2==0)
                ans+=1;
            else if(a%2==0 && b%2!=0 && c%2==0)
                ans+=1;
            
            a = a>>1;
            b = b>>1;
            c = c>>1;
            
        }

        return ans;
        
    }
};