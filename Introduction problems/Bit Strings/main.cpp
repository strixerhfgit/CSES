#include <iostream>

int main(){
	long long n{};
	std::cin >> n;

	long long bitStrings{1};
	long long cap{1000000007};

	for(long long i{0}; i < n; i++){
		bitStrings *= 2;

		if(bitStrings > cap){
			bitStrings %= cap;
		}
	}
	
	std::cout << bitStrings;

	return 0;
}
