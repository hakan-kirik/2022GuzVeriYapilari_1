
/* 
 * File:   Exception.hpp
 * Author: HAKAN
 *
 * Created on November 1, 2022, 7:12 AM
 */

#ifndef EXCEPTION_HPP
#define EXCEPTION_HPP

#include <iostream>
using namespace std;

class Exception {
private:
    string message;
public:

    Exception(const string &msg) : message(msg) {
    }
    string Message()const;
};


#endif /* EXCEPTION_HPP */

