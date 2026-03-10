#include <iostream>

int main(){
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n{};
	std::cin >> n;

	long capPrint[n] = {};
	long countPrint[n] = {};
	int printing[n] = {0};

	long lines{1};

	for(int i{0}; i < n; i++){
		lines *= 2;
		capPrint[n - i - 1] = lines;
		countPrint[n - i - 1] = lines/2;
	}

	for(long i{0}; i < lines; i++){

		for(int j{0}; j < n; j++){

			if(capPrint[j] == countPrint[j]){

				countPrint[j] = 0;

				if(printing[j] == 1){
					printing[j] = 0;
				}
				else{
					printing[j] = 1;
				}
			}

			std::cout << printing[j];
			countPrint[j]++;
		}
		std::cout << "\n";
	}

	return 0;
}
