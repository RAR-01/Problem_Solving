#include<bits/stdc++.h>
using namespace std;

int main() {

    int r, unit;
    cin >> r >> unit;
    cin.ignore();

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
                num = "";
            }
        }
    }

    if(!num.empty()){
        arr.push_back(stoi(num));
    }

    if(arr.empty()){
        cout << -1;
        return 0;
    }

    int requiredFood = r * unit;
    int sum = 0;

    for(int i = 0; i < arr.size(); i++){

        sum += arr[i];

        if(sum >= requiredFood){
            cout << i + 1;
            return 0;
        }
    }

    cout << 0;

    return 0;
}