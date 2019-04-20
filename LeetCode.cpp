#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
	string longestCommonPrefix(vector<string>& strs) {

		int size = strs.size();

		if (size <= 0)
		{
			return "";
		}

		int length = strs[0].length();

		for (int i = 0; i < length; i++)
		{
			for (int j = 0; j < size; j++)
			{
				if (i >= strs[j].size() || strs[j].at(i) != strs[0].at(i))
				{
					return strs[0].substr(0, i);
				}
			}
		}
		return strs[0];
	}
};

int main()
{
	vector<string> strs = { "flower","flow","flight" };
	Solution* s = new Solution;
	string result = s->longestCommonPrefix(strs);

	std::cout << result;
}


