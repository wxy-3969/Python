/*
#include <vector>: 引入vector容器, 用于动态数组的定义.
#include <iostream>: 引入iostream库, 用于输入输出.
using namespace std: 声明使用标准命名空间.
*/
#include <vector>                    
#include <iostream>                  
using namespace std;                 


/* 
以下是需要在leetcode中实现的代码:
定义一个Solution类, 其中包含一个成员函数twoSum.
twoSum函数接受一个整数向量nums和一个整数target作为参数, 返回一个整数向量作为结果.
twoSum函数的实现是遍历nums向量, 查找两个元素的和等于target的索引.
如果找到, 则返回这两个索引;否则返回一个空的向量.
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};
/* 
以下是main函数的代码,不需要在leetcode中实现.
main函数创建一个Solution对象, 定义一个整数向量nums和一个整数target.
main函数调用twoSum函数, 查找nums向量中两个元素的和等于target的索引.
如果找到, 则打印这两个索引;否则打印一个空的向量.
main函数输出结果, 并返回0.
*/
int main() {
    Solution s;
    vector<int> nums = {2,7,11,15};
    int target = 13;
    vector<int> res = s.twoSum(nums, target);
    cout << "[" << res[0] << "," << res[1] << "]" << endl;
    return 0;
}