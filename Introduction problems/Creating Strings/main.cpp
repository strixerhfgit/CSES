#include <iostream>
#include <set>
#include <iomanip>
#include <iterator>
#include <vector>
#include <string>
#include <algorithm>

template<typename T>
std::ostream& operator<<(std::ostream& out, const std::set<T>& set)
{
    out << "" << *set.begin();
    std::for_each(std::next(set.begin()), set.end(), [&out](const T& element)
    {
        out << "\n" << element;
    });
    return out << "";
}

int main(){
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	std::string input{};
	std::getline(std::cin, input);

	std::set<std::string> strings;

	std::vector<char> arr;

	for(int i{0}; i < input.length(); i++){
		arr.push_back(input[i]);
	}

	std::sort(arr.begin(), arr.end());

	do{
		std::string temp{};
		for(char num : arr){
			temp.push_back(num);
		}

		strings.insert(temp);
	}while(std::next_permutation(arr.begin(), arr.end()));

	std::cout << strings.size() << "\n" << strings << "\n";

	return 0;
}
