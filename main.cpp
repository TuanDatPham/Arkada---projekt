#include <iostream>
#include <chrono>
#include <thread>
#include <cstdlib>
#include "animace.cpp"

using namespace std;




// ───────────────────────────────────────────────────────────
// MAIN — animace
// ───────────────────────────────────────────────────────────
int main() {

    drawSmall();

    drawMedium();

    drawBig();

    drawAutomat();

    return 0;
}
