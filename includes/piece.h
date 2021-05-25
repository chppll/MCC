#ifndef PIECE_H
#define PIECE_H

enum
{
    KING,
    QUEEN,
    ROOK,
    KNIGHT,
    BISHOP,
    PAWN
};

typedef struct s_piece
{
    int type;
    int row;
    int col;
}               t_piece;

#endif