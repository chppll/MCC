#ifndef TREE_H
#define TREE_H

typedef struct s_node
{
    t_state         state;
    int             visits;
    int             wins;
    int             childrenNb;
    int             unexpandedNb;
    struct s_node   **children;
}               t_node;


#endif