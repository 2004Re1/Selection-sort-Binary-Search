#include <iostream>
#include <algorithm>

int check_if_sorted(int a[10],int legnth)
{
	bool check = 0;

	for (int i = 0;i < (legnth-1); i++)
	{
		if (a[i] < a[i + 1])
			check = 1;
		else
		{
			check = 0;
			break;
		}

	}

	return check;


}

int sorting(int b[], int legnth)
{
	int help1;

	for (int j = 0;j < (legnth - 1);j++)
	{
		for (int i = 0;i < (legnth - 1);i++)
		{
			if (b[i] > b[i + 1])
			{
				help1 = b[i];
				b[i] = b[i + 1];
				b[i + 1] = help1;
			}

			if (check_if_sorted(b,legnth))
				break;

		}
	}
	return 0;

}


int Binary_Search()
{



	return 0;
}


int main()
{
	int a[] = { 1 };
	int a_legnth;

	std::cout << "enter size of your array" << std::endl;
	std::cin >> a_legnth;

	for (int i = 0;i < a_legnth;i++)
		std::cin >> a[i];

	std::cout << std::endl << "your array is" << std::endl;

	for (int i = 0;i < a_legnth;i++)
		std::cout << a[i] << " ";

	std::cout << "first we will sort" << std::endl;

	sorting(a, a_legnth);

	for (int i = 0;i < a_legnth;i++)
		std::cout << a[i] << " ";



}