
NAME = push_swap
BONUS = checker
CC = cc
RM = rm -f
FLAGS = -Wall -Werror -Wextra -Wno-nullability-completeness
LIBFT_FLAGS = -Wall -Werror -Wextra -Wno-nullability-completeness
LIBFTDIR = ./libft

SRC_1 = push_swap.c \

SRC_2 =	add_back.c \
		calculaterotate.c \
		check_arg_dup_sort.c \
		check_print_error.c \
		create_stack.c \
		free.c \
		list_args.c \
		operation1.c \
		operation2.c \
		operation3.c \
		parse.c \
		roateandpush.c \
		solving-utils-ab.c \
		solving-utils-ba.c \
		sort.c \
		sort3.c \
		utils1.c \
		utils2.c \

BONUS_SRC = /checker/checker.c \
			/checker/checker-utils.c \


OBJ_1 = ${SRC_1:.c=.o}
OBJ_2 = ${SRC_2:.c=.o}

BONUS_OBJ =${BONUS_SRC:.c=.o}

INCLUDE = -L ./libft -lft

libft:
	make -C $(LIBFTDIR) FLAGS="${LIBFT_FLAGS}"
.c.o:
	${CC} -c $< -o $@ $(FLAGS)

${NAME}: ${OBJ_1} ${OBJ_2} libft
	${CC} ${FLAGS} ${OBJ_1} ${OBJ_2} -o ${NAME} ${INCLUDE}

${BONUS}: ${OBJ_2} ${BONUS_OBJ} libft
	${CC} ${FLAGS} ${BONUS_OBJ} ${OBJ_2} -o ${BONUS} ${INCLUDE}

all: ${NAME} ${BONUS}

bonus: ${BONUS}

clean:
	${RM} ${OBJ_1} ${OBJ_2} ${BONUS_OBJ} ${NAME} ${BONUS}
	@cd $(LIBFTDIR) && $(MAKE) clean

fclean: clean
	${RM} ${NAME}
	${RM} ${BONUS}
	@cd $(LIBFTDIR) && $(MAKE) fclean

re: clean all

.PHONY: all clean fclean re bonus libft
