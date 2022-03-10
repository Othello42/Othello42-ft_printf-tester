

CC = 		gcc
CFLAGS =	-Wall -Wextra -Werror

PROJECT =	../ft_printf/
SRC =		-L$(PROJECT) -lftprintf

TEST_SRC =	strings_print.c
TEST_FILES =	temp_dprintf \
				temp_dprintf_ret \
				temp_ft_printf \
				temp_ft_printf_ret \

MAN_START =		1
MAN_END =		74
BON_START =		100
BON_END =		159
TEST_START =	113
TEST_END =		123

all: header headman man headbon bon

m: header headman man

b: header headbon bon

t: header test

man:
	@number=$(MAN_START); while [[ $$number -le $(MAN_END) ]] ; do \
	$(CC) $(CFLAGS) frame.c -DFRAME=0 -DTEST=$$number && ./a.out; \
	$(CC) $(CFLAGS) $(TEST_SRC) $(SRC) -DFRAME=0 -DTEST=$$number && ./a.out > temp_ft_printf; \
	$(CC) $(CFLAGS) strings_compare.c -DFRAME=0 -DTEST=$$number && ./a.out; \
	((number = number + 1)) ; \
	done
	@rm $(TEST_FILES);
	@rm a.out;

bon:
	@number=$(BON_START); while [[ $$number -le $(BON_END) ]] ; do \
	$(CC) $(CFLAGS) frame.c -DFRAME=0 -DTEST=$$number && ./a.out; \
	$(CC) $(CFLAGS) $(TEST_SRC) $(SRC) -DFRAME=0 -DTEST=$$number && ./a.out > temp_ft_printf; \
	$(CC) $(CFLAGS) strings_compare.c -DFRAME=0 -DTEST=$$number && ./a.out; \
	((number = number + 1)) ; \
	done
	@rm $(TEST_FILES);
	@rm a.out;
	
test: header
	@number=$(TEST_START); while [[ $$number -le $(TEST_END) ]] ; do \
	$(CC) $(CFLAGS) frame.c -DFRAME=0 -DTEST=$$number && ./a.out; \
	$(CC) $(TEST_SRC) $(SRC) -DFRAME=0 -DTEST=$$number && ./a.out > temp_ft_printf; \
	$(CC) $(CFLAGS) strings_compare.c -DFRAME=0 -DTEST=$$number && ./a.out; \
	((number = number + 1)) ; \
	done
	@rm $(TEST_FILES);
	@rm a.out;

header:
	@$(CC) $(CFLAGS) frame.c -DFRAME=1 -DTEST=0 && ./a.out
	@make -C $(PROJECT)

headman:
	@$(CC) $(CFLAGS) frame.c -DFRAME=2 -DTEST=0 && ./a.out

headbon:
	@$(CC) $(CFLAGS) frame.c -DFRAME=3 -DTEST=0 && ./a.out
	@make bonus -C $(PROJECT)

quick:
	$(CC) $(CFLAGS) test.c -L. -libftprintf && ./a.out