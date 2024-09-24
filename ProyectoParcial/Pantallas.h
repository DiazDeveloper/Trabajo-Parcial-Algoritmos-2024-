#pragma once
#include "pch.h"
#include <iostream>
using namespace System;
using namespace std;


class Pantallas
{
public:

    void DibujarPantallaGano()
    {
        Console::Clear();
        Console::ForegroundColor = ConsoleColor::Green;
        Console::SetCursorPosition(150 / 2 - 10, 50 / 2 - 2);  cout << "_______         _                      _        _____    _____  ________";
        Console::SetCursorPosition(150 / 2 - 10, 50 / 2 - 1);  cout << "|              / \\      |\\    |     / \\      |          |    |";
        Console::SetCursorPosition(150 / 2 - 10, 50 / 2);      cout << "|             /   \\     | \\   |    /   \\      \\        |    |_______";
        Console::SetCursorPosition(150 / 2 - 10, 50 / 2 + 1);  cout << "|   ____     /_____\\    |  \\  |   /_____\\      \\       |    |";
        Console::SetCursorPosition(150 / 2 - 10, 50 / 2 + 2);  cout << "|      |    /       \\   |   \\ |  /       \\      \\      |    |";
        Console::SetCursorPosition(150 / 2 - 10, 50 / 2 + 3);  cout << "|______|   /         \\  |    \\| /         \\  ____|      |    |_______";
        Console::ResetColor();
        system("pause");
    }

    void DibujarPantallaPerdio()
    {
        Console::Clear();
        Console::ForegroundColor = ConsoleColor::Red;
        Console::SetCursorPosition(150 / 2 - 10, 50 / 2 - 2);    cout << " ______  _______   _____    ___    _____   _____  _____  _______";
        Console::SetCursorPosition(150 / 2 - 10, 50 / 2 - 1);    cout << "|     |  |         |    \\  |  \\    |    |         |   |";
        Console::SetCursorPosition(150 / 2 - 10, 50 / 2);        cout << "|     |  |______   |____/   |   \\   |     \\       |   |_______";
        Console::SetCursorPosition(150 / 2 - 10, 50 / 2 + 1);    cout << "|_____|  |         |\\      |    |   |      \\      |   |";
        Console::SetCursorPosition(150 / 2 - 10, 50 / 2 + 2);    cout << "|        |         | \\     |   /    |       \\     |   |";
        Console::SetCursorPosition(150 / 2 - 10, 50 / 2 + 3);    cout << "|        |______   |  \\    |__/   __|__   ____|    |   |_______";
        Console::ResetColor();
        system("pause");
    }
};

