#ifndef BOARD_H
#define BOARD_H

#include "piece.h"

typedef struct s_square
{
    char    column;
    int     row;
    int     isOccupied;
    struct   s_piece *piece;
}               t_square;

typedef struct s_board
{
    struct  s_square    board[8][8];
}               t_board;

#endif
