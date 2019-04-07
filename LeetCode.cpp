#include <iostream>
#include <map>

using namespace std;

int main()
{

}

class Solution {

private:
	map<string, int> romanNumMap;

public:
	Solution()
	{
		init();
	}

	void init()
	{
		romanNumMap.insert(make_pair("I", 1));
		romanNumMap.insert(make_pair("V", 5));
		romanNumMap.insert(make_pair("X", 10));
		romanNumMap.insert(make_pair("L", 50));
		romanNumMap.insert(make_pair("C", 100));
		romanNumMap.insert(make_pair("D", 500));
		romanNumMap.insert(make_pair("M", 1000));
	}

public:
	int romanToInt(string s) {

	}
};
