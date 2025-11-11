#include <iostream>
#include <chrono>
#include <thread>
#include <cstdlib>
#include "animace.cpp"
#include "snake.cpp"
//#include "sortinghat.cpp"
//#include "tic-tac-toe.cpp"
using namespace std;

void Hra1(){
    cout << "hra cislo 1";
}

void Zapnuti_Hry() {
    int vyberHry;
    cin >> vyberHry;

    switch (vyberHry)
    {
    case 1:
        snake();
        break;

    default:
        break;
    }
}

// ───────────────────────────────────────────────────────────
// MAIN — animace
// ───────────────────────────────────────────────────────────
int main() {
    CelaAnimace();
    Zapnuti_Hry();
    return 0;
}
