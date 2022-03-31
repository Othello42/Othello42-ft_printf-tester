

CC = 		gcc
CFLAGS =	-Wall -Wextra -Werror -Wno-everything

PROJECT =	../ft_printf/
SRC =		-L$(PROJECT) -lftprintf

# TEST_SRC =	strings_print.c
TEST_OUT =	test.out
TEST_FILES =	temp_printf \
				temp_printf_ret \
				temp_ft_printf \
				temp_ft_printf_ret \
				temp_leak_check \

MAN_START =		1
MAN_END =		84
BON_START =		100
BON_END =		209
TEST_START =	200
TEST_END =		209

all: header headman man headbon bon

m: header headman man

b: header headbon bon

t: header test

man:
	@number=$(MAN_START); while [[ $$number -le $(MAN_END) ]] ; do \
	$(CC) $(CFLAGS) frame.c -DFRAME=0 -DPROJECT='"$(PROJECT)"' -DTEST=$$number -o $(TEST_OUT) && ./$(TEST_OUT); \
	$(CC) -Wno-everything $(CFLAGS) string_print_printf.c $(SRC) -DFRAME=0 -DTEST=$$number -o $(TEST_OUT) && ./$(TEST_OUT) > temp_printf; \
	$(CC) string_print_ft_printf.c $(SRC) -DFRAME=0 -DTEST=$$number -o $(TEST_OUT) && ./$(TEST_OUT) > temp_ft_printf; \
	$(CC) $(CFLAGS) strings_compare.c -DFRAME=0 -DTEST=$$number -o $(TEST_OUT) && ./$(TEST_OUT); \
	((number = number + 1)) ; \
	done
	@rm $(TEST_FILES) $(TEST_OUT);

bon:
	@number=$(BON_START); while [[ $$number -le $(BON_END) ]] ; do \
	$(CC) $(CFLAGS) frame.c -DFRAME=0 -DPROJECT='"$(PROJECT)"' -DTEST=$$number -o $(TEST_OUT) && ./$(TEST_OUT); \
	$(CC) $(CFLAGS) string_print_printf.c $(SRC) -DFRAME=0 -DTEST=$$number -o $(TEST_OUT) && ./$(TEST_OUT) > temp_printf; \
	$(CC) $(CFLAGS) string_print_ft_printf.c $(SRC) -DFRAME=0 -DTEST=$$number -o $(TEST_OUT) && ./$(TEST_OUT) > temp_ft_printf; \
	$(CC) $(CFLAGS) strings_compare.c -DFRAME=0 -DTEST=$$number -o $(TEST_OUT) && ./$(TEST_OUT); \
	((number = number + 1)) ; \
	done
	@rm $(TEST_FILES) $(TEST_OUT);
	
test: header
	@number=$(TEST_START); while [[ $$number -le $(TEST_END) ]] ; do \
	$(CC) $(CFLAGS) frame.c -DFRAME=0 -DPROJECT='"$(PROJECT)"' -DTEST=$$number -o $(TEST_OUT) && ./$(TEST_OUT); \
	$(CC) -Wno-everything $(CFLAGS) string_print_printf.c $(SRC) -DFRAME=0 -DTEST=$$number -o $(TEST_OUT) && ./$(TEST_OUT) > temp_printf; \
	$(CC) $(CFLAGS) string_print_ft_printf.c $(SRC) -DFRAME=0 -DTEST=$$number -o $(TEST_OUT) && ./$(TEST_OUT) > temp_ft_printf; \
	$(CC) $(CFLAGS) strings_compare.c -DFRAME=0 -DTEST=$$number -o $(TEST_OUT) && ./$(TEST_OUT); \
	((number = number + 1)) ; \
	done
	@rm $(TEST_FILES) $(TEST_OUT);

header:
	@$(CC) $(CFLAGS) frame.c -DFRAME=1 -DPROJECT='"$(PROJECT)"' -DTEST=0 -o $(TEST_OUT) && ./$(TEST_OUT)
	@make -C $(PROJECT)

headman:
	@$(CC) $(CFLAGS) frame.c -DFRAME=2 -DPROJECT='"$(PROJECT)"' -DTEST=0 -o $(TEST_OUT) && ./$(TEST_OUT)

headbon:
	@$(CC) $(CFLAGS) frame.c -DFRAME=3 -DPROJECT='"$(PROJECT)"' -DTEST=0 -o $(TEST_OUT) && ./$(TEST_OUT)
	@make bonus -C $(PROJECT)
