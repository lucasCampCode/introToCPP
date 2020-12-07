#include <iostream>

int BinarySearch(int Max)
{
	int input = 0;
	int min = 0;
	int max = Max;
	while (min <= max) 
	{
		int guess = (min + max) / 2;

		std::cout << "is the number your thinking of " << guess <<"\n{1} for yes \n{2} for no\n";
		std::cin >> input;
		if (input == 1)
			return guess;
		else if (input == 2)
		{
			std::cout << "is the number higher or lower\n{1} for higher\n{2} for lower\n";
			std::cin >> input;
			if (input == 1)
				min = guess + 1;
			else if (input == 2)
				max = guess - 1;
		}
		system("cls");
	}
	return -1;
}

int main() 
{
	int num = 0;

	std::cout << "welcome to the number guessing game!\nfirst off need a range enter the highest number: ";
	while (num <= 0 || num > 1000)
	{
		std::cin >> num;
		if (num > 1000)
			std::cout << "that number is to high!\nmax is 1000\n";
	}
	int guess = BinarySearch(num);
	if (guess != -1)
		std::cout << "your number is " << guess <<"! i win :P"<< std::endl;
	else 
		std::cout << "you cheated" << std::endl;
	system("pause");
	return 0;
}


