
/* 
 * File:   ReadAndAdd.hpp
 * Author: HAKAN
 *
 * Created on November 2, 2022, 8:17 AM
 */

#ifndef READANDADD_HPP
#define READANDADD_HPP

#include <string>
#include <fstream>
#include <iostream>
#include <sstream>

#include "SatirListesi.hpp"
#include "YoneticiListesi.hpp"

class ReadAndAdd {
private:
    std::string fileName;
    int lineCount();
    SatirListesi **lines;
    void readLine();
public:
    ReadAndAdd(std::string);
    ~ReadAndAdd();
    YoneticiListesi* GetFillYoneticiListesi();



};

#endif /* READANDADD_HPP */

