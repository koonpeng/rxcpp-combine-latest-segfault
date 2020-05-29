#ifndef FOO_HPP
#define FOO_HPP

#include <rxcpp/rx.hpp>

rxcpp::observable<int> __attribute__ ((visibility ("default"))) foo();

#endif // FOO_HPP
