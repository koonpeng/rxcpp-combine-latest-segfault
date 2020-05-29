#include "Foo.hpp"

rxcpp::observable<int> foo()
{
  auto a = rxcpp::observable<>::create<int>([](auto) {});
  auto b = rxcpp::observable<>::create<int>([](auto) {});
  return a.combine_latest([](const auto&, const auto&)
  {
    return 3;
  }, b);
}