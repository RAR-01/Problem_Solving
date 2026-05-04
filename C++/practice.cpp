#include <bits/stdc++.h>
using namespace std;

// int main (){
//     string n, m;

//     getline(cin, n);
//     getline(cin, m);

//     vector<int>a, b;

//     stringstream ss1(n);
//     string num;

//     while (getline(ss1, num, ',')) {
//         a.push_back(stoi(num));
//     }

//     stringstream ss2(m);
//     string num2;

//     while (getline(ss2, num2, ',')){
//         b.push_back(stoi(num2));
//     }

//     unordered_set<int> result;

//     for(auto x : a){
//         result.insert(x);
//     }

//     for(auto x : b){
//         result.insert(x);
//     }

//     cout << result.size();

//     // for(auto x : result) {
//     //     cout << x << " ";
//     // }
// }

int main () {
    string n, m;

    getline(cin, n);
    getline(cin, m);

    vector<int> a,b;

    stringstream ss1 (n);
    string num;

    while(getline(ss1, num, ',')){
        a.push_back(stoi(num));
    }

    stringstream ss2 (m);
    string nums;

    while(getline(ss2, nums, ',')){
        b.push_back(stoi(nums));
    }

    unordered_set<int> result;

    for (int i = 0; i < a.size(); i++){
        result.insert(a[i]);
    }
    
    for (int i = 0; i < b.size(); i++){
        result.insert(b[i]);
    }

    cout<<result.size();
}