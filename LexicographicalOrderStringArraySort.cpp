#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void lexicographicalOrder(vector<string>&);
void lexicographicalOrderStartAfterSpace(vector<string>&);

int main() {
  int n;
  cin >> n;
  cin >> ws;
  vector<string> arr(n);
  for (int i=0; i < n; i++) {
    getline(cin, arr[i]);
  }
  lexicographicalOrderStartAfterSpace(arr);
  for (int i=0; i < n; i++) {
    cout << arr[i] << " $$ ";
  }
  cout << endl;
  return 0;
}

void lexicographicalOrder(vector<string>& arr) {
  sort(arr.begin(), arr.end(), [](const string str1, const string str2) {
    return lexicographical_compare(str1.begin(), str1.end(), str2.begin(), str2.end());
  });
}
void lexicographicalOrderStartAfterSpace(vector<string>& arr) {
  sort(arr.begin(), arr.end(), [](const string str1, const string str2) {
    return lexicographical_compare(str1.begin() + str1.find(" "), str1.end(), str2.begin() + str2.find(" "), str2.end());
  });
}