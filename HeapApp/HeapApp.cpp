#include <iostream>
#include <vector>
#include "../HeapLib/Heap.h"

int main()
{
	size_t size;
	do
	{
		std::cout << "Enter size:";
		std::cin >> size;
		if (size > 0)
		{
			std::vector<std::pair<int, int>> v;
			for (int i = 1; i <= size; ++i)
				v.push_back({ i,i });
			Heap<int, int> heap(v);

			std::cout << "Heap befor pop:" << std::endl;
			std::cout << heap;
			heap.pop();
			std::cout << "Heap after pop:" << std::endl;
			std::cout << heap;
		}
	} while (size > 0);
}
