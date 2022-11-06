

/* 
 * File:   YoneticiListesi.hpp
 * Author: HAKAN
 *
 * Created on November 1, 2022, 8:28 AM
 */

#ifndef YONETICILISTESI_HPP
#define YONETICILISTESI_HPP

#include <iostream>

#include "SatirListesi.hpp"
#include "YoneticiNode.hpp"
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include "IndexOutOfBounds.hpp"
#include "ConsolePosition.hpp"

class YoneticiListesi {
private:
    YoneticiNode *head;
    int size;

    YoneticiNode* FindPreviousByPosition(int index)throw (NoSuchElement);

    YoneticiNode* FindPosition(int index)throw (NoSuchElement);

public:

    YoneticiListesi();
    int Count()const;
    bool isEmpty()const;
    void add(SatirListesi*& item);
    void insert(int index, SatirListesi*& item);
    SatirListesi*& first()throw (NoSuchElement);
    SatirListesi*& last()throw (NoSuchElement);
    int indexOf(SatirListesi*& item)throw (NoSuchElement);
    void remove(SatirListesi*& item);
    void randomRemoveAtSatirListesi(int index, int inlineIndex)throw (IndexOutOfBounds, NoSuchElement);
    void calculateAveragee(int index);
    int randomGenerator(int index)throw (IndexOutOfBounds, NoSuchElement);
    void removeAt(int index);
    void moveNode(int from, int to)throw (IndexOutOfBounds);
    bool find(SatirListesi*& item);
    void reverse();
    void sortByAverage();
    SatirListesi*& elementAt(int index)throw (NoSuchElement);
    void clear();
    void printIndex(int index, int x, int y);
    ~YoneticiListesi();

};


#endif /* YONETICILISTESI_HPP */

