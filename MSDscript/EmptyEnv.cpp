#include "EmptyEnv.hpp"

PTR(Val) EmptyEnv::lookup(std::string find_name) {
    throw std::runtime_error("free variable: " + find_name);
}
