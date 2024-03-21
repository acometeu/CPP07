#include "iter.hpp"

int main(void)
{
{
    int length = 10;
    int array[10];
    int i = 0;

    while (i < length)
    {
        array[i] = i + 1;
        i++;
    }
    iter<int>(array, length, function_display);
    std::cout << std::endl;
    iter<int>(array, length, display_int);

    std::cout << std::endl;
    char array_char[10];
    i = 0;
    while (i < 10)
    {
        array_char[i] = i + 97;
        i++;
    }
    iter<char>(array_char, length, display_char);
}
    return 0;	
}
