/*************************************************************************
* 文件: power_of_three.cpp
* 作者: fantasy
* 邮箱: fantasy@gmail.com 
* 创建时间: 2016年05月29日 星期日 14时40分34秒
*************************************************************************/
#include <iostream>
#include <vector>
#include <math.h>
#include <limits.h>
using namespace std;

class Solution{
public:
    bool isPowerOfThree (int n){
        if (n <= 0) return false;
        int max_power3 = log10(INT_MAX)/log10(3);
        int max_power3_val = pow(3, max_power3);
        
        return max_power3_val % n == 0;
    }
};

int main()
{
    int n = 243;
    Solution s;

    for (int i = 0; i < 100000; i++)
    {
        n = i;
        if (s.isPowerOfThree(n))
        {
            cout << n << ": true" << endl;
        }
    }

    return 0;
}


