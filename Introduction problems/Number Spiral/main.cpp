#include <iostream>

int main(){
	long long t{};
	std::cin >> t;

	long long x{};
	long long y{};

	unsigned long long res = {};

	for(long long i{0}; i < t; i++){
		std::cin >> x;
		std::cin >> y;

		if(x > y){
			if(x % 2 == 0)
				res = (x * x) - (y - 1);
			else
				res = (x - 1) * (x - 1) + y;
		}
		else{
			if(y % 2 == 0)
				res = (y - 1) * (y - 1) + x;
			else
				res = (y * y) - (x - 1);
		}

		std::cout << res << "\n";
	}

	return 0;
}
