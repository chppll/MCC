NAME = MCC
OS	= $(shell uname)
DIR_S = srcs
INCLUDES = -I includes/
CC = clang
CFLAGS	= -O3 -Wall -Wextra -Werror
SOURCES =  	srcs/main.c \
			srcs/init/init.c \
			srcs/init/create_root.c \
			srcs/init/init_pieces.c

OBJS	= ${SOURCES:.c=.o}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} ${INCLUDES}

all : $(NAME)

${NAME}: ${OBJS}
		${CC} ${CFLAGS} ${INCLUDES} ${OBJS} -o ${NAME}

$(DIR_O)/%.o: $(DIR_S)/%.c $(HEADER)/*.h
	@mkdir -p objs
	@$(CC) $(CFLAGS) -I $(HEADER) -o $@ -c $<
clean :
	@rm -f $(OBJS)
fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY:	clean fclean all re