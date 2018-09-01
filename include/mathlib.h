/*
Please read LICENSE file for license information.
*/

#include "Common.h"
#include <type_traits>
#include <exception>

namespace mathlib {
    template<typename T>
    auto sum(T t) {
        return t;
    }
    
    template<typename T, typename... Args>
    auto sum(T t, Args... args) {
        return t + sum(args...);
    }

    template<typename T>
    auto multiply(T t) {
        return t;
    }
    
    template<typename T, typename... Args>
    auto multiply(T t, Args... args) {
        return t * multiply(args...);
    }

    template<typename T>
    auto devide(T t) {
        return t;
    }
    
    template<typename T, typename... Args>
    auto devide(T t, Args... args) {
        //if(t == 0) {
            //throw std::exception("Cannot divide by zero!");
        //}
        return t / devide(args...);
    }

}