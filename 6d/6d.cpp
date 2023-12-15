#include <iostream>
int main()
{
	const int n = 6;
	int i;
	int a[n];
	int sum = 0;
	for (i = 0; i < n; ++i)
		std::cin>> a[i];
	for (i = 0; i < n; ++i)
	{
		if (a[i] % 2 == 0)
		{
			std::cout << a[i] << std::endl;
			break;
		}
		sum += a[i];
	}
	std::cout << sum;
	return 0;
}