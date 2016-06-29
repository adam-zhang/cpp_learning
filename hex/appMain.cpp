#include <sstream>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	string str = "abc";
	for(size_t i = 0; i < str.size(); ++i)
		cout << hex << setw(2) << int(str[i])<< " " << std::endl;
	return 0;
}
