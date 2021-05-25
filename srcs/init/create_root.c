#include "../../includes/MCC.h"

void initial_state(t_state *s)
{
    s->turn = 1;
    s->player = 0;
    s->nbPieces[0] = 16;
    s->nbPieces[1] = 16;
    init_pieces(&s->pieces);
    s->checked[0] = 0;
    s->checked[1] = 0;
}

void    create_root(t_node *root)
{
    root = malloc(sizeof(t_node));
    root->visits = 0;
    root->wins = 0;
    initial_state(&root->state);
}