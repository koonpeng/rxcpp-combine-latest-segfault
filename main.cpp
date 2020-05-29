#include "Foo.hpp"
#include "Bar.hpp"

int main()
{
//  bar().subscribe(); // ok
  foo().subscribe(); // segfaults
}
