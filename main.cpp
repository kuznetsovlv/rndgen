#include <iostream>
#include <cstddef>
#include "project_config.h"
#include "rndgen.h"

template<typename T>
void test(size_t);

const size_t COUNT = 10;

int main()
{
	std::cout << "Random generator test rndgen " << VERSION_MAJOR << "." << VERSION_MINOR << ":" << std::endl;

	std::cout << "int's set:" << std::endl;
	test<int>(COUNT);
	std::cout << std::endl;

	std::cout << "double's set:" << std::endl;
	test<double>(COUNT);
	std::cout << std::endl;

	std::cout << "lolng long's set:" << std::endl;
	test<long long>(COUNT);
	std::cout << std::endl;

	std::cout << "char's set:" << std::endl;
	test<char>(COUNT);
	std::cout << std::endl;

	std::cout << "int*'s set:" << std::endl;
	test<int*>(COUNT);
	std::cout << std::endl;

	return 0;
}

template<typename T>
void test(size_t count)
{
	for(size_t i = 0; i < count; ++i)
	{
		T res = rndgen::random<T>();
		std::cout << "Value " << i << ": " << res << std::endl;
	}
}
