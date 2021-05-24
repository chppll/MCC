#ifndef TREE_H
#define TREE_H

typedef struct s_node
{
    t_state         *state;
    int             childrenNb;
    int             unexpandedNb;
    struct s_state  **children;
}               t_node;

#endif