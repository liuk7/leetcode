#include <iostream>
#include <vector>

using namespace std;

/*
 * 本题的主要解法是先找出计算最小移动的数学规律：
 * 每一个数减去最小的数所得的值的和即为答案。
 * */
class Solution {
public:
  int minMoves(vector<int> &nums) {
    int res = 0;
    int min = nums[0];
    for (decltype(nums.size()) i = 1; i < nums.size(); i++) {
      min = min < nums[i] ? min : nums[i];
    }

    for (auto a : nums) {
      res += a - min;
    }

    return res;
  }
};

int main() {

  Solution s;

  vector<int> nums = {1, 2, 3};
  auto &a = nums;
  cout << s.minMoves(a) << endl;

  return 0;
}
