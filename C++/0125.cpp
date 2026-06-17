#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAlphaNum(char ch) {
        if ((ch >= '0' && ch <= '9') ||
            (tolower(ch) >= 'a' && tolower(ch) <= 'z')) {
            return true;
        }
        return false;
    }
    bool isPalindrome(string s) {
        int st = 0, end = s.size()-1;
        while (st < end) {
            if (!isAlphaNum(s[st])) {
                st++;
                continue;
            } else if (!isAlphaNum(s[end])) {
                end--;
                continue;
            } else if (tolower(s[st++]) != tolower(s[end--])) {
                return false;
            }
        }
        return true;
    }
};
// better approach 
class Solution {
public:

    bool isAlphaNum ( char ch ) {
        if ( ch >= '0' && ch <= '9' || tolower(ch) >= 'a' && tolower(ch) <= 'z' ) {
            return true;
        }
        return false;
    }

    bool isPalindrome(string s) {
        int ptr1 = 0;
        int ptr2 = s.length()-1;
        while ( ptr2 > ptr1 ) {
            if( !isAlphaNum(s[ptr1]) ) {
                ptr1++;
                continue;
            }
            if( !isAlphaNum(s[ptr2]) ) {
                ptr2--;
                continue;
            }
            if ( tolower(s[ptr1]) != tolower(s[ptr2]) ) {
                return false;
            }
            ptr1++;
            ptr2--;
        }
        return true;
    }
};