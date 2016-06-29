#include <functional>
#include <iostream>

using namespace std;
using namespace std::placeholders;

int main()
{
	auto plus10 = std::bind(std::plus<int>(), _1, 10);
	std::cout << "+10 " << plus10(7) << std::endl;
	return 0;
}
