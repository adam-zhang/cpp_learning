#include <functional>
#include <iostream>
#include <vector>
#include <algorithm>
#include <memory>

using namespace std;
using namespace std::placeholders;
class Person
{
public:
	void SayHello()
	{
		std::cout << "Hello World!" << std::endl;
	}

	void SayHello(const string& text)
	{
		std::cout << text << std::endl;
	}
};

//void SayHello()
//{
//	cout << "Hello function";
//}

int main()
{
	vector<shared_ptr<Person>> people;
	people.push_back(shared_ptr<Person>(new Person));
	people.push_back(shared_ptr<Person>(new Person));
	string val = "Hello";
	//for_each(people.begin(), people.end(), bind(&Person::SayHello, val, _1, _2));
	for_each(people.begin(), people.end(), bind(&Person::SayHello, _1));
	//for(auto i = people.begin(); i != people.end(); ++i)
	//{
	//	(*i)->SayHello();
	//}
	return 0;	
}
