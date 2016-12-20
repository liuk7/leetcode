#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  int findContentChildren(vector<int> &g, vector<int> &s) {
    QuickSort(g, 0, (int)g.size() - 1);
    QuickSort(s, 0, (int)s.size() - 1);

    int count = 0;
    int j = 0;
    for (int i = 0; i < (int)g.size() && j < (int)s.size();) {
      if (g[i] <= s[j]) {
        count++;
        j++;
        i++;
      } else {
        j++;
      }
    }

    return count;
  }

  void QuickSort(vector<int> &nums, int right, int left);
};

void Solution::QuickSort(vector<int> &nums, int left, int right) {

  if (left < right) {
    int flag = nums[left];
    int low = left;
    int high = right;

    while (low < high) {
      while (low < high && flag <= nums[high]) {
        high--;
      }
      if (low < high) {
        nums[low] = nums[high];
        low++;
      }

      while (low < high && flag > nums[low]) {
        low++;
      }
      if (low < high) {
        nums[high] = nums[low];
        high--;
      }
    }
    nums[low] = flag;

    QuickSort(nums, left, low - 1);
    QuickSort(nums, low + 1, right);
  }
}

int main() {
  Solution ss;
  vector<int> s = {1, 2, 3};
  vector<int> g = {1, 1};

  int res = ss.findContentChildren(s, g);
  cout << res << endl;

  return 0;
}
