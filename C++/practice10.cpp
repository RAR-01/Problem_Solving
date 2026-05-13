#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    cin.ignore();
    
    string s;
    getline(cin, s);

    string num = "";
    vector<int> arr;

    for(char c : s){
        if(isdigit(c) || c == '-'){
            num += c;
        }
        else {
            if (!num.empty()){
                arr.push_back(stoi(num));
                num = "";
            }
        }
    }
    if(!num.empty()){
        arr.push_back(stoi(num));
    }

    int maxi = 0;

    for (int i = 0; i < arr.size(); i++){
        if(arr[i] == 1){
            int count = 1;
            for(int j = i + 1; j < arr.size(); j++){
                if(arr[j] == 1){
                    count ++;
                }
                else{
                    break;
                }
            }
            if (count > maxi){
                maxi = count;
            }
        }

    }
    cout << maxi;
    return 0;
}

    // int count = 0;
    // int maxi = 0;

    // for(int i = 0; i < arr.size(); i++){

    //     if(arr[i] == 1){

    //         count++;

    //         if(count > maxi){
    //             maxi = count;
    //         }
    //     }
    //     else{
    //         count = 0;
    //     }
    // }

    // cout << maxi;

    // return 0;