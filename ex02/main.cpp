#include "Array.hpp"

int main(void)
{
// {
//     /*  Array with no parameter is an empty array   */
//     Array<int> test1;
//     Array<int> test2(test1);
//     Array<int> test3 = test2;
//     // Array<
//     try
//     {
//         std::cout << test1[0] << std::endl;
//     }
//     catch(const OutOfBoundsException& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         std::cout << test2[0] << std::endl;
//     }
//     catch(const OutOfBoundsException& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         std::cout << test3[0] << std::endl;
//     }
//     catch(const OutOfBoundsException& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
// }
// {
//     /*  Array with unsigned int parameter */
//     Array<unsigned int> v1(5);

//     std::cout << v1[0] << std::endl;
//     v1[0] = 7;
//     v1[4] = -7;
//     std::cout << v1[0] << std::endl;
//     std::cout << v1[4] << std::endl;
    
//     /*  test Array copy     */
//     Array<unsigned int> v2(v1);
//     std::cout << v2[0] << std::endl;
//     std::cout << v2[4] << std::endl;

//     /*  test Array equal    */
//     Array<unsigned int> v3 = v2;
//     std::cout << v3[0] << std::endl;
//     std::cout << v3[4] << std::endl;

//     /*  test OutofBounds    */
//     try
//     {
//         std::cout << v3[-5] << std::endl;
//     }
//     catch(const OutOfBoundsException& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
    
// }
// {
//     Array<std::string> bouc(4);

//     std::cout << bouc[0] << std::endl;
//     bouc[0] = "first paragraph";
//     bouc[1] = "second paragraph";
//     bouc[2] = "third and last paragraph no fourth one";

//     std::cout << bouc[0] << std::endl
//               << bouc[1] << std::endl
//               << bouc[2] << std::endl
//               << bouc[3] << std::endl;
// }
    return 0;	
}
