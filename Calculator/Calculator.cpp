#include <iostream>

int main()
{
	int num1, num2;
	char op;
	float result;
	
	std::cout << "Birinci sayiyi gir:";
	std::cin >> num1;
	std::cout << "Ikinci sayiyi gir:";
	std::cin >> num2;
	std::cout << "Islem sec:";
	std::cin >> op;
	switch (op)
	{
		case '+':
			result = num1 + num2;
			std::cout << "Sonuc:" << result << std::endl;
			break;
		case '-':
			result = num1 - num2;
			std::cout << "Sonuc:" << result << std::endl;
			break;
		case '*':
			result = num1 * num2;
			std::cout << "Sonuc:" << result << std::endl;
			break;
		case '/':
			if (num2 != 0) 
			{
				result = (float) num1 / num2;
				std::cout << "Sonuc:" << result << std::endl;
			}
			else {
				std::cout << "Sifira bolme hatasi" << std::endl;
			}
			break;
		default:
			std::cout << "Gecersiz Operator";
			break;
	}
	return 0;
}
