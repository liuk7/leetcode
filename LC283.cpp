#include <iostream>
#include <vector>

using namespace std;

/*
 * 使用两个指针i、j，i用来指向连续的非零数，j用来找非零数
 * 当i指向为零时，i不动，移动j，直到j指向非零，交换i与j
 * */
class Solution {
public:
  void moveZeroes(vector<int> &nums) {
    decltype(nums.size()) i = 0;
    decltype(i) j = 0;
    int temp;

    while (i < nums.size() && j < nums.size()) {
      while (nums[i] != 0) {
        i++;
        j++;
        if (i >= nums.size() || j >= nums.size()) {
          break;
        }
      }
      while (nums[j] == 0) {
        j++;
        if (i >= nums.size() || j >= nums.size()) {
          break;
        }
      }
      if (i < nums.size() && j < nums.size()) {
        temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
      }
    }
  }
};

int main() {

  Solution s;

  vector<int> nums = {0, 1, 0, 3, 12};
  auto &a = nums;
  s.moveZeroes(a);

  for (auto e : nums) {
    cout << e << " ";
  }

  return 0;
}
