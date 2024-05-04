#include <string>
using namespace std; 

class Solution {
public:
    string mergeAlternately(string word1, string word2) {

        int s1 = word1.size();
        int s2 = word2.size();
        string mergedString = "";

        for(int i = 0; i < max(s1,s2) ; i++){
            if(i < s1) mergedString += word1[i];
            if(i < s2) mergedString += word2[i];
        }

        return mergedString;
    }
};

// Time complexity: O(n) where n is the length of the longer string
// Space Complexity: O(1) as we are using constant space