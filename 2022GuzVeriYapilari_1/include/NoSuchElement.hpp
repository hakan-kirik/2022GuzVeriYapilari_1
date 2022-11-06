

/* 
 * File:   NoSuchElement.hpp
 * Author: HAKAN
 *
 * Created on November 1, 2022, 7:15 AM
 */

#ifndef NOSUCHELEMENT_HPP
#define NOSUCHELEMENT_HPP

#include "Exception.hpp"

class NoSuchElement : public Exception {
public:

    NoSuchElement(const string &msg) : Exception(msg) {
    }
};


#endif /* NOSUCHELEMENT_HPP */

