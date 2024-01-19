#include <cstdlib>
#include <ctime>
#include <cstddef>
#include <cstdint>
#include "rndgen.h"

namespace rndgen
{

	void init()
	{
		static bool init = false;

		if(!init)
		{
			srand(time(nullptr));
			init = true;
		}
	}

	template<typename T>
	T random()
	{
		init();

		T res;
		int8_t *p = reinterpret_cast<int8_t*>(&res);
		for(size_t i = 0; i < sizeof(T); ++i)
		{
			*(p + i) = static_cast<int8_t>(rand());
		}

		return res;
	}
}
