class Solution {
public:
  string reverseString(string s) {
    string List;
    for (int i = 0; i < s.size(); i++) {
      List += s[s.size() - i - 1];
    }

    return List;
  }
};
