#include<bits/stdc++.h>
using namespace std;

int main (){
    string s;
    getline(cin, s);

    string num = "";
    vector<int> arr;

    for(char c : s){
        if(isdigit(c) || c == '-'){
            num += c;
        }
        else{
            if(!num.empty()){
                arr.push_back(stoi(num));
                num="";
            }
        }
    }
    if(!num.empty()){
        arr.push_back(stoi(num));
    }

    int k;
    cin >> k;

    int size = arr.size();
    
    if (size == 0) return 0;

    k = k % size;
    
    for(int n = 0; n < k; n++){
        int last = arr[size - 1];
        for (int i = size - 1; i > 0; i--){
            arr[i] = arr[i-1];
        }
        arr[0] = last;
    }

    for (auto x : arr){
        cout << x << " ";
    }
    return 0;
}