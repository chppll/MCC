#ifndef STATE_H
#define STATE_H

#include "piece.h"

typedef struct s_state
{
    int turn;
    int player;
    int nbPieces[2];
    t_piece pieces[2][16];
    int checked[2];
}               t_state;

#endif