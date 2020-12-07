#include <iostream>
#include <phepcong.h>

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    phepcong cong(1985, 1990);
    std::cout << "anh yeu em:" << cong.get() << std::endl;
    std::cout << "__builtin_extract_return_addr(__builtin_return_address(0)): "
              << __builtin_extract_return_addr(__builtin_return_address(0))
              << &std::endl;
    std::cout << "__builtin_return_address(0): " << __builtin_return_address(0)
              << &std::endl;
    return 0;
}
