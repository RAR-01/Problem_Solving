#include<bits/stdc++.h>
using namespace std;


vector<int> getArray(string s){
    
    string num = "";
    vector <int> arr;

    for (char c : s){
        if(isdigit(c) || c == '-'){
            num += c;
        }
        else {
            if(!num.empty()){
                arr.push_back(stoi(num));
                num = "";
            }
        }
    }
    if(!num.empty()){
        arr.push_back(stoi(num));
    }
    return arr;
}
int main() {
    int n, m;
    cin >> n >> m;

    cin.ignore();

    string s1, s2;

    getline(cin, s1);
    getline(cin, s2);

    vector<int> a = getArray(s1);
    vector<int> b = getArray(s2);
    
    set<int> a1(a.begin(), a.end());
    set<int> b1(b.begin(), b.end());

    int count = 0;

    for(int x : a1){
        if(b1.count(x)){
            count++;
        }
    }

    cout << count;
    return 0;
}