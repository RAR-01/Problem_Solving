#include<bits/stdc++.h>
using namespace std;

int main() {

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
    
    int mn, mx;
    int n = arr.size();

    int i;

    if(n % 2 == 0){

        if(arr[0] < arr[1]){
            mn = arr[0];
            mx = arr[1];
        }
        else{
            mn = arr[1];
            mx = arr[0];
        }

        i = 2;
    }

    else{
        mn = mx = arr[0];
        i = 1;
    }

    while(i < n - 1){

        int small, large;

        if(arr[i] < arr[i+1]){
            small = arr[i];
            large = arr[i+1];
        }
        else{
            small = arr[i+1];
            large = arr[i];
        }

        if(small < mn){
            mn = small;
        }

        if(large > mx){
            mx = large;
        }

        i += 2;
    }

    cout << "Minimum = " << mn << endl;
    cout << "Maximum = " << mx << endl;

    return 0;
}