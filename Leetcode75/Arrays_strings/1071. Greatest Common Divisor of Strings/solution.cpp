#include <string>
#include <numeric>

using namespace std;
class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        return (str1 + str2 == str2 + str1)? 
        str1.substr(0, gcd(size(str1),size(str2))): "";
    }
};

//time complexity : O(min(m,n)) where m and n are respectively the lengths of the input strings
//space complexity : O(1) as we are using constant space