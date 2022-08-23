#include <iostream>

using namespace std;

bool isPalindrome(string);
bool isPalindromeInteger(int);
bool isPalindromeInBetween(string, int, int);

int main() {
  int num;
  cin >> num;
  cout << isPalindromeInteger(num) << endl;
  return 0;
}

bool isPalindrome(string s) {
  int start,end;
  if (s.length()){
    start = 0;
    end = s.length() - 1;
    while (start <= end) {
      if (s[start] != s[end]) return false;
      start++;
      end--;
    }
    return true;
  }
  return false;
}
bool isPalindromeInteger(int num) {
  string s = to_string(num);
  int start,end;
  if (s.length()){
    start = 0;
    end = s.length() - 1;
    while (start <= end) {
      if (s[start] != s[end]) return false;
      start++;
      end--;
    }
    return true;
  }
  return false;
}
bool isPalindromeInBetween(string s, int start, int end) {
  while (start <= end) {
    if (s[start] != s[end]) return false;
    start++;
    end--;
  }
  return true;
}