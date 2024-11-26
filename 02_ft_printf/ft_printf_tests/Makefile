flags	=	-Wall	-Werror	-Wextra	-std=c99

f = -fsanitize=address
unity = Unity-master/src/unity.c

SRC = $(wildcard ../ft_printf/*.c)
SRC_libft = $(wildcard ../ft_printf/libft/*.c) 
OBJS:= $(SRC:%.c=%.o)
OBJS_libft:= $(SRC:%.c=%.o)

open:	compile1 clean
	@./a.out

libft:	compile2 clean
	@./a.out

s:
	@./a.out | grep --text -n ":FAIL:"

compile1:	unity	$(OBJS)
	@cc	$(flags) $(f)	-I. $(OBJS)	unity.o main.c

compile2:	unity	$(OBJS_libft)	$(OBJS)
	@cc	$(flags) $(f)	-I.	$(OBJS_libft) $(OBJS)	unity.o	main.c

unity:
	@cc 	-c	$(unity)	-o unity.o

clean:
	@rm	-fr	$(OBJS_libft) $(OBJS)

del:
	@rm -fr a.out
