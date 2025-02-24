#include <iostream>

/*
https://cppinsights.io/

#include <iostream>

template<class Type>
Type add(Type a, Type b)
{
  return a + b;
}

// First instantiated from: insights.cpp:14
#ifdef INSIGHTS_USE_TEMPLATE
template<>
int add<int>(int a, int b)
{
  return a + b;
}
#endif


// First instantiated from: insights.cpp:15
#ifdef INSIGHTS_USE_TEMPLATE
template<>
float add<float>(float a, float b)
{
  return a + b;
}
#endif


// First instantiated from: insights.cpp:16
#ifdef INSIGHTS_USE_TEMPLATE
template<>
std::basic_string<char> add<std::basic_string<char> >(std::basic_string<char> a, std::basic_string<char> b)
{
  return std::operator+(a, b);
}
#endif


int main()
{
  std::operator<<(std::operator<<(std::cout, "adding two numbers: ").operator<<(add<int>(13, 37)), "\n");
  std::operator<<(std::operator<<(std::cout, "adding two float  : ").operator<<(add<float>(13.4200001F, 37.4199982F)), "\n");
  std::operator<<(std::operator<<(std::operator<<(std::cout, "adding two strings: "), add<std::basic_string<char> >(std::basic_string<char>(std::basic_string<char>("13", std::allocator<char>())), std::basic_string<char>(std::basic_string<char>("37", std::allocator<char>())))), "\n");
  std::operator<<(std::cout, "done!\n");
  return (0);
}

*/

// generic 
template <class Type>
// template <typename Type>

Type add(Type a, Type b) {
    return a + b;
}


int main() {
    std::cout << "adding two numbers: " << add<int>(13, 37) << "\n";
    std::cout << "adding two float  : " << add<float>(13.42f, 37.42f) << "\n";
    std::cout << "adding two strings: " << add<std::string>(std::string("13"), std::string("37")) << "\n";
    std::cout << "done!\n";
    return (0);
}

