// twosum_target.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> cache;
        vector<int> answer;

        for (size_t i = 0; i < nums.size(); ++i)
        {
            int needed_num = target - nums[i];

            if (cache.find(needed_num) != cache.end())
            {
                // We found it
                answer.push_back(cache[needed_num]);
                answer.push_back(i);
                return answer;
            }
            else
            {
                // Didn't find it
                cache.insert(make_pair(nums[i], i));
            }
        }
        return answer;
    }
};
int main()
{
    Solution sol;
    int target = 9;
    int target2 = 6;
    int target3 = 6;
    vector<int> vect, vect2, vect3;
    vector<int> answer;
    vect.push_back(2);
    vect.push_back(7);
    vect.push_back(11);
    vect.push_back(15);
    answer = sol.twoSum(vect, target);
    for (int i : answer)
        cout << i << ' ';
    cout << "\n";

    vect2.push_back(3);
    vect2.push_back(2);
    vect2.push_back(4);
  
    answer = sol.twoSum(vect2, target2);
    for (int i : answer)
        cout << i << ' ';
    cout << "\n";

    vect3.push_back(3);
    vect3.push_back(3);

    answer = sol.twoSum(vect3, target3);
    for (int i : answer)
        cout << i << ' ';
    cout << "\n";

   }
