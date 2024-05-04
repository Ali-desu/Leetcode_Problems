#include <string>

using namespace std;
class Solution {
public:
    bool isSubsequence(string s, string t) {

        if(s.empty()) return true;
        int sPtr = 0, tPtr = 0 , sIndex = 0 , cnt = 0;

        for(char c : t){
            if(c == s[sIndex]){
                cnt ++;
                sIndex++;
            }
            if(sIndex == s.size()) break;
        }

        return cnt == s.size();
    }
};