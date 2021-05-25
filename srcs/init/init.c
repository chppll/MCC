#include "../../includes/MCC.h"

void    set_color(int argc, char **argv, int *color)
{
    if (argc != 2)
    {
        printf("usage: ./MCC 0 or ./MCC 1\n");
        exit(-1);
    }
    if (!strcmp(argv[1], "0"))
    {
        printf("Computer will play as White.\n");
        *color = 0;
    }
    else if (!strcmp(argv[1], "1"))
    {
        printf("Computer will play as Black.\n");
        *color = 1;
    }
    else
    {
        printf("usage: ./MCC 0 or ./MCC 1\n");
        exit(-1);
    }
}

void    init(int argc, char **argv, t_MCC *MCC)
{
    set_color(argc, argv, &MCC->color);
    create_root(MCC->root);
}