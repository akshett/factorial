#include <iostream>

int factorial(int n)
{
	if (n == 0)
		return 1;
	else
		return n * factorial(n-1);
}

int main()
{
	for (int i = 1; i <= 7; ++i)
		std::cout << "Factorial of " << i << " is: " << factorial(i) << '\n';

	return 0;
}
