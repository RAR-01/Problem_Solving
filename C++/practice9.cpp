#include<bits/stdc++.h>
using namespace std;

// int main() {
//     string s;
//     getline(cin, s);

//     string num = "";
//     vector<int> arr;


//     for(char c : s){
//         if(isdigit(c) || c == '-'){
//             num += c;
//         }
//         else{
//             if (!num.empty()){
//                 arr.push_back(stoi(num));
//                 num = "";
//             }
//         }
//     }
//     if(!num.empty()){
//         arr.push_back(stoi(num));
//     }
//     int mid = 0;
//     int low = 0;
//     int high = arr.size() - 1;

//     while (mid <= high){

//         if(arr[mid] == 0){
//             swap(arr[mid], arr[low]);
//             low++;
//             mid++;
//         }

//         else if(arr[mid] == 1){
//             mid++;
//         }

//         else{
//             swap(arr[mid], arr[high]);
//             high--;
//         }
//     }

//     for (int i : arr){
//         cout << i << " ";
//     }
//     return 0;
// }

int main() {
    string s;
    getline (cin, s);

    string num = "";
    vector<int> arr;

    for (char c : s){
        if(isdigit(c) || c == '-'){
            num += c;
        }

        else{
            if(!num.empty()){
                arr.push_back(stoi(num));
            }
        }
    }
    int zeros = 0;
    int ones = 0;
    int twos = 0;
    vector<int> arr1;
    for (int i = 0; i < arr.size(); i++){
        if (arr[i] == 0){
            zeros++;
        }

        if (arr[i] == 1){
            ones++;
        }

        if (arr[i] == 2){
            twos++;
        }
    }

    for(int i = 0; i < zeros; i++){
        arr1.push_back(0);
    }

    for(int i = 0; i < ones; i++){
        arr1.push_back(1);
    }

    for(int i = 0; i < twos; i++){
        arr1.push_back(2);
    }

    for(int i : arr1){
        cout << i << " ";
    }

    return 0;
}