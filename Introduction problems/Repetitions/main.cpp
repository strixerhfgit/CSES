#include <iostream>

int main(){
	std::string input;
	std::cin >> input;

	long long tot{1};
	long long temp{tot};
	char at{input[0]};

	for(long long i{1}; i < input.length(); i++){
		if(input[i] != at){
			temp = 0;
		}

		at = input[i];

		temp++;

		if(tot < temp)
			tot = temp;
	}

	std::cout << tot;

	return 0;
}
