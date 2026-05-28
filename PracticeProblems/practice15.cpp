#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin >> n;
    cin.ignore();

    string s;
    getline(cin,s);

    string num = "";
    vector<int> arr;

    for(char c: s){
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

    int p;
    cin >> p;

    for(int i = 1; i <= n; i++){
        int count = 0;

        for(int j = 0; j < arr.size(); j++){
            if(arr[j] == i){
                count++;
            }
        }
        arr[i] = count;
    }
    for(int x : arr){
        cout << x;
    }
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//     int n;
//     cin >> n;

//     vector<int> arr(n);

//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }

//     int p;
//     cin >> p;

//     unordered_map<int,int> mp;

//     // Count frequencies
//     for(int x : arr){

//         if(x >= 1 && x <= n){
//             mp[x]++;
//         }
//     }

//     // Replace array with frequencies
//     for(int i = 0; i < n; i++){
//         arr[i] = mp[i + 1];
//     }

//     // Print answer
//     for(int x : arr){
//         cout << x << " ";
//     }

//     return 0;
// }