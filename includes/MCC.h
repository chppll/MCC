#ifndef MCC_H
#define MCC_H

#include "board.h"
#include "state.h"
#include "tree.h"

typedef struct s_MCC
{
    int     color;
    t_node  *root;
}               t_MCC;

#endif
