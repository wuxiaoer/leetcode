/*************************************************************************
* 文件: two_num.cpp
* 作者: fantasy
* 邮箱: fantasy@gmail.com 
* 创建时间: 2016年03月04日 星期五 22时21分23秒
*************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public:
        vector<int> twoSum(vector<int>& nums, int target){
            vector<int> result;
            for (int i = 0; i < nums.size(); i++)
            {
                for (int j = i + 1; j < nums.size(); j++)
                {
                    if(nums[i] + nums[j] == target)
                    {
                        result.push_back(i);
                        result.push_back(j);
                        return result;
                    }
                }
            }
            return result;
        }
};

int main()
{
    vector<int> nums;
    vector<int> result;
    int target = 9;
    Solution so;

    nums.push_back(2);
    nums.push_back(7);
    nums.push_back(11);
    nums.push_back(15);

    result = so.twoSum(nums, target);
    if(!result.empty())
    {
    	cout << "result[0] = " << result[0] << endl;
    	cout << "result[1] = " << result[1] << endl;
    }

    return 0;



}

