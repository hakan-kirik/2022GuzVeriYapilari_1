
/* 
 * File:   ConsolePosition.hpp
 * Author: HAKAN
 *
 * Created on November 3, 2022, 11:28 AM
 */

#ifndef CONSOLEPOSITION_HPP
#define CONSOLEPOSITION_HPP

#include <windows.h>

static class ConsolePosition {
public:

    static void gotoxy(int x, int y) {
        COORD c;
        c.X = x;
        c.Y = y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
    }


} ConsolePosition;


#endif /* CONSOLEPOSITION_HPP */

