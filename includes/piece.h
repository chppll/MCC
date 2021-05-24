#ifndef PIECE_H
#define PIECE_H

enum
{
    PAWN,
    KING,
    QUEEN,
    ROOK,
    BISHOP,
    KNIGHT
}

typedef struct s_piece
{
    int type;
    int row;
    int col;
}               t_piece;

#endif