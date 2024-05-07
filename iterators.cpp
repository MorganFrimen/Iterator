#include <iostream>
#include <vector>

#include <unordered_map>

int main()
{
	std::vector<size_t>values{ 1,2,3,4,5 };

	for (size_t value : values)
		std::cout << value << std::endl;

	std::cout << std::endl;
	std::cout << "**************" << std::endl;
	std::cout << std::endl;

	using SMap = std::unordered_map<std::string, int>;
	SMap map;
	map["Hello"] = 5;
	map["World"] = 6;

	for (SMap::const_iterator it = map.begin();
		it != map.end(); it++)
	{
		auto& key = it->first;
		auto& value = it->second;

		std::cout << key << " = " << value << std::endl;
	}

	std::cout << std::endl;
	std::cout << "**************" << std::endl;
	std::cout << std::endl;

	for (auto kv : map)
	{
		auto& key = kv.first;
		auto& value = kv.second;

		std::cout << key << " = " << value << std::endl;
	}

	std::cout << std::endl;
	std::cout << "**************" << std::endl;
	std::cout << std::endl;

	for (auto [key, value] : map)
		std::cout << key << " = " << value << std::endl;

	std::cout << std::endl;
	std::cout << "**************" << std::endl;
	std::cout << std::endl;

	std::vector<size_t> number{ 1,2,3,4,5,6,7,8 };
	for (size_t num : number)
		std::cout << "Vector : " << num << std::endl;

	std::cout << std::endl;
	std::cout << "**************" << std::endl;
	std::cout << std::endl;

	number.erase(std::next(number.begin(), 2));
	for (size_t num : number)
		std::cout << "Vector : " << num << std::endl;

	std::cout << std::endl;
	std::cout << "**************" << std::endl;
	std::cout << std::endl;

	number.insert(number.begin() + 1, 5);
	for (size_t num : number)
		std::cout << "Vector : " << num << std::endl;


	std::cin.get();

}