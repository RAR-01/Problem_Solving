#include<bits/stdc++.h>
using namespace std;

int main(){

    int T;
    cin >> T;

    cin.ignore();

    while(T--){

        string s;
        getline(cin, s);

        string clean = "";

        for(char c : s){

            if(isalnum(c)){
                clean += tolower(c);
            }
        }

        int left = 0;
        int right = clean.length() - 1;

        bool palindrome = true;

        while(left < right){

            if(clean[left] != clean[right]){
                palindrome = false;
                break;
            }

            left++;
            right--;
        }

        if(palindrome){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }

    return 0;
}