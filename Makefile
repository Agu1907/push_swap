CC = cc

SRC = error_utils.c \
		list_utils.c \
		misc_utils.c \
		main.c \
		push_actions.c \
		push_swap.c \
		put_index.c \
		radix_sort.c \
		reverse_rotate_actions.c \
		rotate_actions.c \
		selection_sort.c \
		string_utils.c \
		swap_actions.c \
		three_number_sort.c \
		arg_parse.c

all :
	$(CC) -g $(SRC) -o push_swap