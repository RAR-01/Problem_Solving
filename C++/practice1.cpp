#include <bits/stdc++.h>
using namespace std;

int main () {
    string s;
    getline(cin, s);

    vector<int> arr;

    s = s.substr(1, s.size() - 2);

    stringstream ss(s);
    string num;

    while(getline(ss, num, ',')){
        arr.push_back(stoi(num));
    }

    int breaks = 0;
    int n = arr.size();
    
    for (int i = 0; i < n; i++){
        if(arr[i] > arr[(i + 1) % n]){
            breaks++;
        }
    }

    if (breaks <= 1)
        cout << "true";
    else
        cout << "false";

    return 0;
}