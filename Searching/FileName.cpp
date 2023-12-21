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


int Binary_Search(int arr[],int first_index,int last_index,int goal)
{

	int middle;


	while (first_index<=last_index)
	{         
		middle = (last_index + first_index) / 2;


		if (goal == arr[middle])
			return middle;

		else if (goal > arr[middle])
			first_index = middle + 1;
		else if (goal < arr[middle])
			last_index = middle - 1;

	}



	return 0;
}


int main()
{
	int a_legnth;
	int a[100];


	//asking for numbers
	std::cout << "enter size of your array" << std::endl;
	std::cin >> a_legnth;


	for (int i = 0;i < a_legnth;i++)
		std::cin >> a[i];

	std::cout << std::endl;


	//showing them
	std::cout << "your array is" << std::endl;

	for (int i = 0;i < a_legnth;i++)
		std::cout << a[i] << " ";


	//sorting
	std::cout<<std::endl << "first we will sort" << std::endl;

	sorting(a, a_legnth);

	for (int i = 0;i < a_legnth;i++)
		std::cout << a[i] << " ";

	std::cout << std::endl;
	//variable for search

	std::cout << "choose number from the array to search for it" << std::endl;
	int target;
	std::cin >> target;
	int f_index = 0;
	int l_index = a_legnth - 1;

	if (Binary_Search(a, f_index, l_index, target)>0)
		std::cout << "your number is found" << std::endl;

	else
		std::cout << "your number isn't here";
	

	



}