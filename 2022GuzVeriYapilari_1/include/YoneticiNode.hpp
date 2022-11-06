

/* 
 * File:   YoneticiNode.hpp
 * Author: HAKAN
 *
 * Created on November 2, 2022, 6:22 AM
 */

#ifndef YONETICINODE_HPP
#define YONETICINODE_HPP


#include "SatirListesi.hpp"

class YoneticiNode {
public:
    SatirListesi* data;
    double average;
    YoneticiNode *next;
    YoneticiNode *prev;

    YoneticiNode(SatirListesi* data, YoneticiNode *next, YoneticiNode *prev);
    YoneticiNode(SatirListesi* data, YoneticiNode *next);
    YoneticiNode(SatirListesi* data);
    double calculateAverage();
};


#endif /* YONETICINODE_HPP */

