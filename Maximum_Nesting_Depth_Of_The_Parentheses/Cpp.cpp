#include <iostream>
#include <string>

class Solution {
public:
    int maxDepth(std::string s) {
        int count = 0, maxCount = 0;
        for(char c : s)
        {
            if(c == '(')
            {
                count++;
                maxCount = std::max(maxCount, count);
            }
            else if(c == ')')
            {
                count--;
            }
        }
        return maxCount;
    }
};

int main()
{
    std::string s; std::cin >> s;
    Solution sol;
    std::cout << sol.maxDepth(s) << std::endl;
    return 0;
}