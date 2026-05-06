#include<bits/stdc++.h>
using namespace std;

int main () {
    string s;
    getline(cin, s);

    string num = "";
    vector<int>arr;

    for (char c: s){
        if(isdigit(c) || c == '-'){
            num += c;
        }
        else if(!num.empty()){
            arr.push_back(stoi(num));
            num="";
        }
    }
    if(!num.empty()){
        arr.push_back(stoi(num));
    }

    int k = 1;

    for (int i = 1; i < arr.size(); i++){
        if(arr[i] != arr[k-1]){
            arr[k] = arr[i];
            k++;
        }
    }
    cout << k;
    return 0;
}