

/* 
 * File:   main.cpp
 * Author: HAKAN
 *
 * Created on November 1, 2022, 6:55 AM
 */

#include <cstdlib>
#include "SatirListesi.hpp"
#include "YoneticiListesi.hpp"
#include "ReadAndAdd.hpp"
#include "DisplayAtConsole.hpp"
#include  "Exception.hpp"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    ReadAndAdd * readingFile = new ReadAndAdd("veriler.txt");

    YoneticiListesi *yoneticiListesi = readingFile->GetFillYoneticiListesi();

    DisplayAtConsole *console = new DisplayAtConsole(yoneticiListesi);
    yoneticiListesi->sortByAverage();
    string karakter = "";
    do {
        console->printYoneticiListesi();
        cin>>karakter;
        if (karakter == "c") {
            Direction direction = up;
            console->setState(direction);
        } else if (karakter == "z") {
            Direction direction = down;
            console->setState(direction);
        } else if (karakter == "k") {
            int randomIndex = 0;
            try {
                randomIndex = console->DisplayRandomSelectedNode();
            } catch (...) {
                continue;

            }
            cin>>karakter;
            if (karakter == "k") {

                console->DeleteRandomSelectedNode(randomIndex);
                yoneticiListesi->sortByAverage();

            }
        } else if (karakter == "p") {
            console->DeleteYoneticiNode();
        } else if (karakter == "d") {
            console->SetPage(upPage);
        } else if (karakter == "a") {
            console->SetPage(downPage);
        }


    } while (karakter != "q");



    return 0;



}

