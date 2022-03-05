#ifndef TEST
	#define STRING		"No input found\n"
	#define ARGUMENTS
/* ====================================||==================================== *\
||																			  ||
||								   MANDATORY								  ||
||																			  ||
|| ====================================||==================================== ||
||																			  ||
||								  Basic Write								  ||
||								   Tests 1-4								  ||
||																			  ||
\* ============get_next_line===========||==============©Othello============== */
#elif TEST==1
	#define STRING		"Lorem Ipsum"
	#define ARGUMENTS	""
#elif TEST==2
	#define STRING		""
	#define ARGUMENTS	""
#elif TEST==3
	#define STRING		" !\"#$&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~"
	#define ARGUMENTS	""
#elif TEST==4
	#define STRING		"\t\n\r\v\f"
	#define ARGUMENTS	""
/* ====================================||==================================== *\
||																			  ||
||								 %c	Character								  ||
||								  Tests 5 - 6								  ||
||																			  ||
\* ============get_next_line===========||==============©Othello============== */
#elif TEST==5
	#define STRING		"%c%c%c%c%c%c%c%c%c%c%c%c%c"
	#define ARGUMENTS	, 'L', 'o', 'r', 'e', 'm', ' ', 'I', 'p', 's', 'u', 'm', '.', '\n'
#elif TEST==6
	#define STRING		"%c_%c_%c_%c_%c_%c_%c_%c-%c_%c_%c_"
	#define ARGUMENTS	, 'L', 'o' - 256, 'r' + 256, 3, 'm', '1', '2', '3', 0, 'm', '\n'
#elif TEST==7
	#define STRING		"%c %c %c %c "
	#define ARGUMENTS	, '\200', 'l', '\n', '\0'
/* ====================================||==================================== *\
||																			  ||
||								  %s	String								  ||
||								  Tests 8 - 12								  ||
||																			  ||
\* ============get_next_line===========||==============©Othello============== */
#elif TEST==8
	#define STRING		"%s"
	#define ARGUMENTS	, "Lorem Ipsum.\n"
#elif TEST==9
	#define STRING		"%s\n %s%s"
	#define ARGUMENTS	, "Lorem ", "ipsum", " dolor"
#elif TEST==10
	#define STRING		"%s\n %s%s"
	#define ARGUMENTS	, "Lorem\0 ", "ipsum", " dolor"
#elif TEST==11
	#define STRING		"%s"
	#define ARGUMENTS	, ""
#elif TEST==12
	#define STRING		"%s %s %s"
	#define ARGUMENTS	, "Lorem", NULL, "ipsum"
/* ====================================||==================================== *\
||																			  ||
||							%p	(void *) address							  ||
||								 Tests 13 - 21								  ||
||																			  ||
\* ============get_next_line===========||==============©Othello============== */
#elif TEST==13
	#define STRING		"%p"
	#define ARGUMENTS	, (void *)0x10c5c3f7b
#elif TEST==14
	#define STRING		"%p"
	#define ARGUMENTS	, (void *)0x7ffee6bdeaec
#elif TEST==15
	#define STRING		"%p"
	#define ARGUMENTS	, (void *)0x0
#elif TEST==16
	#define STRING		"%p"
	#define ARGUMENTS	, (void *)-1
#elif TEST==17
	#define STRING		"%p"
	#define ARGUMENTS	, (void *)0
#elif TEST==18
	#define STRING		"%p"
	#define ARGUMENTS	, (void *)1
#elif TEST==19
	#define STRING		"%p"
	#define ARGUMENTS	, (void *)42
#elif TEST==20
	#define STRING		"INT_MIN %p\tand INT_MAX %p"
	#define ARGUMENTS	, (void *)-2147483648, (void *)2147483647
#elif TEST==21
	#define STRING		"ULONG_MAX %p\tand -ULONG_MAX %p"
	#define ARGUMENTS	, (void *)4294967295, (void *)-4294967295
#elif TEST==22
	#define STRING		"%p"
	#define ARGUMENTS	, NULL
#elif TEST==23
	#define STRING		"%p%p %p"
	#define ARGUMENTS	, (void *)1, (void *)2, (void *)3
/* ====================================||==================================== *\
||																			  ||
||							%d	Decimal (base 10)							  ||
||								 Tests 22 - 32								  ||
||																			  ||
\* ============get_next_line===========||==============©Othello============== */
#elif TEST==24
	#define STRING		"%d"
	#define ARGUMENTS	, (int)-2147483648
#elif TEST==25
	#define STRING		"%d"
	#define ARGUMENTS	, -7
#elif TEST==26
	#define STRING		"%d"
	#define ARGUMENTS	, -1
#elif TEST==27
	#define STRING		"%d"
	#define ARGUMENTS	, -0
#elif TEST==28
	#define STRING		"%d"
	#define ARGUMENTS	, 0
#elif TEST==29
	#define STRING		"%d"
	#define ARGUMENTS	, 1
#elif TEST==30
	#define STRING		"%d"
	#define ARGUMENTS	, 7
#elif TEST==31
	#define STRING		"%d"
	#define ARGUMENTS	, 100
#elif TEST==32
	#define STRING		"%d"
	#define ARGUMENTS	, 00100
#elif TEST==33
	#define STRING		"%d"
	#define ARGUMENTS	, 2147483647
#elif TEST==34
	#define STRING		"%d %d"
	#define ARGUMENTS	, (int)4294967295, (int)9223372036854775807LL
/* ====================================||==================================== *\
||																			  ||
||							%i	Integer base 10								  ||
||								 Tests 33 - 43								  ||
||																			  ||
\* ============get_next_line===========||==============©Othello============== */
#elif TEST==33
	#define STRING		"%i"
	#define ARGUMENTS	, (int)-2147483648
#elif TEST==34
	#define STRING		"%i"
	#define ARGUMENTS	, -7
#elif TEST==35
	#define STRING		"%i"
	#define ARGUMENTS	, -1
#elif TEST==36
	#define STRING		"%i"
	#define ARGUMENTS	, -0
#elif TEST==37
	#define STRING		"%i"
	#define ARGUMENTS	, 0
#elif TEST==38
	#define STRING		"%i"
	#define ARGUMENTS	, 1
#elif TEST==39
	#define STRING		"%i"
	#define ARGUMENTS	, 7
#elif TEST==40
	#define STRING		"%i"
	#define ARGUMENTS	, 100
#elif TEST==41
	#define STRING		"%i"
	#define ARGUMENTS	, 00100
#elif TEST==42
	#define STRING		"%i"
	#define ARGUMENTS	, 2147483647
#elif TEST==43
	#define STRING		"%i %i"
	#define ARGUMENTS	, (int)4294967295, (int)9223372036854775807LL
/* ====================================||==================================== *\
||																			  ||
||						%u	Unsigned decimal (base 10)						  ||
||								 Tests 44 - 51								  ||
||																			  ||
\* ============get_next_line===========||==============©Othello============== */
#elif TEST==44
	#define STRING		"%u"
	#define ARGUMENTS	, 0
#elif TEST==45
	#define STRING		"%u"
	#define ARGUMENTS	, 1
#elif TEST==46
	#define STRING		"%u"
	#define ARGUMENTS	, -1
#elif TEST==47
	#define STRING		"%u"
	#define ARGUMENTS	, 100
#elif TEST==48
	#define STRING		"%u"
	#define ARGUMENTS	, (unsigned int)2147483648
#elif TEST==49
	#define STRING		"%u"
	#define ARGUMENTS	, (unsigned int)4294967295
#elif TEST==50
	#define STRING		"%u"
	#define ARGUMENTS	, (unsigned int)4294967296
#elif TEST==51
	#define STRING		"%u%u %u"
	#define ARGUMENTS	, 425, -890324, 245457435
/* ====================================||==================================== *\
||																			  ||
||							%x	Lowercase Hexadecimal						  ||
||								 Tests 52 - 61								  ||
||																			  ||
\* ============get_next_line===========||==============©Othello============== */
#elif TEST==52
	#define STRING		"%x"
	#define ARGUMENTS	, 0
#elif TEST==53
	#define STRING		"%x"
	#define ARGUMENTS	, 1
#elif TEST==54
	#define STRING		"%x"
	#define ARGUMENTS	, -1
#elif TEST==55
	#define STRING		"%x"
	#define ARGUMENTS	, 100
#elif TEST==56
	#define STRING		"%x"
	#define ARGUMENTS	, 0xFFF
#elif TEST==57
	#define STRING		"%x"
	#define ARGUMENTS	, 0x1000
#elif TEST==58
	#define STRING		"%x"
	#define ARGUMENTS	, (unsigned int)0xffffffff
#elif TEST==59
	#define STRING		"%x"
	#define ARGUMENTS	, (unsigned int)0x100000000
#elif TEST==60
	#define STRING		"%x"
	#define ARGUMENTS	, (unsigned int)-2147483648
#elif TEST==61
	#define STRING		"%x"
	#define ARGUMENTS	, (unsigned int)0xffffffffffffffff
/* ====================================||==================================== *\
||																			  ||
||							%X	Uppercase Hexadecimal						  ||
||								 Tests 62 - 71								  ||
||																			  ||
\* ============get_next_line===========||==============©Othello============== */
#elif TEST==62
	#define STRING		"%X"
	#define ARGUMENTS	, 0
#elif TEST==63
	#define STRING		"%X"
	#define ARGUMENTS	, 1
#elif TEST==64
	#define STRING		"%X"
	#define ARGUMENTS	, -1
#elif TEST==65
	#define STRING		"%X"
	#define ARGUMENTS	, 100
#elif TEST==66
	#define STRING		"%X"
	#define ARGUMENTS	, 0x100
#elif TEST==67
	#define STRING		"%X"
	#define ARGUMENTS	, 0xfff
#elif TEST==68
	#define STRING		"%X"
	#define ARGUMENTS	, (unsigned int)0xFFFFFFFF
#elif TEST==69
	#define STRING		"%X"
	#define ARGUMENTS	, (unsigned int)0x100000000
#elif TEST==70
	#define STRING		"%X"
	#define ARGUMENTS	, (unsigned int)-2147483648
#elif TEST==71
	#define STRING		"%X"
	#define ARGUMENTS	, (unsigned int)0xFFFFFFFFFFFFFFFF
/* ====================================||==================================== *\
||																			  ||
||								  %%		%								  ||
||								 Tests 72 - 73								  ||
||																			  ||
\* ============get_next_line===========||==============©Othello============== */
#elif TEST==72
	#define STRING		"%%%%%%Lorem%%%%Ipsum%%"
	#define ARGUMENTS	
#elif TEST==73
	#define STRING		"%%"
	#define ARGUMENTS	
/* ====================================||==================================== *\
||																			  ||
||								Miscellaneous								  ||
||								Tests 74 - 76								  ||
||																			  ||
\* ============get_next_line===========||==============©Othello============== */	
#elif TEST==74
	#define STRING		"%s%s%s"
	#define ARGUMENTS	, "Lorem", "\0", "ipsum"
#elif TEST==75
	#define STRING		"%s%c%s"
	#define ARGUMENTS	, "Lorem", 0, "ipsum"
#elif TEST==76
	#define STRING		"%x is this test"
	#define ARGUMENTS	, 10
/* ====================================||==================================== *\
||																			  ||
||									 BONUS									  ||
||																			  ||
|| ====================================||==================================== ||
||																			  ||
||						%-#c	Left Alligned							  ||
||								Tests 100 - 108								  ||
||																			  ||
\* ============get_next_line===========||==============©Othello============== */
#elif TEST==100
	#define STRING		"%-42c"
	#define ARGUMENTS	, 'L'
#elif TEST==101
	#define STRING		"%-1c"
	#define ARGUMENTS	, 'L'
/* ====================================||==================================== *\
\* ============get_next_line===========||==============©Othello============== */
#elif TEST==102
	#define STRING		"%-11s"
	#define ARGUMENTS	, "Lorem ipsum"
#elif TEST==103
	#define STRING		"%-42s"
	#define ARGUMENTS	, "Lorem ipsum"
#elif TEST==104
	#define STRING		"%-5s"
	#define ARGUMENTS	, "Lorem ipsum"
/* ====================================||==================================== *\
\* ============get_next_line===========||==============©Othello============== */
#elif TEST==105
	#define STRING		"%-9i"
	#define ARGUMENTS	, 123456789
#elif TEST==106
	#define STRING		"%-42i"
	#define ARGUMENTS	, 123456789
#elif TEST==107
	#define STRING		"%-5i"
	#define ARGUMENTS	, 123456789
/* ====================================||==================================== *\
\* ============get_next_line===========||==============©Othello============== */
#elif TEST==108
	#define STRING		"combined"
	#define ARGUMENTS	
/* ====================================||==================================== *\
||																			  ||
||							%0c	Zero Padding 						  ||
||								Tests 109 - 112								  ||
||																			  ||
\* ============get_next_line===========||==============©Othello============== */
#elif TEST==109
	#define STRING		"%042i"
	#define ARGUMENTS	, 42
#elif TEST==110
	#define STRING		"%02i"
	#define ARGUMENTS	, 42
#elif TEST==111
	#define STRING		"%01i"
	#define ARGUMENTS	, 42
#elif TEST==112
	#define STRING		"%0i"
	#define ARGUMENTS	, 42
/* ====================================||==================================== *\
||																			  ||
||							%.#c	Max Field Width						  ||
||								Tests 113 - 115								  ||
||																			  ||
\* ============get_next_line===========||==============©Othello============== */
#elif TEST==113
	#define STRING		"%.11s"
	#define ARGUMENTS	, "Lorem Ipsum"
#elif TEST==114
	#define STRING		"%.42s"
	#define ARGUMENTS	, "Lorem Ipsum"
#elif TEST==115
	#define STRING		"%.5s"
	#define ARGUMENTS	, "Lorem Ipsum"
#elif TEST==116
	#define STRING		"%.0s"
	#define ARGUMENTS	, "Lorem Ipsum"
#elif TEST==117
	#define STRING		"%.s"
	#define ARGUMENTS	, "Lorem Ipsum"
/* ====================================||==================================== *\
\* ============get_next_line===========||==============©Othello============== */
#elif TEST==118
	#define STRING		"%.5i"
	#define ARGUMENTS	, 42
#elif TEST==119
	#define STRING		"%.5i"
	#define ARGUMENTS	, 424242
/* ====================================||==================================== *\
||																			  ||
||							%#c	Min Field Width						  ||
||								Tests 100-110								  ||
||																			  ||
\* ============get_next_line===========||==============©Othello============== */
#elif TEST==120
	#define STRING		"%42c"
	#define ARGUMENTS	, 'L'
#elif TEST==121
	#define STRING		"%1c"
	#define ARGUMENTS	, 'L'
#elif TEST==122
	#define STRING		"%42c"
	#define ARGUMENTS	, '\0'
/* ====================================||==================================== *\
\* ============get_next_line===========||==============©Othello============== */
#elif TEST==123
	#define STRING		"%11s"
	#define ARGUMENTS	, "Lorem ipsum"
#elif TEST==124
	#define STRING		"%42s"
	#define ARGUMENTS	, "Lorem ipsum"
#elif TEST==125
	#define STRING		"%5s"
	#define ARGUMENTS	, "Lorem ipsum"
/* ====================================||==================================== *\
\* ============get_next_line===========||==============©Othello============== */
#elif TEST==126
	#define STRING		"%42i"
	#define ARGUMENTS	, 123456789
#elif TEST==127
	#define STRING		"%9i"
	#define ARGUMENTS	, 123456789
#elif TEST==128
	#define STRING		"%5i"
	#define ARGUMENTS	, 123456789
#elif TEST==129
	#define STRING		"%0i"
	#define ARGUMENTS	, 123456789
/* ====================================||==================================== *\
\* ============get_next_line===========||==============©Othello============== */
#elif TEST==130
	#define STRING		"%11c%11s%10i%1c%3s"
	#define ARGUMENTS	, 'L', "orem ", 123, 'i', "psum "
/* ====================================||==================================== *\
||																			  ||
||									%' '									  ||
||								Tests 120 - 125								  ||
||																			  ||
\* ============get_next_line===========||==============©Othello============== */
#elif TEST==131
	#define STRING		"% i"
	#define ARGUMENTS	, 42
#elif TEST==132
	#define STRING		"% i"
	#define ARGUMENTS	, -42
#elif TEST==133
	#define STRING		"%     i"
	#define ARGUMENTS	, 42
#elif TEST==134
	#define STRING		"%     i"
	#define ARGUMENTS	, -42
#elif TEST==135
	#define STRING		"%%% %%% %% %%"
	#define ARGUMENTS	
/* ====================================||==================================== *\
||																			  ||
||								%+											  ||
||								Tests 126 - 127								  ||
||																			  ||
\* ============get_next_line===========||==============©Othello============== */
#elif TEST==136
	#define STRING		"%+i"
	#define ARGUMENTS	, 42
#elif TEST==137
	#define STRING		"%+i"
	#define ARGUMENTS	, -42
/* ====================================||==================================== *\
||																			  ||
||							%#.#s	Limited Spaced STRING					  ||
||								Tests 114 - 117								  ||
||																			  ||
\* ============get_next_line===========||==============©Othello============== */
#elif TEST==138
	#define STRING		"%42.5s"
	#define ARGUMENTS	, "Lorem Ipsum"
#elif TEST==139
	#define STRING		"%5.11s"
	#define ARGUMENTS	, "Lorem Ipsum"
#elif TEST==140
	#define STRING		"%11.5s"
	#define ARGUMENTS	, "Lorem Ipsum"
#elif TEST==141
	#define STRING		"%-11.5s"
	#define ARGUMENTS	, "Lorem Ipsum"
#elif TEST==142
	#define STRING		"%-42.5s"
	#define ARGUMENTS	, "Lorem Ipsum"
#elif TEST==143
	#define STRING		"%42.21i"
	#define ARGUMENTS	, 42
#elif TEST==144
	#define STRING		"%042.21i"
	#define ARGUMENTS	, 42
#elif TEST==145
	#define STRING		"%42.021i"
	#define ARGUMENTS	, 42
// #elif TEST==122
// 	#define STRING		"%042.21s"
// 	#define ARGUMENTS	, "Lorem Ipsum"
#elif TEST==145
	#define STRING		"%42.021s"
	#define ARGUMENTS	, "Lorem Ipsum"
/* ====================================||==================================== *\
||																			  ||
||																			  ||
||								Tests 118									  ||
||																			  ||
\* ============get_next_line===========||==============©Othello============== */
#elif TEST==146
	#define STRING		"%11.s"
	#define ARGUMENTS	, "Lorem Ipsum"
/* ====================================||==================================== *\
||																			  ||
||									%#										  ||
||								Tests 119									  ||
||																			  ||
\* ============get_next_line===========||==============©Othello============== */
// #elif TEST==119
// 	#define STRING		"%#s\n"
// 	#define ARGUMENTS	, 42



#elif TEST==147
	#define STRING		"% -42i"
	#define ARGUMENTS	, 42


#elif TEST==999
	#define STRING		"%c is %character.\n%s is string.\n%i is digit.\n"
	#define ARGUMENTS	, 'c', c, str, val
#else
	#define STRING		"Incorrect input found for test %d\n"
	#define ARGUMENTS	, TEST
#endif