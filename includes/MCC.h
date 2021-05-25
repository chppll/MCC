#ifndef MCC_H
#define MCC_H

#include "board.h"
#include "state.h"
#include "tree.h"

#include    <stdio.h>
#include    <stdlib.h>
#include    <string.h>

typedef struct s_MCC
{
    int     color;
    t_node  *root;
}               t_MCC;


/* INIT */

void    init(int argc, char **argv, t_MCC *MCC);
void    create_root(t_node *root);
void    init_pieces(t_piece (*p)[2][16]);


#endif
