
/* 
 * File:   IndexOutOfBounds.hpp
 * Author: HAKAN
 *
 * Created on November 2, 2022, 11:45 AM
 */

#ifndef INDEXOUTOFBOUNDS_HPP
#define INDEXOUTOFBOUNDS_HPP
#include "Exception.hpp"

class IndexOutOfBounds : public Exception {
public:

    IndexOutOfBounds(const string &msg) : Exception(msg) {
    }
};


#endif /* INDEXOUTOFBOUNDS_HPP */

