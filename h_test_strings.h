#include	<limits.h>
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
||								   Tests 1-5								  ||
||																			  ||
\* ==============ft_printf=============||==============©Othello============== */
#elif TEST==1
	#define STRING		"L"
	#define ARGUMENTS	""
#elif TEST==2
	#define STRING		"Lorem Ipsum"
	#define ARGUMENTS	""
#elif TEST==3
	#define STRING		""
	#define ARGUMENTS	""
#elif TEST==4
	#define STRING		" !\"#$&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~"
	#define ARGUMENTS	""
#elif TEST==5
	#define STRING		"\t\n\r\v\f"
	#define ARGUMENTS	""
/* ====================================||==================================== *\
||																			  ||
||								 %c	Character								  ||
||								  Tests 6 - 9								  ||
||																			  ||
\* ==============ft_printf=============||==============©Othello============== */
#elif TEST==6
	#define STRING		"%c"
	#define ARGUMENTS	, 'L'
#elif TEST==7
	#define STRING		"%c%c%c%c%c%c%c%c%c%c%c%c%c"
	#define ARGUMENTS	, 'L', 'o', 'r', 'e', 'm', ' ', 'I', 'p', 's', 'u', 'm', '.', '\n'
#elif TEST==8
	#define STRING		"%c_%c_%c_%c_%c_%c_%c_%c-%c_%c_%c_"
	#define ARGUMENTS	, 'L', 'o' - 256, 'r' + 256, 3, 'm', '1', '2', '3', 0, 'm', '\n'
#elif TEST==9
	#define STRING		"%c %c %c %c "
	#define ARGUMENTS	, '\200', 'l', '\n', '\0'
/* ====================================||==================================== *\
||																			  ||
||								  %s	String								  ||
||								  Tests 10 - 17								  ||
||																			  ||
\* ==============ft_printf=============||==============©Othello============== */
#elif TEST==10
	#define STRING		"%s"
	#define ARGUMENTS	, "Lorem ipsum\n"
#elif TEST==11
	#define STRING		"Lorem %s"
	#define ARGUMENTS	, "ipsum\n"
#elif TEST==12
	#define STRING		"%s ipsum\n"
	#define ARGUMENTS	, "ipsum\n"
#elif TEST==13
	#define STRING		"%s\n %s%s"
	#define ARGUMENTS	, "Lorem ", "ipsum", " dolor"
#elif TEST==14
	#define STRING		"%s\n %s%s"
	#define ARGUMENTS	, "Lorem\0 ", "ipsum", " dolor"
#elif TEST==15
	#define STRING		"%s%s%s"
	#define ARGUMENTS	, "Lorem", "\0", "ipsum"
#elif TEST==16
	#define STRING		"%s"
	#define ARGUMENTS	, ""
#elif TEST==17
	#define STRING		"%s %s %s %s"
	#define ARGUMENTS	, "Lorem", NULL, "", "ipsum"
/* ====================================||==================================== *\
||																			  ||
||							%p	(void *) address							  ||
||								 Tests 18 - 28								  ||
||																			  ||
\* ==============ft_printf=============||==============©Othello============== */
#elif TEST==18
	#define STRING		"%p"
	#define ARGUMENTS	, (void *)0x10c5c3f7b
#elif TEST==19
	#define STRING		"%p"
	#define ARGUMENTS	, (void *)0x7ffee6bdeaec
#elif TEST==20
	#define STRING		"%p"
	#define ARGUMENTS	, (void *)0x0
#elif TEST==21
	#define STRING		"%p"
	#define ARGUMENTS	, (void *)-1
#elif TEST==22
	#define STRING		"%p"
	#define ARGUMENTS	, (void *)0
#elif TEST==23
	#define STRING		"%p"
	#define ARGUMENTS	, (void *)1
#elif TEST==24
	#define STRING		"%p"
	#define ARGUMENTS	, (void *)42
#elif TEST==25
	#define STRING		"%p"
	#define ARGUMENTS	, NULL
#elif TEST==26
	#define STRING		"INT_MIN %p\tand INT_MAX %p"
	#define ARGUMENTS	, (void *)INT_MIN, (void *)INT_MAX
#elif TEST==27
	#define STRING		"\nUINT_MAX %p\tand\t-UINT_MAX %p\nLONG_MIN %p\tand\tLONG_MAX %p\nULONG_MAX %p\tand\t-ULONG_MAX %p\n"
	#define ARGUMENTS	, (void *)UINT_MAX, (void *)-UINT_MAX, (void *)LONG_MIN, (void *)LONG_MAX, (void *)ULONG_MAX, (void *)-ULONG_MAX
#elif TEST==28
	#define STRING		"%p%p %p"
	#define ARGUMENTS	, (void *)1, (void *)2, (void *)3
/* ====================================||==================================== *\
||																			  ||
||							%d	Decimal (base 10)							  ||
||								 Tests 29 - 38								  ||
||																			  ||
\* ==============ft_printf=============||==============©Othello============== */
#elif TEST==29
	#define STRING		"%d"
	#define ARGUMENTS	, INT_MIN
#elif TEST==30
	#define STRING		"%d"
	#define ARGUMENTS	, -1000
#elif TEST==31
	#define STRING		"%d"
	#define ARGUMENTS	, -42
#elif TEST==32
	#define STRING		"%d"
	#define ARGUMENTS	, -1
#elif TEST==33
	#define STRING		"%d"
	#define ARGUMENTS	, 0
#elif TEST==34
	#define STRING		"%d"
	#define ARGUMENTS	, 1
#elif TEST==35
	#define STRING		"%d"
	#define ARGUMENTS	, 42
#elif TEST==36
	#define STRING		"%d"
	#define ARGUMENTS	, 1000
#elif TEST==37
	#define STRING		"%d"
	#define ARGUMENTS	, INT_MAX
#elif TEST==38
	#define STRING		"\nINT_MIN - 1 %d\tand\tINT_MAX + 1 %d\nUINT_MAX %d\tand\t-UINT_MAX %d\nLONG_MIN %d\tand\tLONG_MAX %d\nULONG_MAX %d\tand\t-ULONG_MAX %d\n"
	#define ARGUMENTS	, INT_MIN - 1, INT_MAX + 1, UINT_MAX, -UINT_MAX, LONG_MIN, LONG_MAX, ULONG_MAX, -ULONG_MAX
/* ====================================||==================================== *\
||																			  ||
||							%i	Integer base 10								  ||
||								 Tests 39 - 48								  ||
||																			  ||
\* ==============ft_printf=============||==============©Othello============== */
#elif TEST==39
	#define STRING		"%i"
	#define ARGUMENTS	, INT_MIN
#elif TEST==40
	#define STRING		"%i"
	#define ARGUMENTS	, -1000
#elif TEST==41
	#define STRING		"%i"
	#define ARGUMENTS	, -42
#elif TEST==42
	#define STRING		"%i"
	#define ARGUMENTS	, -1
#elif TEST==43
	#define STRING		"%i"
	#define ARGUMENTS	, 0
#elif TEST==44
	#define STRING		"%i"
	#define ARGUMENTS	, 1
#elif TEST==45
	#define STRING		"%i"
	#define ARGUMENTS	, 42
#elif TEST==46
	#define STRING		"%i"
	#define ARGUMENTS	, 1000
#elif TEST==47
	#define STRING		"%i"
	#define ARGUMENTS	, INT_MAX
#elif TEST==48
	#define STRING		"\nINT_MIN - 1 %i\tand\tINT_MAX + 1 %i\nUINT_MAX %i\tand\t-UINT_MAX %i\nLONG_MIN %i\tand\tLONG_MAX %i\nULONG_MAX %i\tand\t-ULONG_MAX %i\n"
	#define ARGUMENTS	, INT_MIN - 1, INT_MAX + 1, UINT_MAX, -UINT_MAX, LONG_MIN, LONG_MAX, ULONG_MAX, -ULONG_MAX
/* ====================================||==================================== *\
||																			  ||
||						%u	Unsigned decimal (base 10)						  ||
||								 Tests 49 - 58								  ||
||																			  ||
\* ==============ft_printf=============||==============©Othello============== */
#elif TEST==49
	#define STRING		"%u"
	#define ARGUMENTS	, INT_MIN
#elif TEST==50
	#define STRING		"%u"
	#define ARGUMENTS	, -1000
#elif TEST==51
	#define STRING		"%u"
	#define ARGUMENTS	, -42
#elif TEST==52
	#define STRING		"%u"
	#define ARGUMENTS	, -1
#elif TEST==53
	#define STRING		"%u"
	#define ARGUMENTS	, 0
#elif TEST==54
	#define STRING		"%u"
	#define ARGUMENTS	, 1
#elif TEST==55
	#define STRING		"%u"
	#define ARGUMENTS	, 42
#elif TEST==56
	#define STRING		"%u"
	#define ARGUMENTS	, 1000
#elif TEST==57
	#define STRING		"%u"
	#define ARGUMENTS	, INT_MAX
#elif TEST==58
	#define STRING		"\nINT_MIN - 1 %u\tand\tINT_MAX + 1 %u\nUINT_MAX %u\tand\t-UINT_MAX %u\nLONG_MIN %u\tand\tLONG_MAX %u\nULONG_MAX %u\tand\t-ULONG_MAX %u\n"
	#define ARGUMENTS	, INT_MIN - 1, INT_MAX + 1, UINT_MAX, -UINT_MAX, LONG_MIN, LONG_MAX, ULONG_MAX, -ULONG_MAX
/* ====================================||==================================== *\
||																			  ||
||							%x	Lowercase Hexadecimal						  ||
||								 Tests 59 - 68								  ||
||																			  ||
\* ==============ft_printf=============||==============©Othello============== */
#elif TEST==59
	#define STRING		"%x"
	#define ARGUMENTS	, INT_MIN
#elif TEST==60
	#define STRING		"%x"
	#define ARGUMENTS	, -1000
#elif TEST==61
	#define STRING		"%x"
	#define ARGUMENTS	, -42
#elif TEST==62
	#define STRING		"%x"
	#define ARGUMENTS	, -1
#elif TEST==63
	#define STRING		"%x"
	#define ARGUMENTS	, 0
#elif TEST==64
	#define STRING		"%x"
	#define ARGUMENTS	, 1
#elif TEST==65
	#define STRING		"%x"
	#define ARGUMENTS	, 42
#elif TEST==66
	#define STRING		"%x"
	#define ARGUMENTS	, 11259375
#elif TEST==67
	#define STRING		"%x"
	#define ARGUMENTS	, INT_MAX
#elif TEST==68
	#define STRING		"\nINT_MIN - 1 %x\tand\tINT_MAX + 1 %x\nUINT_MAX %x\tand\t-UINT_MAX %x\nLONG_MIN %x\tand\tLONG_MAX %x\nULONG_MAX %x\tand\t-ULONG_MAX %x\n"
	#define ARGUMENTS	, INT_MIN - 1, INT_MAX + 1, UINT_MAX, -UINT_MAX, LONG_MIN, LONG_MAX, ULONG_MAX, -ULONG_MAX
/* ====================================||==================================== *\
||																			  ||
||							%X	Uppercase Hexadecimal						  ||
||								 Tests 69 - 78								  ||
||																			  ||
\* ==============ft_printf=============||==============©Othello============== */
#elif TEST==69
	#define STRING		"%X"
	#define ARGUMENTS	, INT_MIN
#elif TEST==70
	#define STRING		"%X"
	#define ARGUMENTS	, -1000
#elif TEST==71
	#define STRING		"%X"
	#define ARGUMENTS	, -42
#elif TEST==72
	#define STRING		"%X"
	#define ARGUMENTS	, -1
#elif TEST==73
	#define STRING		"%X"
	#define ARGUMENTS	, 0
#elif TEST==75
	#define STRING		"%X"
	#define ARGUMENTS	, 1
#elif TEST==75
	#define STRING		"%X"
	#define ARGUMENTS	, 42
#elif TEST==76
	#define STRING		"%X"
	#define ARGUMENTS	, 11259375
#elif TEST==77
	#define STRING		"%X"
	#define ARGUMENTS	, INT_MAX
#elif TEST==78
	#define STRING		"\nINT_MIN - 1 %X\tand\tINT_MAX + 1 %X\nUINT_MAX %X\tand\t-UINT_MAX %X\nLONG_MIN %X\tand\tLONG_MAX %X\nULONG_MAX %X\tand\t-ULONG_MAX %X\n"
	#define ARGUMENTS	, INT_MIN - 1, INT_MAX + 1, UINT_MAX, -UINT_MAX, LONG_MIN, LONG_MAX, ULONG_MAX, -ULONG_MAX
/* ====================================||==================================== *\
||																			  ||
||								  %%		%								  ||
||								 Tests 79 - 82								  ||
||																			  ||
\* ==============ft_printf=============||==============©Othello============== */
#elif TEST==79
	#define STRING		"%%"
	#define ARGUMENTS	
#elif TEST==80
	#define STRING		"%% %%"
	#define ARGUMENTS	
#elif TEST==81
	#define STRING		"%%%%%%"
	#define ARGUMENTS	
#elif TEST==82
	#define STRING		"%%%%%%Lorem%%%%Ipsum%%"
	#define ARGUMENTS	
/* ====================================||==================================== *\
||																			  ||
||								Miscellaneous								  ||
||								Tests 83 - 84								  ||
||																			  ||
\* ==============ft_printf=============||==============©Othello============== */
#elif TEST==83
	#define STRING		"%s%c%s"
	#define ARGUMENTS	, "Lorem", 0, "ipsum"
#elif TEST==84
	#define STRING		"%c%sipsum %p dolor %d sit %i amet, %u consectetur %x adipiscing %X elit. %%\n"
	#define ARGUMENTS	, 'L', "orem ", 1, 22, 333, 4444, 5555, 66666
/* ====================================||==================================== *\
||																			  ||
||									 BONUS									  ||
||																			  ||
|| ====================================||==================================== ||
||																			  ||
||								%0i	Zero Padded								  ||
||								Tests 109 - 112								  ||
||																			  ||
\* ==============ft_printf=============||==============©Othello============== */
#elif TEST==100
	#define STRING		"%04i"
	#define ARGUMENTS	, 0
#elif TEST==101
	#define STRING		"%01i"
	#define ARGUMENTS	, 42
#elif TEST==102
	#define STRING		"%02i"
	#define ARGUMENTS	, 42
#elif TEST==103
	#define STRING		"%08i"
	#define ARGUMENTS	, 42
#elif TEST==104
	#define STRING		"%09001i"
	#define ARGUMENTS	, 42
#elif TEST==105
	#define STRING		"%02i"
	#define ARGUMENTS	, -42
#elif TEST==106
	#define STRING		"%08i"
	#define ARGUMENTS	, -42
#elif TEST==107
	#define STRING		"\nINT_MIN   %016i\tand\tINT_MAX    %016i\nUINT_MAX  %016i\tand\t-UINT_MAX  %016i\nLONG_MIN  %016i\tand\tLONG_MAX   %016i\nULONG_MAX %016i\tand\t-ULONG_MAX %016i\n"
	#define ARGUMENTS	, INT_MIN, INT_MAX, UINT_MAX, -UINT_MAX, LONG_MIN, LONG_MAX, ULONG_MAX, -ULONG_MAX
/* ====================================||==================================== *\
\* ==============ft_printf=============||==============©Othello============== */
#elif TEST==108
	#define STRING		"%0d\t%01d\t%02d\t%03d\t%012d\t\t%0d\t%02d\t%03d\t%04d\t%012d\t"
	#define ARGUMENTS	, 42, 42, 42, 42, 42, -42, -42, -42, -42, -42
#elif TEST==109
	#define STRING		"%0i\t%01i\t%02i\t%03i\t%012i\t\t%0i\t%02i\t%03i\t%04i\t%012i\t"
	#define ARGUMENTS	, 42, 42, 42, 42, 42, -42, -42, -42, -42, -42
#elif TEST==110
	#define STRING		"%0u\t%01u\t%02u\t%03u\t%012u\t\t%0u\t%02u\t%03u\t%04u\t%012u\t"
	#define ARGUMENTS	, 42, 42, 42, 42, 42, -42, -42, -42, -42, -42
#elif TEST==111
	#define STRING		"%0x\t%01x\t%02x\t%03x\t%012x\t\t%0x\t%02x\t%03x\t%04x\t%012x\t"
	#define ARGUMENTS	, 42, 42, 42, 42, 42, -42, -42, -42, -42, -42
#elif TEST==112
	#define STRING		"%0X\t%01X\t%02X\t%03X\t%012X\t\t%0X\t%02X\t%03X\t%04X\t%012X\t"
	#define ARGUMENTS	, 42, 42, 42, 42, 42, -42, -42, -42, -42, -42
#elif TEST==113
	#define STRING		"%0p\t%01p\t%02p\t%03p\t%012p\t\t%0p\t%02p\t%03p\t%04p\t%012p\t"
	#define ARGUMENTS	, (void *)42, (void *)42, (void *)42, (void *)42, (void *)42, (void *)-42, (void *)-42, (void *)-42, (void *)-42, (void *)-42
#elif TEST==114
	#define STRING		"%04s\t%05s\t%06s"
	#define ARGUMENTS	, "Lorem", "ipsum", "dolor"
#elif TEST==115
	#define STRING		"L%02c%01c%0c"
	#define ARGUMENTS	, 'r', 'e', 'm'
#elif TEST==116
	#define STRING		"L%02%%01%%0%"
	#define ARGUMENTS	
/* ====================================||==================================== *\
||																			  ||
||							  %-[#]c	Left Adjusted						  ||
||								Tests 100 - 108								  ||
||																			  ||
\* ==============ft_printf=============||==============©Othello============== */
#elif TEST==116
	#define STRING		"%-42c"
	#define ARGUMENTS	, 'L'
#elif TEST==117
	#define STRING		"%-1c"
	#define ARGUMENTS	, 'L'
#elif TEST==118
	#define STRING		"%-42c"
	#define ARGUMENTS	, 0
/* ====================================||==================================== *\
\* ==============ft_printf=============||==============©Othello============== */
#elif TEST==119
	#define STRING		"%-11s"
	#define ARGUMENTS	, "Lorem ipsum"
#elif TEST==120
	#define STRING		"%-42s"
	#define ARGUMENTS	, "Lorem ipsum"
#elif TEST==121
	#define STRING		"%-5s"
	#define ARGUMENTS	, "Lorem ipsum"
/* ====================================||==================================== *\
\* ==============ft_printf=============||==============©Othello============== */
#elif TEST==122
	#define STRING		"%-2i"
	#define ARGUMENTS	, 42
#elif TEST==123
	#define STRING		"%-42i"
	#define ARGUMENTS	, 42
#elif TEST==124
	#define STRING		"%-1i"
	#define ARGUMENTS	, 42
#elif TEST==125
	#define STRING		"%-5i"
	#define ARGUMENTS	, -42
/* ====================================||==================================== *\
\* ==============ft_printf=============||==============©Othello============== */
#elif TEST==126
	#define STRING		"%-d\t%-1d\t%-2d\t%-16d\t\t%-d\t%-2d\t%-3d\t%-16d\t"
	#define ARGUMENTS	, 42, 42, 42, 42, -42, -42, -42, -42
#elif TEST==127	
	#define STRING		"%-i\t%-1i\t%-2i\t%-16i\t\t%-i\t%-2i\t%-3i\t%-16i\t"
	#define ARGUMENTS	, 42, 42, 42, 42, -42, -42, -42, -42
#elif TEST==128	
	#define STRING		"%-u\t%-1u\t%-2u\t%-16u\t\t%-u\t%-2u\t%-3u\t%-16u\t"
	#define ARGUMENTS	, 42, 42, 42, 42, -42, -42, -42, -42
#elif TEST==129	
	#define STRING		"%-x\t%-1x\t%-2x\t%-16x\t\t%-x\t%-2x\t%-3x\t%-16x\t"
	#define ARGUMENTS	, 42, 42, 42, 42, -42, -42, -42, -42
#elif TEST==130	
	#define STRING		"%-X\t%-1X\t%-2X\t%-16X\t\t%-X\t%-2X\t%-3X\t%-16X\t"
	#define ARGUMENTS	, 42, 42, 42, 42, -42, -42, -42, -42
#elif TEST==131	
	#define STRING		"%-p\t%-1p\t%-2p\t%-16p\t\t%-p\t%-2p\t%-3p\t%-16p\t"
	#define ARGUMENTS	, (void *)42, (void *)42, (void *)42, (void *)42, (void *)-42, (void *)-42, (void *)-42, (void *)-42
#elif TEST==132
	#define STRING		"%-4s %-5s %-6s"
	#define ARGUMENTS	, "Lorem", "ipsum", "dolor"
#elif TEST==133
	#define STRING		"%-2c %-1c %-cem"
	#define ARGUMENTS	, 'L', 'o', 'r'
#elif TEST==134
	#define STRING		"%-2% %-1% %-%em"
	#define ARGUMENTS	
/* ====================================||==================================== *\
||																			  ||
||							   %[#]c	Field Width							  ||
||								Tests 100-110								  ||
||																			  ||
\* ==============ft_printf=============||==============©Othello============== */
#elif TEST==135
	#define STRING		"%42c"
	#define ARGUMENTS	, 'L'
#elif TEST==136
	#define STRING		"%1c"
	#define ARGUMENTS	, 'L'
#elif TEST==137
	#define STRING		"%42c"
	#define ARGUMENTS	, '\0'
/* ====================================||==================================== *\
\* ==============ft_printf=============||==============©Othello============== */
#elif TEST==138
	#define STRING		"%11s"
	#define ARGUMENTS	, "Lorem ipsum"
#elif TEST==139
	#define STRING		"%42s"
	#define ARGUMENTS	, "Lorem ipsum"
#elif TEST==140
	#define STRING		"%5s"
	#define ARGUMENTS	, "Lorem ipsum"
/* ====================================||==================================== *\
\* ==============ft_printf=============||==============©Othello============== */
#elif TEST==141 //mix and match diuxX
	#define STRING		"%42i"
	#define ARGUMENTS	, 123456789
#elif TEST==142
	#define STRING		"%9i"
	#define ARGUMENTS	, 123456789
#elif TEST==143
	#define STRING		"%5i"
	#define ARGUMENTS	, 123456789
/* ====================================||==================================== *\
\* ==============ft_printf=============||==============©Othello============== */
#elif TEST==144
	#define STRING		"%1d\t%2d\t%16d\t\t%1d\t%2d\t%3d\t%16d\t"
	#define ARGUMENTS	, 42, 42, 42, -42, -42, -42, -42
#elif TEST==145	
	#define STRING		"%1i\t%2i\t%16i\t\t%1i\t%2i\t%3i\t%16i\t"
	#define ARGUMENTS	, 42, 42, 42, -42, -42, -42, -42
#elif TEST==146	
	#define STRING		"%1u\t%2u\t%16u\t\t%1u\t%2u\t%3u\t%16u\t"
	#define ARGUMENTS	, 42, 42, 42, -42, -42, -42, -42
#elif TEST==147	
	#define STRING		"%1x\t%2x\t%16x\t\t%1x\t%2x\t%3x\t%16x\t"
	#define ARGUMENTS	, 42, 42, 42, -42, -42, -42, -42
#elif TEST==148	
	#define STRING		"%1X\t%2X\t%16X\t\t%1X\t%2X\t%3X\t%16X\t"
	#define ARGUMENTS	, 42, 42, 42, -42, -42, -42, -42
#elif TEST==149	
	#define STRING		"%1p\t%2p\t%16p\t\t%1p\t%2p\t%3p\t%16p\t"
	#define ARGUMENTS	, (void *)42, (void *)42, (void *)42, (void *)-42, (void *)-42, (void *)-42, (void *)-42
#elif TEST==150
	#define STRING		"%6sipsum%5s sit%42s"
	#define ARGUMENTS	, "Lorem ipsum", "dolor", "amet"
#elif TEST==151
	#define STRING		"L%1c%2c%cm"
	#define ARGUMENTS	, 'o', 'r', 'e'
#elif TEST==152
	#define STRING		"%21c%21c%21c"
	#define ARGUMENTS	, '\0', '\0', '\0'
/* ====================================||==================================== *\
||																			  ||
||							  %.[#]c	.Precision							  ||
||								Tests 113 - 115								  ||
||																			  ||
\* ==============ft_printf=============||==============©Othello============== */
#elif TEST==153
	#define STRING		"%.0c"
	#define ARGUMENTS	, 'L'
#elif TEST==154
	#define STRING		"%.1c"
	#define ARGUMENTS	, 'L'
#elif TEST==155
	#define STRING		"%.2c"
	#define ARGUMENTS	, 'L'
#elif TEST==156
	#define STRING		"%.0c"
	#define ARGUMENTS	, 0
#elif TEST==157
	#define STRING		"%.1c"
	#define ARGUMENTS	, 0
#elif TEST==158
	#define STRING		"%.2c"
	#define ARGUMENTS	, 0
/* ====================================||==================================== *\
\* ==============ft_printf=============||==============©Othello============== */
#elif TEST==159
	#define STRING		"%.11s"
	#define ARGUMENTS	, "Lorem ipsum"
#elif TEST==160
	#define STRING		"%.21s"
	#define ARGUMENTS	, "Lorem ipsum"
#elif TEST==161
	#define STRING		"%.5s"
	#define ARGUMENTS	, "Lorem ipsum"
#elif TEST==162
	#define STRING		"%.0s"
	#define ARGUMENTS	, "Lorem ipsum"
#elif TEST==163
	#define STRING		"%.s"
	#define ARGUMENTS	, "Lorem ipsum"
#elif TEST==164
	#define STRING		"%.11s"
	#define ARGUMENTS	, "Lorem\0ipsum"
/* ====================================||==================================== *\
\* ==============ft_printf=============||==============©Othello============== */
#elif TEST==165
	#define STRING		"%.2i"
	#define ARGUMENTS	, 42
#elif TEST==166
	#define STRING		"%.1i"
	#define ARGUMENTS	, 42
#elif TEST==167
	#define STRING		"%.0i"
	#define ARGUMENTS	, 42
#elif TEST==168
	#define STRING		"%.21i"
	#define ARGUMENTS	, 42
#elif TEST==169
	#define STRING		"%.3i"
	#define ARGUMENTS	, -42
#elif TEST==170
	#define STRING		"%.2i"
	#define ARGUMENTS	, -42
#elif TEST==171
	#define STRING		"%.1i"
	#define ARGUMENTS	, -42
#elif TEST==172
	#define STRING		"%.0i"
	#define ARGUMENTS	, -42
#elif TEST==173
	#define STRING		"%.21i"
	#define ARGUMENTS	, -42
/* ====================================||==================================== *\
\* ==============ft_printf=============||==============©Othello============== */
#elif TEST==174
	#define STRING		"%.0i\t%.1i\t%.2i\t%.42i\t\t%.0i\t%.1i\t%.2i\t%.3i\t%.42i"
	#define ARGUMENTS	, 42, 42, 42, 42, -42, -42, -42, -42, -42
#elif TEST==175
	#define STRING		"%.0d\t%.1d\t%.2d\t%.42d\t\t%.0d\t%.1d\t%.2d\t%.3d\t%.42d"
	#define ARGUMENTS	, 42, 42, 42, 42, -42, -42, -42, -42, -42
#elif TEST==176
	#define STRING		"%.0u\t%.1u\t%.2u\t%.42u\t\t%.0u\t%.1u\t%.2u\t%.3u\t%.42u"
	#define ARGUMENTS	, 42, 42, 42, 42, -42, -42, -42, -42, -42
#elif TEST==177
	#define STRING		"%.0x\t%.1x\t%.2x\t%.42x\t\t%.0x\t%.1x\t%.2x\t%.3x\t%.42x"
	#define ARGUMENTS	, 42, 42, 42, 42, -42, -42, -42, -42, -42
#elif TEST==178
	#define STRING		"%.0X\t%.1X\t%.2X\t%.42X\t\t%.0X\t%.1X\t%.2X\t%.3X\t%.42X"
	#define ARGUMENTS	, 42, 42, 42, 42, -42, -42, -42, -42, -42
#elif TEST==179
	#define STRING		"%.0p\t%.1p\t%.2p\t%.42p\t\t%.0p\t%.1p\t%.2p\t%.3p\t%.42p"
	#define ARGUMENTS	, (void *)42, (void *)42, (void *)42, (void *)42, (void *)-42, (void *)-42, (void *)-42, (void *)-42, (void *)-42
#elif TEST==180
	#define STRING		"%.2i%.5s%.21i"
	#define ARGUMENTS	, 42, "Lorem ipsum", 42
/* ====================================||==================================== *\
||																			  ||
||								  Combinations								  ||
||								Tests 120 - 125								  ||
||																			  ||
\* ==============ft_printf=============||==============©Othello============== */
#elif TEST==181
	#define STRING		"%021i"
	#define ARGUMENTS	, 42
#elif TEST==182
	#define STRING		"%01i"
	#define ARGUMENTS	, 42
#elif TEST==183
	#define STRING		"%0.21i"
	#define ARGUMENTS	, 42
#elif TEST==184
	#define STRING		"%0.1i"
	#define ARGUMENTS	, 42
#elif TEST==185
	#define STRING		"%-21i"
	#define ARGUMENTS	, 42
#elif TEST==186
	#define STRING		"%-21s"
	#define ARGUMENTS	, "Lorem ipsum"
#elif TEST==187
	#define STRING		"%-5s"
	#define ARGUMENTS	, "Lorem ipsum"
#elif TEST==188
	#define STRING		"%-21c"
	#define ARGUMENTS	, 'L'
#elif TEST==189
	#define STRING		"%-.5s"
	#define ARGUMENTS	, "Lorem ipsum"
#elif TEST==190
	#define STRING		"%-.1i"
	#define ARGUMENTS	, 42
#elif TEST==191
	#define STRING		"%-21i"
	#define ARGUMENTS	, 42
#elif TEST==192
	#define STRING		"%-21i"
	#define ARGUMENTS	, 42
#elif TEST==193
	#define STRING		"%21.5i"
	#define ARGUMENTS	, 42
#elif TEST==194
	#define STRING		"%1.21i"
	#define ARGUMENTS	, 42
#elif TEST==195
	#define STRING		"%21.5s"
	#define ARGUMENTS	, "Lorem Ipsum"
#elif TEST==196
	#define STRING		"%5.21s"
	#define ARGUMENTS	, "Lorem Ipsum"
#elif TEST==197
	#define STRING		"[%1.1i]\t[%5.5i]\t[%10.5i]\t[%10.05i]\t[%010.5i]\t[%010.05i]\t[%10.5i]\t[%10.05i]\t[%010.5i]\t[%010.05i]"
	#define ARGUMENTS	, -42, -42, -42, -42, -42, -42, -444222, -444222, -444222, -444222
#elif TEST==198
	#define STRING		"[%1.1x]\t[%10.10X]\t[%20.10x]\t[%20.010X]\t[%020.10x]\t[%020.010X]\t[%20.10x]\t[%20.010X]\t[%020.10x]\t[%020.010X]"
	#define ARGUMENTS	, -42, -42, -42, -42, -42, -42, -444222, -444222, -444222, -444222
#elif TEST==199
	#define STRING		"[%10.5s]\t[%10.05s]\t[%010.5s]\t[%010.05s]\t[%10.5s]\t[%10.05s]\t[%010.5s]\t[%010.05s]"
	#define ARGUMENTS	, "-42", "-42", "-42", "-42", "-444222", "-444222", "-444222", "-444222"
#elif TEST==200
	#define STRING		"[%10.5c]\t[%10.05c]\t[%010.5c]\t[%010.05c]\t[%10.5c]\t[%10.05c]\t[%010.5c]\t[%010.05c]"
	#define ARGUMENTS	, 'L', 'o', 'r', 'e', 'm', ' ', 'i', 'p'
#elif TEST==201
	#define STRING		"[%20.10p]\t[%20.010p]\t[%020.10p]\t[%020.010p]"
	#define ARGUMENTS	, (void *)-42, (void *)-42, (void *)-42, (void *)-42
#elif TEST==202
	#define STRING		"[%i]\t[%5i]\t[%05i]\t[%.i]\t[%.5i]\t[%.05i]\t[%10.i]\t[%10.5i]\t[%10.05i]\t[%010.i]\t[%010.5i]\t[%010.05i]\t"
	#define ARGUMENTS	, -42, -42, -42, -42, -42, -42, -42, -42, -42, -42, -42, -42
/* ====================================||==================================== *\
||																			  ||
||							 %#c	Alternate Form							  ||
||								Tests 119									  ||
||																			  ||
\* ==============ft_printf=============||==============©Othello============== */
// #elif TEST==119
// 	#define STRING		"%#s\n"
// 	#define ARGUMENTS	, 42
// #elif TEST==147
// 	#define STRING		"%#o"
// 	#define ARGUMENTS	, 42
#elif TEST==203
	#define STRING		"%#x"
	#define ARGUMENTS	, 0
#elif TEST==204
	#define STRING		"%#x"
	#define ARGUMENTS	, 42
#elif TEST==205
	#define STRING		"%#X"
	#define ARGUMENTS	, 0
#elif TEST==206
	#define STRING		"%#X"
	#define ARGUMENTS	, 42
	// #elif TEST==150
	// #define STRING		"%#a"
	// #define ARGUMENTS	, 42.42
	// #elif TEST==151
	// #define STRING		"%a"
	// #define ARGUMENTS	, 42.42
	// #elif TEST==152
	// #define STRING		"%#e"
	// #define ARGUMENTS	, 42.42
	// #elif TEST==153
	// #define STRING		"%e"
	// #define ARGUMENTS	, 42.42
	// #elif TEST==154
	// #define STRING		"%#f"
	// #define ARGUMENTS	, 42.42
	// #elif TEST==155
	// #define STRING		"%f"
	// #define ARGUMENTS	, 42.42
	// #elif TEST==156
	// #define STRING		"%#g"
	// #define ARGUMENTS	, 42.42
	// #elif TEST==157
	// #define STRING		"%g"
	// #define ARGUMENTS	, 42.42
/* ====================================||==================================== *\
||																			  ||
||								%' '	Spaced								  ||
||								Tests 120 - 125								  ||
||																			  ||
\* ==============ft_printf=============||==============©Othello============== */
#elif TEST==201
	#define STRING		"% i"
	#define ARGUMENTS	, 42
#elif TEST==202
	#define STRING		"% i"
	#define ARGUMENTS	, -42
#elif TEST==203
	#define STRING		"%     i"
	#define ARGUMENTS	, 42
#elif TEST==204
	#define STRING		"%     i"
	#define ARGUMENTS	, -42
#elif TEST==205
	#define STRING		"%%% %%% %% %%"
	#define ARGUMENTS	
#elif TEST==206
	#define STRING		"% s"
	#define ARGUMENTS	, ""
#elif TEST==206
	#define STRING		"% s% s% s% s"
	#define ARGUMENTS	, " - ", " ", "4", "2"
#elif TEST==207
	#define STRING		" % s % s % s % s % s % s "
	#define ARGUMENTS	, " - ", "", "4", "", "2 ", NULL
	// TEST(8, print(" % s % s % s % s ", " - ", "", "4", ""));
	// TEST(9, print(" % s % s % s % s % s ", " - ", "", "4", "", "2 "));
/* ====================================||==================================== *\
||																			  ||
||								  %+	Signed								  ||
||								Tests 126 - 127								  ||
||																			  ||
\* ==============ft_printf=============||==============©Othello============== */
#elif TEST==208
	#define STRING		"%+i"
	#define ARGUMENTS	, 42
#elif TEST==209
	#define STRING		"%+i"
	#define ARGUMENTS	, -42
/* ====================================||==================================== *\
||																			  ||
||							%#.#s	Limited Spaced STRING					  ||
||								Tests 114 - 117								  ||
||																			  ||
\* ==============ft_printf=============||==============©Othello============== */
#elif TEST==222
	#define STRING		"%42.5s"
	#define ARGUMENTS	, "Lorem Ipsum"
#elif TEST==222
	#define STRING		"%5.11s"
	#define ARGUMENTS	, "Lorem Ipsum"
#elif TEST==222
	#define STRING		"%11.5s"
	#define ARGUMENTS	, "Lorem Ipsum"
#elif TEST==222
	#define STRING		"%-11.5s"
	#define ARGUMENTS	, "Lorem Ipsum"
#elif TEST==222
	#define STRING		"%-42.5s"
	#define ARGUMENTS	, "Lorem Ipsum"
#elif TEST==222
	#define STRING		"%42.21i"
	#define ARGUMENTS	, 42
#elif TEST==222
	#define STRING		"%042.21i"
	#define ARGUMENTS	, 42
#elif TEST==222
	#define STRING		"%42.021i"
	#define ARGUMENTS	, 42
// #elif TEST==222
// 	#define STRING		"%042.21s"
// 	#define ARGUMENTS	, "Lorem Ipsum"
#elif TEST==222
	#define STRING		"%42.021s"
	#define ARGUMENTS	, "Lorem Ipsum"
/* ====================================||==================================== *\
||																			  ||
||																			  ||
||								Tests 118									  ||
||																			  ||
\* ==============ft_printf=============||==============©Othello============== */
// #elif TEST==222
// 	#define STRING		"%11.s"
// 	#define ARGUMENTS	, "Lorem Ipsum"




#elif TEST==222
	#define STRING		"% -42i"
	#define ARGUMENTS	, 42


#elif TEST==999
	#define STRING		"%c is %character.\n%s is string.\n%i is digit.\n"
	#define ARGUMENTS	, 'c', c, str, val
#else
	#define STRING		"Incorrect input found for test %d\n"
	#define ARGUMENTS	, TEST
#endif