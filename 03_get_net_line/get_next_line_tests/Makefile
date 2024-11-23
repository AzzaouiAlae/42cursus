flags	=	-Wall	-Wextra	-std=c99
f = -fsanitize=address
unity = Unity-master/src/unity.c
main = main.c 
Tests_fail_malloc = Tests_fail_malloc.c 
Tests_limit = test_limit.c

open:	compile
	./a.out
	./a.out -D BUFFER_SIZE=1
	./a.out -D BUFFER_SIZE=2
	./a.out -D BUFFER_SIZE=5
	./a.out -D BUFFER_SIZE=7
	./a.out -D BUFFER_SIZE=10
	./a.out -D BUFFER_SIZE=20
	./a.out -D BUFFER_SIZE=42
	./a.out -D BUFFER_SIZE=41
	./a.out -D BUFFER_SIZE=10000000
	./b.out
	./b.out -D BUFFER_SIZE=1
	./b.out -D BUFFER_SIZE=2
	./b.out -D BUFFER_SIZE=5
	./b.out -D BUFFER_SIZE=7
	./b.out -D BUFFER_SIZE=10
	./b.out -D BUFFER_SIZE=20
	./b.out -D BUFFER_SIZE=42
	./b.out -D BUFFER_SIZE=41
	./b.out -D BUFFER_SIZE=10000000
	./c.out -D BUFFER_SIZE=1
	./c.out -D BUFFER_SIZE=2
	./c.out -D BUFFER_SIZE=5
	./c.out -D BUFFER_SIZE=7
	./c.out -D BUFFER_SIZE=10
	./c.out -D BUFFER_SIZE=20
	./c.out -D BUFFER_SIZE=42
	./c.out -D BUFFER_SIZE=41
	./c.out -D BUFFER_SIZE=10000000

compile:	$(main) $(Tests_fail_malloc)
	@cc	$(f)	$(flags)	-I.	$(main)
	@cc	$(f)	$(flags)	-I.	$(Tests_fail_malloc) -o b.out
	@cc	$(f)	$(flags)	-I.	$(Tests_limit) -o c.out

clean:
	@rm -fr a.out

del:
	@rm -fr a.out