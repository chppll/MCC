#ifndef BOARD_H
#define BOARD_H

typedef struct s_square
{
    char    column;
    int     row;
    int     isOccupied;
    t_piece *piece;
}               t_square;

typedef struct s_board
{
    s_square    board[8][8];  
}               t_board;

#endif
