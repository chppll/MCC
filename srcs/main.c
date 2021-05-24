#include "../includes/MCC.h"

void    set_color(int argc, char **argv, int *color)
{
    if (argc != 2)
    {
        printf("usage: MCC 0 or MCC 1\n");
        exit();
    }
    if (strcmp(argv[1], "0"))
        *color = 0;
    else if (strcmp(argv[1], "1"))
        *color = 1;
    else
    {
        printf("usage: MCC 0 or MCC 1\n");
        exit();
    }
}

void initial_state(t_state *s)
{
    s->turn = 1;
    s->player = 0;
    nbPieces[0] = 16;
    nbPieces[1] = 16;
    t_piece whitePieces[16];
    t_piece blackPieces[16];
    whiteIsChecked = 0;
    blackIsChecked = 0;
}

void    create_root(t_node *root)
{
    root = malloc(sizeof(t_node));
    root->visits = 0;
    root->wins = 0;
    initial_state(&root->state);
}

void    init(int argc, char **argv, t_MCC *MCC)
{
    set_color(argc, argv, &MCC->color);
    create_root(MCC->root);
}

int     main(int argc, char **argv)
{
    t_MCC   MCC;

    init(argc, argv, &MCC);
    loop(MCC);
}