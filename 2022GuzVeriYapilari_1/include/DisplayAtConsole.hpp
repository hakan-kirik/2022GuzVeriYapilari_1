
/* 
 * File:   DisplayAtConsole.hpp
 * Author: HAKAN
 *
 * Created on November 3, 2022, 6:27 AM
 */

#ifndef DISPLAYATCONSOLE_HPP
#define DISPLAYATCONSOLE_HPP

#include "YoneticiListesi.hpp"
#include "ConsolePosition.hpp"


#define DisplayperOnePage 8
#define BeginOffset 0

enum Direction {
    up = 0,
    down = 1,
    refresh = 2,

};

enum PageDirection {
    upPage = 0,
    downPage = 1,
};

class DisplayAtConsole {
private:
    YoneticiListesi *yonetici;
    int state;
    int beginOffset;
    int finishOffset;

    void setOffsets();
public:

    void setState(Direction dr);
    void SetPage(PageDirection pdr);


    DisplayAtConsole(YoneticiListesi* yonetici);

    void printYoneticiListesi();

    void printSelectedSatirListesi(int x, int y);

    int DisplayRandomSelectedNode()throw (IndexOutOfBounds, NoSuchElement);

    void DeleteYoneticiNode();

    void DeleteRandomSelectedNode(int randomIndex)throw (IndexOutOfBounds, NoSuchElement);
};

#endif /* DISPLAYATCONSOLE_HPP */

