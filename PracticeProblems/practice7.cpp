#include<bits/stdc++.h>
using namespace std;

// int main () {
//     string s;
//     getline(cin, s);

//     string num = "";
//     vector <int> arr;

//     for(char c : s){
//         if(isdigit(c) || c == '-'){
//             num += c;
//         }
//         else if(!num.empty()){
//             arr.push_back(stoi(num));
//             num = "";
//         }
//     }
//     if(!num.empty()){
//         arr.push_back(stoi(num));
//     }

//     for(int i = 0; i < arr.size(); i++){
//         bool found = false;
//         for(int j = 0; j < arr.size(); j++){
//             if(arr[j] == i){
//                 found = true;
//                 break;
//             }
//         }
//         if(!found){
//             cout << i;
//             return 0;
//         }
//     }
//     return 0;
// }

int main (){
    string s;
    getline(cin, s);

    string num = "";
    vector <int> arr;

    for (char c : s){
        if(isdigit(c) || c == '-'){
            num += c;
        }
        else if (!num.empty()){
            arr.push_back(stoi(num));
            num = "";
        }
    }
    if(!num.empty()){
        arr.push_back(stoi(num));
    }

    int n = arr.size();
    int expectSum = (n * (n + 1)) / 2;

    int actualSum = 0;

    for(int i = 0; i < arr.size(); i++){
        actualSum += i;
    }

    cout << expectSum - actualSum;
    return 0;
}