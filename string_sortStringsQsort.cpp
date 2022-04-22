#include <iostream> 

// setting up rules for comparison
static int myCompare(const void* a, const void* b)
{
	return strcmp(*(const char**)a, *(const char**)b);
}

void sort(const char* arr[], int size)
{
	qsort(arr, size, sizeof(const char*), myCompare);
}

int main()
{
	const char* arr[] = {"siddu", "ashu", "savitri" };
	std::cout << "Before sorting strings are: " << std::endl;
	std::cout << "{";
	for (auto i = 0; i < 3; i++)
	{
		std::cout << arr[i] << ",";
	}
	std::cout << "}" << std::endl;

	sort(arr, 3);

	std::cout << "After sorting strings are: " << std::endl;
	std::cout << "{";
	for (auto i = 0; i < 3; i++)
	{
		std::cout << arr[i] << ",";
	}
	std::cout << "}" << std::endl;

	return 0;
}
