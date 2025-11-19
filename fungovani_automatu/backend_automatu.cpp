#include "../jednotlive_hry/hadej_cislo.h"
#include "../jednotlive_hry/magic8.h"
#include "../jednotlive_hry/snake.h"
#include "../jednotlive_hry/sortinghat.h"
#include "../jednotlive_hry/tic_tac_toe.cpp"

#pragma once

int backend_automatu(){
    int vyberHry;
    cin >> vyberHry;

    switch (vyberHry)
    {
    case 1:
        return hadej_cislo();
        break;
    case 2:
        return magic8();
        break;
    case 3:
        return sorting_hat();
        break;
    case 4:
        snake();
        break;
    case 5:
        return tic_tac_toe();
    default:
        break;
    }
    return 1;
}