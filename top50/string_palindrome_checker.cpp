#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool palindrome(string &str)
    {

        int n = str.length();
        int left = 0;
        int right = n - 1;
        while (left < right)
        {
            if (str[left] != str[right])
            {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
int main()
{

    string str = "mqqadeazqdam";
    Solution s;
    bool ans = s.palindrome(str);
    if (ans)
    {
        cout << "string is palindrome" << endl;
    }
    else
    {
        cout << "it is not " << endl;
    }
}