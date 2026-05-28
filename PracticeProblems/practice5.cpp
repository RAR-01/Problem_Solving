#include<bits/stdc++.h>
using namespace std;

int main () {
  string s;
  getline(cin, s);
  
  vector<int>arr;
  string num = "";

  for (char c : s){
    if (isdigit(c) || c == '-'){
        num += c;
    }
    else {
        if (!num.empty()){
            arr.push_back(stoi(num));
            num = "";
        }
    }
  }
  if (!num.empty()) arr.push_back(stoi(num));

  int min = arr[0], max = arr[0];

  for (int i = 0; i < arr.size(); i++){
    if (arr[i] < min) min = arr[i];
    if (arr[i] > max) max = arr[i];
  };
  cout << min << " " << max;
  return 0;
}