/*************************************************************************
* 文件: remove_element.cpp
* 作者: fantasy
* 邮箱: fantasy@gmail.com 
* 创建时间: 2016年03月06日 星期日 19时51分57秒
*************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    int removeElement(vector<int>& nums, int val){
        vector<int>::iterator it;
        int result = 0;

        for (it = nums.begin(); it != nums.end(); )
        {

            if (val == *it)
            {
                nums.erase(it);
                continue;
            }
            else
            {
                ++it;
                result++;
            }
        }

        return result;
    }
};

int main()
{
    vector<int> nums;
    Solution so;

    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(67);
    nums.push_back(8);
    nums.push_back(9);
    nums.push_back(10);
    
    cout << so.removeElement(nums, 67) << endl;
}

