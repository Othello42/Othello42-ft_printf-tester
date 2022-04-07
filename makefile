# SHELL :=	/bin/sh

CC = 		gcc
CFLAGS =	-Wall -Wextra -Werror

#adjust to the libftprintf.a and ft_printf.h directory location.
PROJECT =	../ft_printf/
SRC =		ftp_test_utils.c \
			-L$(PROJECT) -lftprintf
HEADER =	$(PROJECT)ft_printf.h

TEST_OUT =	test.out
TEST_FILES =	temp_printf \
				temp_printf_ret \
				temp_ft_printf \
				temp_ft_printf_ret \
				temp_leak_check \

MAN_START =		1
MAN_END =		86
BON_START =		100
BON_END =		249
#adjust to test specific parts, see h_test_strings.h for more information.
TEST_START =	225
TEST_END =		233

all: header headman man headbon bon

m: header headman man

b: header headbon bon

t: header test

man:
	@$(MAKE) START=$(MAN_START) END=$(MAN_END) testloop

bon:
	@$(MAKE) START=$(BON_START) END=$(BON_END) testloop

test:
	@$(MAKE) START=$(TEST_START) END=$(TEST_END) testloop

testloop:
ifdef START
ifdef END
	@number=$(START); while [[ $$number -le $(END) ]] ; do \
	$(CC) $(CFLAGS)					$(SRC) ftp_test_frame.c				-DTEST=$$number -DFRAME=0 -DPROJECT='"$(PROJECT)"'				-o $(TEST_OUT) && ./$(TEST_OUT); \
	$(CC) $(CFLAGS) -Wno-everything	$(SRC) ftp_test_string_print.c		-DTEST=$$number -DHEADER='"$(HEADER)"' -DPRINTER='printf'		-o $(TEST_OUT) && ./$(TEST_OUT) > temp_printf; \
	$(CC) $(CFLAGS)					$(SRC) ftp_test_string_print.c		-DTEST=$$number -DHEADER='"$(HEADER)"' -DPRINTER='ft_printf'	-o $(TEST_OUT) && ./$(TEST_OUT) > temp_ft_printf; \
	$(CC) $(CFLAGS)					$(SRC) ftp_test_strings_compare.c	-DTEST=$$number													-o $(TEST_OUT) && ./$(TEST_OUT); \
	((number = number + 1)) ; \
	done
	@rm $(TEST_FILES) $(TEST_OUT);
endif
endif

header:
	@$(CC) $(CFLAGS) ftp_test_frame.c -DFRAME=1 -DPROJECT='"$(PROJECT)"' -DTEST=0 -o $(TEST_OUT) && ./$(TEST_OUT)
	@make -C $(PROJECT)

headman:
	@$(CC) $(CFLAGS) ftp_test_frame.c -DFRAME=2 -DPROJECT='"$(PROJECT)"' -DTEST=0 -o $(TEST_OUT) && ./$(TEST_OUT)

headbon:
	@$(CC) $(CFLAGS) ftp_test_frame.c -DFRAME=3 -DPROJECT='"$(PROJECT)"' -DTEST=0 -o $(TEST_OUT) && ./$(TEST_OUT)
	@make bonus -C $(PROJECT)

.PHONY: all m man b bon t test testloop header headman headbon
