

/* 
 * File:   SatirListesi.hpp
 * Author: HAKAN
 *
 * Created on November 1, 2022, 6:59 AM
 */

#ifndef SATIRLISTESI_HPP
#define SATIRLISTESI_HPP



#include "SatirListesiNode.hpp"
#include "NoSuchElement.hpp"
#include <iomanip>

class SatirListesi {
private:
    SatirListesiNode *head;
    int size;

    SatirListesiNode* FindPreviousByPosition(int index)throw (NoSuchElement);
public:
    SatirListesi();
    int Count()const;
    bool isEmpty()const;
    void add(const int& item);
    void insert(int index, const int& item);
    const int& first()throw (NoSuchElement);
    const int& last()throw (NoSuchElement);
    int indexOf(const int& item)throw (NoSuchElement);
    void remove(const int& item);
    void removeAt(int index);
    bool find(const int& item);
    void reverse();
    const int& elementAt(int index)throw (NoSuchElement);
    void clear();
    friend ostream& operator<<(ostream& screen, SatirListesi& rgt);
    void printNodesFromPositionInReverseOrder(int index)throw (NoSuchElement);
    void printReverseOrder();
    void printSatirListesi(int x, int y);
    ~SatirListesi();

};


#endif /* SATIRLISTESI_HPP */

