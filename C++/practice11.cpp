#include<bits/stdc++.h>
using namespace std;

int main () {
    string s;
    getline (cin, s);

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
    
    vector<int> arr1;

    for(int i = 0; i < arr.size(); i++){
        bool flag = false;
        for(int j = i + 1; j < arr.size(); j++){
            if(arr[i] < arr[j]){
                flag = true;
                break;
            }
        }
        if(!flag){
            arr1.push_back(arr[i]);
        }
    }
    for (int x : arr1){
        cout << x << " ";
    }
    return 0;
}


// int maxi = INT_MIN;
// vector <int> ans
// for(int i = arr.size() - 1; i >= 0; i--;){
//      if(arr[i] >= maxi){
//            ans.push_back(arr[i])
//            maxi = arr[i]}        
// }
//  reverse(ans.begin(), ans.end());
//}