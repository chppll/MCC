#ifndef STATE_H
#define STATE_H

typedef struct s_state
{
    int turn;
    int player;
    int nbPieces[2];
    t_piece whitePieces[16];
    t_piece blackPieces[16];
    int whiteIsChecked;
    int blackIsChecked;

}               t_state;
#endif