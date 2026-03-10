#include <iostream>

void swapChars(char *a, char *b){
	char temp{*a};
	*a = *b;
	*b = temp;
}

int main(){
	std::string input{};
	std::cin >> input;

	bool flag{true};
	bool middle{true};

	long long n{(long long)input.length()};

	for(long long i{0}; i < ((n / 2) + (n % 2)); i++){
		if(input[i] != input[n - 1 - i]){
			for(long long j{n - 1 - i}; j > i; j--){
				flag = false;
				if(input[i] == input[j]){
					swapChars(&input[j], &input[n - 1 - i]);
					flag = true;
					break;
				}
			}
			if(flag == false && middle == true){
				swapChars(&input[i], &input[(n / 2) + (n % 2)]);
				i--;
				middle = false;
			}
		}
	}

	if(flag){
		std::cout << input;
	}
	else{
		std::cout << "NO SOLUTION\n";
	}

	return 0;
}
