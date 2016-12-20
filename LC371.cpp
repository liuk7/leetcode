#include <iostream>
using namespace std;

class Solution {
public:
  int getSum(int a, int b) {
    if (b == 0)
      return a;
    int sum = a ^ b;
    int car = (a & b) << 1;
    return getSum(sum, car);
  }
};

int main() {
  Solution ss;
  ss.getSum(4, 5);

  return 0;
}
