#include<bits/stdc++.h>
using namespace std;

int main () {
    string s;
    getline(cin, s);

    string num = "";
    vector<int> arr;

    for (char c : s){
        if(isdigit(c) || c == '-'){
            num += c;
        }
        else if (!num.empty()){
            arr.push_back(stoi(num));
            num = "";
        }
    }
    if (!num.empty()){
        arr.push_back(stoi(num));
    }

    int k = 0;

    for (int i = 0; i < arr.size(); i++){

        if(arr[i] != 0){
            int temp = arr[i];
            arr[i] = arr[k];
            arr[k] = temp;

            k++;
        }
    }

    cout << "[";
    for (int i = 0; i < arr.size(); i++){
        cout<<arr[i];

        if(i != arr.size() - 1){
            cout<<",";
        }
    }
    cout<<"]";
    return 0;
}