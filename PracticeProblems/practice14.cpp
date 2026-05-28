#include<bits/stdc++.h>
using namespace std;

vector<int> getArray(string s){

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

    return arr;
}

int main() {

    string s;
    getline(cin, s);

    vector<int> a = getArray(s);

    int size = a.size();

    int ans = -1;

    for(int i = 0; i < size; i++){

        bool flag1 = false;
        bool flag2 = false;
        
        for(int j = i + 1; j < size; j++){

            if(a[j] < a[i]){
                flag1 = true;
                break;
            }
        }

        for(int k = i - 1; k >= 0; k--){

            if(a[k] > a[i]){
                flag2 = true;
                break;
            }
        }

        if(!flag1 && !flag2){
            ans = a[i];
            break;
        }
    }

    cout << ans;

    return 0;
}