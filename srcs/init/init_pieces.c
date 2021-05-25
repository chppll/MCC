#include "../../includes/MCC.h"

void    init_kings(t_piece (*p)[2][16], int *i)
{
    *p[0][*i] = (t_piece){ KING, 0, 4};
    *p[1][*i++] = (t_piece){ KING, 7, 4};
}

void    init_queens(t_piece (*p)[2][16], int *i)
{
    *p[0][*i] = (t_piece){ QUEEN, 0, 3};
    *p[1][*i++] = (t_piece){ QUEEN, 7, 3};
}

void    init_rooks(t_piece (*p)[2][16], int *i)
{
    *p[0][*i] = (t_piece){ ROOK, 0, 0};
    *p[1][*i++] = (t_piece){ ROOK, 7, 0};
    *p[0][*i] = (t_piece){ ROOK, 0, 7};
    *p[1][*i++] = (t_piece){ ROOK, 7, 7};
}

void    init_knights(t_piece (*p)[2][16], int *i)
{
    *p[0][*i] = (t_piece){ KNIGHT, 0, 1};
    *p[1][*i++] = (t_piece){ KNIGHT, 7, 1};
    *p[0][*i] = (t_piece){ KNIGHT, 0, 6};
    *p[1][*i++] = (t_piece){ KNIGHT, 7, 6};
}

void    init_bishops(t_piece (*p)[2][16], int *i)
{
    *p[0][*i] = (t_piece){ BISHOP, 0, 2};
    *p[1][*i++] = (t_piece){ BISHOP, 7, 2};
    *p[0][*i] = (t_piece){ BISHOP, 0, 5};
    *p[1][*i++] = (t_piece){ BISHOP, 7, 5};
}

void    init_pawns(t_piece (*p)[2][16], int *i)
{
    int j = 0;

    while (*i < 16)
    {
        *p[0][*i] = (t_piece){ PAWN, 1, j};
        *p[1][*i++] = (t_piece){ PAWN, 6, j};
        j++;
    }
}

void    init_pieces(t_piece (*p)[2][16])
{
    int i = 0;
    init_kings(p, &i);
    init_queens(p, &i);
    init_rooks(p, &i);
    init_knights(p, &i);
    init_bishops(p, &i);
    init_pawns(p, &i);
}