#include <iostream>



int main() 
{

	int num = 0;

	std::cout << "Enter a number:";

	std::cin >> num;
	for (int i = 0; i <= num; i++) 
	{
		if (i % 5 == false && i % 3 == false)
			std::cout << i << ": FizzBuzz" << std::endl;
		else if (i % 5 == false)
			std::cout << i << ": Fizz" << std::endl;
		else if (i % 3 == false)
			std::cout << i << ": Buzz" << std::endl;
		else
			std::cout << i << std::endl;
	}

	system("pause");

	return 0;
}
