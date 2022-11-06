

/* 
 * File:   SatirListesiNode.hpp
 * Author: HAKAN
 *
 * Created on November 1, 2022, 7:02 AM
 */

#ifndef SATIRLISTESINODE_HPP
#define SATIRLISTESINODE_HPP



#include <iostream>
using namespace std;

class SatirListesiNode {
public:
    int data;
    SatirListesiNode *next;
    SatirListesiNode *prev;

    SatirListesiNode(const int data, SatirListesiNode *next, SatirListesiNode *prev);
    SatirListesiNode(const int data, SatirListesiNode *next);
    SatirListesiNode(const int data);
};



#endif /* SATIRLISTESINODE_HPP */

