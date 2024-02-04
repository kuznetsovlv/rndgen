# rndgen
## Description
Random generator library, implements method `random()` to generate a pseudorandom value of custom data type with uniform distribution:
```
namespace rndgen
{
    template<typename T>
    T random();
}
```

## Usage
The method does not need an initialisation of pseudorandom sequence:
```cpp
#include <iostream>
#include <rndgen.h>

int main
{
    //The initialisation of pseudorandom sequence is not required.
    int intValue = rndgen::random<int>();
    std::cout << intValue << std::endl;
    
    double doubleValue = rndgen::random<double>();
     std::cout << doubleValue << std::endl;
}
```
## Build and installation
Build:
```bash
mkdir build
cd build
cmake ..
cmake --build .
```
then install library:
```bash
cmake --install .
```
or create installation package:
```bash
cpack [-G CUSTOM_GEN]
```
where `CUSTOM_GEN` is a custom generator, by default it is `TGZ`.

Optionally, you can test the generation of values of different data types:
```bash
./rnd
```

## Homepage:
[https://github.com/kuznetsovlv/rndgen](https://github.com/kuznetsovlv/rndgen)

## License:
[MIT License](./LICENSE)