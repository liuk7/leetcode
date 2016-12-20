class Solution {
public:
  char findTheDifference(string s, string t) {
    char res;

    for (decltype(s.size()) i = 0; i < s.size(); i++) {
      res ^= s[i];
    }

    for (decltype(t.size()) i = 0; i < t.size(); i++) {
      res ^= t[i];
    }

    return res;
  }
};
