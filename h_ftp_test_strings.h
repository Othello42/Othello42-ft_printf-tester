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
||								   Tests 1 - 6								  ||
||																			  ||
\* ==============ft_printf=============||==============©Othello============== */
#elif TEST==1
	#define STRING		"L"
	#define ARGUMENTS	
#elif TEST==2
	#define STRING		"Lorem ipsum dolor sit amet, consectetur adipiscing elit. Morbi luctus nisi ipsum, et volutpat ipsum molestie eget. Suspendisse magna ligula, malesuada eu tincidunt non, commodo et enim. Sed pharetra pharetra eros, nec accumsan risus consequat non. Duis id velit et tellus lobortis vulputate. Curabitur condimentum varius metus, at laoreet ante placerat eget. Sed id lorem quis quam ullamcorper condimentum at sit amet arcu. Integer tellus ante, suscipit non pretium sit amet, elementum quis purus. Maecenas risus tortor, mattis vel iaculis eleifend, pretium non felis. Proin condimentum mi sed nibh hendrerit ornare at ac ipsum. Vivamus est elit, mattis vel diam ut, mattis dignissim erat. Proin elementum posuere augue, nec tempor odio commodo dignissim. Sed eu neque sit amet mauris vestibulum semper in ac nibh. Sed luctus enim non velit sodales tristique. Vestibulum ut mauris ligula."
	#define ARGUMENTS	
#elif TEST==3
	#define STRING		""
	#define ARGUMENTS	
#elif TEST==4
	#define STRING		" !\"#$&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~"
	#define ARGUMENTS	
#elif TEST==5
	#define STRING		"\t\n\r\v\f"
	#define ARGUMENTS	
#elif TEST==6 //multilinetest
	#define STRING		"Multi line test"
	#define ARGUMENTS	
/* ====================================||==================================== *\
||																			  ||
||								 %c	Character								  ||
||								  Tests 7 - 10								  ||
||																			  ||
\* ==============ft_printf=============||==============©Othello============== */
#elif TEST==7
	#define STRING		"%c"
	#define ARGUMENTS	, 'L'
#elif TEST==8
	#define STRING		"%c%c%c%c%c%c%c%c%c%c%c%c%c"
	#define ARGUMENTS	, 'L', 'o', 'r', 'e', 'm', ' ', 'I', 'p', 's', 'u', 'm', '.', '\n'
#elif TEST==9
	#define STRING		"%c_%c_%c_%c_%c_%c_%c_%c-%c_%c_%c_"
	#define ARGUMENTS	, 'L', 'o' - 256, 'r' + 256, 3, 'm', '1', '2', '3', 0, 'm', '\n'
#elif TEST==10
	#define STRING		"%c %c %c %c "
	#define ARGUMENTS	, '\200', 'l', '\n', '\0'
/* ====================================||==================================== *\
||																			  ||
||								  %s	String								  ||
||								  Tests 11 - 18								  ||
||																			  ||
\* ==============ft_printf=============||==============©Othello============== */
#elif TEST==11
	#define STRING		"%s"
	#define ARGUMENTS	, "Lorem ipsum\n"
#elif TEST==12
	#define STRING		"Lorem %s"
	#define ARGUMENTS	, "ipsum\n"
#elif TEST==13
	#define STRING		"%s ipsum\n"
	#define ARGUMENTS	, "ipsum\n"
#elif TEST==14
	#define STRING		"%s\n %s%s"
	#define ARGUMENTS	, "Lorem ", "ipsum", " dolor"
#elif TEST==15
	#define STRING		"%s\n %s%s"
	#define ARGUMENTS	, "Lorem\0 ", "ipsum", " dolor"
#elif TEST==16
	#define STRING		"%s%s%s"
	#define ARGUMENTS	, "Lorem", "\0", "ipsum"
#elif TEST==17
	#define STRING		"%s"
	#define ARGUMENTS	, ""
#elif TEST==18
	#define STRING		"%s %s %s %s"
	#define ARGUMENTS	, "Lorem", NULL, "", "ipsum"
/* ====================================||==================================== *\
||																			  ||
||							%p	(void *) address							  ||
||								 Tests 19 - 29								  ||
||																			  ||
\* ==============ft_printf=============||==============©Othello============== */
#elif TEST==19
	#define STRING		"%p"
	#define ARGUMENTS	, (void *)0x10c5c3f7b
#elif TEST==20
	#define STRING		"%p"
	#define ARGUMENTS	, (void *)0x7ffee6bdeaec
#elif TEST==21
	#define STRING		"%p"
	#define ARGUMENTS	, (void *)0x0
#elif TEST==22
	#define STRING		"%p"
	#define ARGUMENTS	, (void *)-1
#elif TEST==23
	#define STRING		"%p"
	#define ARGUMENTS	, (void *)0
#elif TEST==24
	#define STRING		"%p"
	#define ARGUMENTS	, (void *)1
#elif TEST==25
	#define STRING		"%p"
	#define ARGUMENTS	, (void *)42
#elif TEST==26
	#define STRING		"%p"
	#define ARGUMENTS	, NULL
#elif TEST==27
	#define STRING		"INT_MIN %p\tand INT_MAX %p"
	#define ARGUMENTS	, (void *)INT_MIN, (void *)INT_MAX
#elif TEST==28
	#define STRING		"\nUINT_MAX %p\tand\t-UINT_MAX %p\nLONG_MIN %p\tand\tLONG_MAX %p\nULONG_MAX %p\tand\t-ULONG_MAX %p\n"
	#define ARGUMENTS	, (void *)UINT_MAX, (void *)-UINT_MAX, (void *)LONG_MIN, (void *)LONG_MAX, (void *)ULONG_MAX, (void *)-ULONG_MAX
#elif TEST==29
	#define STRING		"%p%p %p"
	#define ARGUMENTS	, (void *)1, (void *)2, (void *)3
/* ====================================||==================================== *\
||																			  ||
||							%d	Decimal (base 10)							  ||
||								 Tests 30 - 39								  ||
||																			  ||
\* ==============ft_printf=============||==============©Othello============== */
#elif TEST==30
	#define STRING		"%d"
	#define ARGUMENTS	, INT_MIN
#elif TEST==31
	#define STRING		"%d"
	#define ARGUMENTS	, -1000
#elif TEST==32
	#define STRING		"%d"
	#define ARGUMENTS	, -42
#elif TEST==33
	#define STRING		"%d"
	#define ARGUMENTS	, -1
#elif TEST==34
	#define STRING		"%d"
	#define ARGUMENTS	, 0
#elif TEST==35
	#define STRING		"%d"
	#define ARGUMENTS	, 1
#elif TEST==36
	#define STRING		"%d"
	#define ARGUMENTS	, 42
#elif TEST==37
	#define STRING		"%d"
	#define ARGUMENTS	, 1000
#elif TEST==38
	#define STRING		"%d"
	#define ARGUMENTS	, INT_MAX
#elif TEST==39
	#define STRING		"\nINT_MIN - 1 %d\tand\tINT_MAX + 1 %d\nUINT_MAX %d\tand\t-UINT_MAX %d\nLONG_MIN %d\tand\tLONG_MAX %d\nULONG_MAX %d\tand\t-ULONG_MAX %d\n"
	#define ARGUMENTS	, INT_MIN - 1, INT_MAX + 1, UINT_MAX, -UINT_MAX, LONG_MIN, LONG_MAX, ULONG_MAX, -ULONG_MAX
/* ====================================||==================================== *\
||																			  ||
||							%i	Integer base 10								  ||
||								 Tests 40 - 49								  ||
||																			  ||
\* ==============ft_printf=============||==============©Othello============== */
#elif TEST==40
	#define STRING		"%i"
	#define ARGUMENTS	, INT_MIN
#elif TEST==41
	#define STRING		"%i"
	#define ARGUMENTS	, -1000
#elif TEST==42
	#define STRING		"%i"
	#define ARGUMENTS	, -42
#elif TEST==43
	#define STRING		"%i"
	#define ARGUMENTS	, -1
#elif TEST==44
	#define STRING		"%i"
	#define ARGUMENTS	, 0
#elif TEST==45
	#define STRING		"%i"
	#define ARGUMENTS	, 1
#elif TEST==46
	#define STRING		"%i"
	#define ARGUMENTS	, 42
#elif TEST==47
	#define STRING		"%i"
	#define ARGUMENTS	, 1000
#elif TEST==48
	#define STRING		"%i"
	#define ARGUMENTS	, INT_MAX
#elif TEST==49
	#define STRING		"\nINT_MIN - 1 %i\tand\tINT_MAX + 1 %i\nUINT_MAX %i\tand\t-UINT_MAX %i\nLONG_MIN %i\tand\tLONG_MAX %i\nULONG_MAX %i\tand\t-ULONG_MAX %i\n"
	#define ARGUMENTS	, INT_MIN - 1, INT_MAX + 1, UINT_MAX, -UINT_MAX, LONG_MIN, LONG_MAX, ULONG_MAX, -ULONG_MAX
/* ====================================||==================================== *\
||																			  ||
||						%u	Unsigned decimal (base 10)						  ||
||								 Tests 50 - 59								  ||
||																			  ||
\* ==============ft_printf=============||==============©Othello============== */
#elif TEST==50
	#define STRING		"%u"
	#define ARGUMENTS	, INT_MIN
#elif TEST==51
	#define STRING		"%u"
	#define ARGUMENTS	, -1000
#elif TEST==52
	#define STRING		"%u"
	#define ARGUMENTS	, -42
#elif TEST==53
	#define STRING		"%u"
	#define ARGUMENTS	, -1
#elif TEST==54
	#define STRING		"%u"
	#define ARGUMENTS	, 0
#elif TEST==55
	#define STRING		"%u"
	#define ARGUMENTS	, 1
#elif TEST==56
	#define STRING		"%u"
	#define ARGUMENTS	, 42
#elif TEST==57
	#define STRING		"%u"
	#define ARGUMENTS	, 1000
#elif TEST==58
	#define STRING		"%u"
	#define ARGUMENTS	, INT_MAX
#elif TEST==59
	#define STRING		"\nINT_MIN - 1 %u\tand\tINT_MAX + 1 %u\nUINT_MAX %u\tand\t-UINT_MAX %u\nLONG_MIN %u\tand\tLONG_MAX %u\nULONG_MAX %u\tand\t-ULONG_MAX %u\n"
	#define ARGUMENTS	, INT_MIN - 1, INT_MAX + 1, UINT_MAX, -UINT_MAX, LONG_MIN, LONG_MAX, ULONG_MAX, -ULONG_MAX
/* ====================================||==================================== *\
||																			  ||
||							%x	Lowercase Hexadecimal						  ||
||								 Tests 60 - 69								  ||
||																			  ||
\* ==============ft_printf=============||==============©Othello============== */
#elif TEST==60
	#define STRING		"%x"
	#define ARGUMENTS	, INT_MIN
#elif TEST==61
	#define STRING		"%x"
	#define ARGUMENTS	, -1000
#elif TEST==62
	#define STRING		"%x"
	#define ARGUMENTS	, -42
#elif TEST==63
	#define STRING		"%x"
	#define ARGUMENTS	, -1
#elif TEST==64
	#define STRING		"%x"
	#define ARGUMENTS	, 0
#elif TEST==65
	#define STRING		"%x"
	#define ARGUMENTS	, 1
#elif TEST==66
	#define STRING		"%x"
	#define ARGUMENTS	, 42
#elif TEST==67
	#define STRING		"%x"
	#define ARGUMENTS	, 11259375
#elif TEST==68
	#define STRING		"%x"
	#define ARGUMENTS	, INT_MAX
#elif TEST==69
	#define STRING		"\nINT_MIN - 1 %x\tand\tINT_MAX + 1 %x\nUINT_MAX %x\tand\t-UINT_MAX %x\nLONG_MIN %x\tand\tLONG_MAX %x\nULONG_MAX %x\tand\t-ULONG_MAX %x\n"
	#define ARGUMENTS	, INT_MIN - 1, INT_MAX + 1, UINT_MAX, -UINT_MAX, LONG_MIN, LONG_MAX, ULONG_MAX, -ULONG_MAX
/* ====================================||==================================== *\
||																			  ||
||							%X	Uppercase Hexadecimal						  ||
||								 Tests 70 - 79								  ||
||																			  ||
\* ==============ft_printf=============||==============©Othello============== */
#elif TEST==70
	#define STRING		"%X"
	#define ARGUMENTS	, INT_MIN
#elif TEST==71
	#define STRING		"%X"
	#define ARGUMENTS	, -1000
#elif TEST==72
	#define STRING		"%X"
	#define ARGUMENTS	, -42
#elif TEST==73
	#define STRING		"%X"
	#define ARGUMENTS	, -1
#elif TEST==74
	#define STRING		"%X"
	#define ARGUMENTS	, 0
#elif TEST==75
	#define STRING		"%X"
	#define ARGUMENTS	, 1
#elif TEST==76
	#define STRING		"%X"
	#define ARGUMENTS	, 42
#elif TEST==77
	#define STRING		"%X"
	#define ARGUMENTS	, 11259375
#elif TEST==78
	#define STRING		"%X"
	#define ARGUMENTS	, INT_MAX
#elif TEST==79
	#define STRING		"\nINT_MIN - 1 %X\tand\tINT_MAX + 1 %X\nUINT_MAX %X\tand\t-UINT_MAX %X\nLONG_MIN %X\tand\tLONG_MAX %X\nULONG_MAX %X\tand\t-ULONG_MAX %X\n"
	#define ARGUMENTS	, INT_MIN - 1, INT_MAX + 1, UINT_MAX, -UINT_MAX, LONG_MIN, LONG_MAX, ULONG_MAX, -ULONG_MAX
/* ====================================||==================================== *\
||																			  ||
||								  %%		%								  ||
||								 Tests 80 - 83								  ||
||																			  ||
\* ==============ft_printf=============||==============©Othello============== */
#elif TEST==80
	#define STRING		"%%"
	#define ARGUMENTS	
#elif TEST==81
	#define STRING		"%% %%"
	#define ARGUMENTS	
#elif TEST==82
	#define STRING		"%%%%%%"
	#define ARGUMENTS	
#elif TEST==83
	#define STRING		"%%%%%%Lorem%%%%Ipsum%%"
	#define ARGUMENTS	
/* ====================================||==================================== *\
||																			  ||
||								Miscellaneous								  ||
||								Tests 84 - 86								  ||
||																			  ||
\* ==============ft_printf=============||==============©Othello============== */
#elif TEST==84
	#define STRING		"%s%c%s"
	#define ARGUMENTS	, "Lorem", 0, "ipsum"
#elif TEST==85
	#define STRING		"%c%sipsum %p dolor %d sit %i amet, %u consectetur %x adipiscing %X elit. %%\n"
	#define ARGUMENTS	, 'L', "orem ", (void *)1, 22, 333, 4444, 5555, 66666
#elif TEST==86
	#define STRING		"[%s][%s][%s][%c][%c][%c][%i][%i][%i]\n"
	#define ARGUMENTS	, "Lorem ipsum", "Lorem ipsum", "Lorem ipsum", 42, 42, 42, 42, 42, 42
#elif TEST==87 //multilinetest
	#define STRING		"Multi line test"
	#define ARGUMENTS	
/* ====================================||==================================== *\
||																			  ||
||									 BONUS									  ||
||																			  ||
|| ====================================||==================================== ||
||																			  ||
||								%0i	Zero Padded								  ||
||								Tests 100 - 114								  ||
||																			  ||
\* ==============ft_printf=============||==============©Othello============== */
#elif TEST==100
	#define STRING		"[%01i]\t[%01i]\t[%01i]"
	#define ARGUMENTS	, 42, 0, -42
#elif TEST==101
	#define STRING		"[%02i]\t[%02i]\t[%02i]"
	#define ARGUMENTS	, 42, 0, -42
#elif TEST==102
	#define STRING		"[%04i]\t[%04i]\t[%04i]"
	#define ARGUMENTS	, 42, 0, -42
#elif TEST==103
	#define STRING		"[%08i]\t[%08i]\t[%08i]"
	#define ARGUMENTS	, 42, 0, -42
#elif TEST==104
	#define STRING		"[%042i]\t[%042i]\t[%042i]"
	#define ARGUMENTS	, 42, 0, -42
#elif TEST==105
	#define STRING		"\nINT_MIN   %016i\tand\tINT_MAX    %016i\nUINT_MAX  %016i\tand\t-UINT_MAX  %016i\nLONG_MIN  %016i\tand\tLONG_MAX   %016i\nULONG_MAX %016i\tand\t-ULONG_MAX %016i\n"
	#define ARGUMENTS	, INT_MIN, INT_MAX, UINT_MAX, -UINT_MAX, LONG_MIN, LONG_MAX, ULONG_MAX, -ULONG_MAX
/* ====================================||==================================== *\
\* ==============ft_printf=============||==============©Othello============== */
#elif TEST==106
	#define STRING		"[%0d]\t[%0d]\t[%0d]\t[%01d]\t[%01d]\t[%01d]\t[%02d]\t[%02d]\t[%02d]\t[%03d]\t[%03d]\t[%03d]\t[%04d]\t[%04d]\t[%04d]\t[%012d]\t[%012d]\t[%012d]"
	#define ARGUMENTS	, 42, 0, -42, 42, 0, -42, 42, 0, -42, 42, 0, -42, 42, 0, -42, 42, 0, -42
#elif TEST==107
	#define STRING		"[%0i]\t[%0i]\t[%0i]\t[%01i]\t[%01i]\t[%01i]\t[%02i]\t[%02i]\t[%02i]\t[%03i]\t[%03i]\t[%03i]\t[%04i]\t[%04i]\t[%04i]\t[%012i]\t[%012i]\t[%012i]"
	#define ARGUMENTS	, 42, 0, -42, 42, 0, -42, 42, 0, -42, 42, 0, -42, 42, 0, -42, 42, 0, -42
#elif TEST==108
	#define STRING		"[%0u]\t[%0u]\t[%0u]\t[%01u]\t[%01u]\t[%01u]\t[%02u]\t[%02u]\t[%02u]\t[%03u]\t[%03u]\t[%03u]\t[%04u]\t[%04u]\t[%04u]\t[%012u]\t[%012u]\t[%012u]"
	#define ARGUMENTS	, 42, 0, -42, 42, 0, -42, 42, 0, -42, 42, 0, -42, 42, 0, -42, 42, 0, -42
#elif TEST==109
	#define STRING		"[%0x]\t[%0x]\t[%0x]\t[%01x]\t[%01x]\t[%01x]\t[%02x]\t[%02x]\t[%02x]\t[%03x]\t[%03x]\t[%03x]\t[%04x]\t[%04x]\t[%04x]\t[%012x]\t[%012x]\t[%012x]"
	#define ARGUMENTS	, 42, 0, -42, 42, 0, -42, 42, 0, -42, 42, 0, -42, 42, 0, -42, 42, 0, -42
#elif TEST==110
	#define STRING		"[%0X]\t[%0X]\t[%0X]\t[%01X]\t[%01X]\t[%01X]\t[%02X]\t[%02X]\t[%02X]\t[%03X]\t[%03X]\t[%03X]\t[%04X]\t[%04X]\t[%04X]\t[%012X]\t[%012X]\t[%012X]"
	#define ARGUMENTS	, 42, 0, -42, 42, 0, -42, 42, 0, -42, 42, 0, -42, 42, 0, -42, 42, 0, -42
#elif TEST==111
	#define STRING		"L%02%%01%%0%"
	#define ARGUMENTS	
#elif TEST==112 //undefined
	#define STRING		"[%0p]\t[%0p]\t[%0p]\t[%01p]\t[%01p]\t[%01p]\t[%02p]\t[%02p]\t[%02p]\t[%03p]\t[%03p]\t[%03p]\t[%04p]\t[%04p]\t[%04p]\t[%012p]\t[%012p]\t[%012p]"
	#define ARGUMENTS	, (void *)42, (void *)42, (void *)42, (void *)42, (void *)42, (void *)42, (void *)42, (void *)42, (void *)42, (void *)42, (void *)42, (void *)42, (void *)42, (void *)42, (void *)42, (void *)42, (void *)42, (void *)42
#elif TEST==113 //undefined
	#define STRING		"%04s\t%05s\t%06s"
	#define ARGUMENTS	, "Lorem", "ipsum", "dolor"
#elif TEST==114 //undefined
	#define STRING		"L%02c%01c%0c"
	#define ARGUMENTS	, 'r', 'e', 'm'
/* ====================================||==================================== *\
||																			  ||
||							  %-[#]c	Left Adjusted						  ||
||								Tests 115 - 132								  ||
||																			  ||
\* ==============ft_printf=============||==============©Othello============== */
#elif TEST==115
	#define STRING		"%-42c"
	#define ARGUMENTS	, 'L'
#elif TEST==116
	#define STRING		"%-1c"
	#define ARGUMENTS	, 'L'
#elif TEST==117
	#define STRING		"%-42c"
	#define ARGUMENTS	, 0
/* ====================================||==================================== *\
\* ==============ft_printf=============||==============©Othello============== */
#elif TEST==118
	#define STRING		"%-11s"
	#define ARGUMENTS	, "Lorem ipsum"
#elif TEST==119
	#define STRING		"%-42s"
	#define ARGUMENTS	, "Lorem ipsum"
#elif TEST==120
	#define STRING		"%-5s"
	#define ARGUMENTS	, "Lorem ipsum"
/* ====================================||==================================== *\
\* ==============ft_printf=============||==============©Othello============== */
#elif TEST==121
	#define STRING		"[%-2i]"
	#define ARGUMENTS	, 42
#elif TEST==122
	#define STRING		"[%-42i]"
	#define ARGUMENTS	, 42
#elif TEST==123
	#define STRING		"[%-1i]"
	#define ARGUMENTS	, 42
#elif TEST==124
	#define STRING		"[%-5i]"
	#define ARGUMENTS	, -42
/* ====================================||==================================== *\
\* ==============ft_printf=============||==============©Othello============== */
#elif TEST==125
	#define STRING		"[%-d]\t[%-d]\t[%-d]\t[%-1d]\t[%-1d]\t[%-1d]\t[%-2d]\t[%-2d]\t[%-2d]\t[%-3d]\t[%-3d]\t[%-3d]\t[%-4d]\t[%-4d]\t[%-4d]\t[%-16d]\t[%-16d]\t[%-16d]"
	#define ARGUMENTS	, 42, 0, -42, 42, 0, -42, 42, 0, -42, 42, 0, -42, 42, 0, -42, 42, 0, -42
#elif TEST==126
	#define STRING		"[%-i]\t[%-i]\t[%-i]\t[%-1i]\t[%-1i]\t[%-1i]\t[%-2i]\t[%-2i]\t[%-2i]\t[%-3i]\t[%-3i]\t[%-3i]\t[%-4i]\t[%-4i]\t[%-4i]\t[%-16i]\t[%-16i]\t[%-16i]"
	#define ARGUMENTS	, 42, 0, -42, 42, 0, -42, 42, 0, -42, 42, 0, -42, 42, 0, -42, 42, 0, -42
#elif TEST==127
	#define STRING		"[%-u]\t[%-u]\t[%-u]\t[%-1u]\t[%-1u]\t[%-1u]\t[%-2u]\t[%-2u]\t[%-2u]\t[%-3u]\t[%-3u]\t[%-3u]\t[%-4u]\t[%-4u]\t[%-4u]\t[%-16u]\t[%-16u]\t[%-16u]"
	#define ARGUMENTS	, 42, 0, -42, 42, 0, -42, 42, 0, -42, 42, 0, -42, 42, 0, -42, 42, 0, -42
#elif TEST==127
	#define STRING		"[%-x]\t[%-x]\t[%-x]\t[%-1x]\t[%-1x]\t[%-1x]\t[%-2x]\t[%-2x]\t[%-2x]\t[%-3x]\t[%-3x]\t[%-3x]\t[%-4x]\t[%-4x]\t[%-4x]\t[%-16x]\t[%-16x]\t[%-16x]"
	#define ARGUMENTS	, 42, 0, -42, 42, 0, -42, 42, 0, -42, 42, 0, -42, 42, 0, -42, 42, 0, -42
#elif TEST==128
	#define STRING		"[%-X]\t[%-X]\t[%-X]\t[%-1X]\t[%-1X]\t[%-1X]\t[%-2X]\t[%-2X]\t[%-2X]\t[%-3X]\t[%-3X]\t[%-3X]\t[%-4X]\t[%-4X]\t[%-4X]\t[%-16X]\t[%-16X]\t[%-16X]"
	#define ARGUMENTS	, 42, 0, -42, 42, 0, -42, 42, 0, -42, 42, 0, -42, 42, 0, -42, 42, 0, -42
#elif TEST==129
	#define STRING		"[%-p]\t[%-p]\t[%-p]\t[%-1p]\t[%-1p]\t[%-1p]\t[%-2p]\t[%-2p]\t[%-2p]\t[%-3p]\t[%-3p]\t[%-3p]\t[%-4p]\t[%-4p]\t[%-4p]\t[%-16p]\t[%-16p]\t[%-16p]"
	#define ARGUMENTS	, (void *)42, (void *)42, (void *)42, (void *)42, (void *)42, (void *)42, (void *)42, (void *)42, (void *)42, (void *)42, (void *)42, (void *)42, (void *)42, (void *)42, (void *)42, (void *)42, (void *)42, (void *)42
#elif TEST==130
	#define STRING		"%-4s %-5s %-6s"
	#define ARGUMENTS	, "Lorem", "ipsum", "dolor"
#elif TEST==131
	#define STRING		"%-2c %-1c %-cem"
	#define ARGUMENTS	, 'L', 'o', 'r'
#elif TEST==132
	#define STRING		"%-2% %-1% %-%em"
	#define ARGUMENTS	
/* ====================================||==================================== *\
||																			  ||
||							   %[#]c	Field Width							  ||
||								Tests 133 - 150								  ||
||																			  ||
\* ==============ft_printf=============||==============©Othello============== */
#elif TEST==133
	#define STRING		"%42c"
	#define ARGUMENTS	, 'L'
#elif TEST==134
	#define STRING		"%1c"
	#define ARGUMENTS	, 'L'
#elif TEST==135
	#define STRING		"%42c"
	#define ARGUMENTS	, '\0'
/* ====================================||==================================== *\
\* ==============ft_printf=============||==============©Othello============== */
#elif TEST==136
	#define STRING		"%11s"
	#define ARGUMENTS	, "Lorem ipsum"
#elif TEST==137
	#define STRING		"%42s"
	#define ARGUMENTS	, "Lorem ipsum"
#elif TEST==138
	#define STRING		"%5s"
	#define ARGUMENTS	, "Lorem ipsum"
/* ====================================||==================================== *\
\* ==============ft_printf=============||==============©Othello============== */
#elif TEST==139
	#define STRING		"%42i"
	#define ARGUMENTS	, 123456789
#elif TEST==140
	#define STRING		"%9i"
	#define ARGUMENTS	, 123456789
#elif TEST==141
	#define STRING		"%5i"
	#define ARGUMENTS	, 123456789
/* ====================================||==================================== *\
\* ==============ft_printf=============||==============©Othello============== */
#elif TEST==142
	#define STRING		"[%1d]\t[%1d]\t[%1d]\t[%2d]\t[%2d]\t[%2d]\t[%3d]\t[%3d]\t[%3d]\t[%4d]\t[%4d]\t[%4d]\t[%16d]\t[%16d]\t[%16d]"
	#define ARGUMENTS	, 42, 0, -42, 42, 0, -42, 42, 0, -42, 42, 0, -42, 42, 0, -42
#elif TEST==143
	#define STRING		"[%1i]\t[%1i]\t[%1i]\t[%2i]\t[%2i]\t[%2i]\t[%3i]\t[%3i]\t[%3i]\t[%4i]\t[%4i]\t[%4i]\t[%16i]\t[%16i]\t[%16i]"
	#define ARGUMENTS	, 42, 0, -42, 42, 0, -42, 42, 0, -42, 42, 0, -42, 42, 0, -42
#elif TEST==144
	#define STRING		"[%1u]\t[%1u]\t[%1u]\t[%2u]\t[%2u]\t[%2u]\t[%3u]\t[%3u]\t[%3u]\t[%4u]\t[%4u]\t[%4u]\t[%16u]\t[%16u]\t[%16u]"
	#define ARGUMENTS	, 42, 0, -42, 42, 0, -42, 42, 0, -42, 42, 0, -42, 42, 0, -42
#elif TEST==145
	#define STRING		"[%1x]\t[%1x]\t[%1x]\t[%2x]\t[%2x]\t[%2x]\t[%3x]\t[%3x]\t[%3x]\t[%4x]\t[%4x]\t[%4x]\t[%16x]\t[%16x]\t[%16x]"
	#define ARGUMENTS	, 42, 0, -42, 42, 0, -42, 42, 0, -42, 42, 0, -42, 42, 0, -42
#elif TEST==146
	#define STRING		"[%1X]\t[%1X]\t[%1X]\t[%2X]\t[%2X]\t[%2X]\t[%3X]\t[%3X]\t[%3X]\t[%4X]\t[%4X]\t[%4X]\t[%16X]\t[%16X]\t[%16X]"
	#define ARGUMENTS	, 42, 0, -42, 42, 0, -42, 42, 0, -42, 42, 0, -42, 42, 0, -42
#elif TEST==147
	#define STRING		"[%1p]\t[%1p]\t[%1p]\t[%2p]\t[%2p]\t[%2p]\t[%3p]\t[%3p]\t[%3p]\t[%4p]\t[%4p]\t[%4p]\t[%16p]\t[%16p]\t[%16p]"
	#define ARGUMENTS	, (void *)42, (void *)0, (void *)-42, (void *)42, (void *)0, (void *)-42, (void *)42, (void *)0, (void *)-42, (void *)42, (void *)0, (void *)-42, (void *)42, (void *)0, (void *)-42
#elif TEST==148
	#define STRING		"%6sipsum%5s sit%42s"
	#define ARGUMENTS	, "Lorem ipsum", "dolor", "amet"
#elif TEST==149
	#define STRING		"L%1c%2c%cm"
	#define ARGUMENTS	, 'o', 'r', 'e'
#elif TEST==150
	#define STRING		"%21c%21c%21c"
	#define ARGUMENTS	, '\0', '\0', '\0'
/* ====================================||==================================== *\
||																			  ||
||							  %.[#]c	.Precision							  ||
||								Tests 151 - 176								  ||
||																			  ||
\* ==============ft_printf=============||==============©Othello============== */
#elif TEST==151
	#define STRING		"%.11s"
	#define ARGUMENTS	, "Lorem ipsum"
#elif TEST==152
	#define STRING		"%.21s"
	#define ARGUMENTS	, "Lorem ipsum"
#elif TEST==153
	#define STRING		"%.5s"
	#define ARGUMENTS	, "Lorem ipsum"
#elif TEST==154
	#define STRING		"%.0s"
	#define ARGUMENTS	, "Lorem ipsum"
#elif TEST==155
	#define STRING		"%.s"
	#define ARGUMENTS	, "Lorem ipsum"
#elif TEST==156
	#define STRING		"%.11s"
	#define ARGUMENTS	, "Lorem\0ipsum"
/* ====================================||==================================== *\
\* ==============ft_printf=============||==============©Othello============== */
#elif TEST==157
	#define STRING		"[%.i]\t[%.i]\t[%.i]"
	#define ARGUMENTS	, 42, 0, -42
#elif TEST==158
	#define STRING		"[%.0i]\t[%.0i]\t[%.0i]"
	#define ARGUMENTS	, 42, 0, -42
#elif TEST==159
	#define STRING		"[%.1i]\t[%.1i]\t[%.1i]"
	#define ARGUMENTS	, 42, 0, -42
#elif TEST==160
	#define STRING		"[%.2i]\t[%.2i]\t[%.2i]"
	#define ARGUMENTS	, 42, 0, -42
#elif TEST==161
	#define STRING		"[%.3i]\t[%.3i]\t[%.3i]"
	#define ARGUMENTS	, 42, 0, -42
#elif TEST==162
	#define STRING		"[%.4i]\t[%.4i]\t[%.4i]"
	#define ARGUMENTS	, 42, 0, -42
#elif TEST==163
	#define STRING		"[%.21i]\t[%.21i]\t[%.21i]"
	#define ARGUMENTS	, 42, 0, -42
/* ====================================||==================================== *\
\* ==============ft_printf=============||==============©Othello============== */
#elif TEST==164 //undefined
	#define STRING		"%.0c"
	#define ARGUMENTS	, 'L'
#elif TEST==165 //undefined
	#define STRING		"%.1c"
	#define ARGUMENTS	, 'L'
#elif TEST==166 //undefined
	#define STRING		"%.2c"
	#define ARGUMENTS	, 'L'
#elif TEST==167 //undefined
	#define STRING		"%.0c"
	#define ARGUMENTS	, 0
#elif TEST==168 //undefined
	#define STRING		"%.1c"
	#define ARGUMENTS	, 0
#elif TEST==169 //undefined
	#define STRING		"%.2c"
	#define ARGUMENTS	, 0
/* ====================================||==================================== *\
\* ==============ft_printf=============||==============©Othello============== */
#elif TEST==170
	#define STRING		"[%.0d]\t[%.0d]\t[%.0d]\t[%.1d]\t[%.1d]\t[%.1d]\t[%.2d]\t[%.2d]\t[%.2d]\t[%.3d]\t[%.3d]\t[%.3d]\t[%.4d]\t[%.4d]\t[%.4d]\t[%.12d]\t[%.12d]\t[%.12d]"
	#define ARGUMENTS	, 42, 0, -42, 42, 0, -42, 42, 0, -42, 42, 0, -42, 42, 0, -42, 42, 0, -42
#elif TEST==171
	#define STRING		"[%.0i]\t[%.0i]\t[%.0i]\t[%.1i]\t[%.1i]\t[%.1i]\t[%.2i]\t[%.2i]\t[%.2i]\t[%.3i]\t[%.3i]\t[%.3i]\t[%.4i]\t[%.4i]\t[%.4i]\t[%.12i]\t[%.12i]\t[%.12i]"
	#define ARGUMENTS	, 42, 0, -42, 42, 0, -42, 42, 0, -42, 42, 0, -42, 42, 0, -42, 42, 0, -42
#elif TEST==172
	#define STRING		"[%.0u]\t[%.0u]\t[%.0u]\t[%.1u]\t[%.1u]\t[%.1u]\t[%.2u]\t[%.2u]\t[%.2u]\t[%.3u]\t[%.3u]\t[%.3u]\t[%.4u]\t[%.4u]\t[%.4u]\t[%.12u]\t[%.12u]\t[%.12u]"
	#define ARGUMENTS	, 42, 0, -42, 42, 0, -42, 42, 0, -42, 42, 0, -42, 42, 0, -42, 42, 0, -42
#elif TEST==173
	#define STRING		"[%.0x]\t[%.0x]\t[%.0x]\t[%.1x]\t[%.1x]\t[%.1x]\t[%.2x]\t[%.2x]\t[%.2x]\t[%.3x]\t[%.3x]\t[%.3x]\t[%.4x]\t[%.4x]\t[%.4x]\t[%.12x]\t[%.12x]\t[%.12x]"
	#define ARGUMENTS	, 42, 0, -42, 42, 0, -42, 42, 0, -42, 42, 0, -42, 42, 0, -42, 42, 0, -42
#elif TEST==174
	#define STRING		"[%.0X]\t[%.0X]\t[%.0X]\t[%.1X]\t[%.1X]\t[%.1X]\t[%.2X]\t[%.2X]\t[%.2X]\t[%.3X]\t[%.3X]\t[%.3X]\t[%.4X]\t[%.4X]\t[%.4X]\t[%.12X]\t[%.12X]\t[%.12X]"
	#define ARGUMENTS	, 42, 0, -42, 42, 0, -42, 42, 0, -42, 42, 0, -42, 42, 0, -42, 42, 0, -42
#elif TEST==175 //undefined
	#define STRING		"[%.0p]\t[%.0p]\t[%.0p]\t[%.1p]\t[%.1p]\t[%.1p]\t[%.2p]\t[%.2p]\t[%.2p]\t[%.3p]\t[%.3p]\t[%.3p]\t[%.4p]\t[%.4p]\t[%.4p]\t[%.12p]\t[%.12p]\t[%.12p]"
	#define ARGUMENTS	, (void *)42, (void *)0, (void *)-42, (void *)42, (void *)0, (void *)-42, (void *)42, (void *)0, (void *)-42, (void *)42, (void *)0, (void *)-42, (void *)42, (void *)0, (void *)-42, (void *)42, (void *)0, (void *)-42
#elif TEST==176
	#define STRING		"%.2i%.5s%.21i"
	#define ARGUMENTS	, 42, "Lorem ipsum", 42
/* ====================================||==================================== *\
||																			  ||
||								  Combinations								  ||
||								Tests 177 - 192								  ||
||																			  ||
\* ==============ft_printf=============||==============©Othello============== */
#elif TEST==177
	#define STRING		"[%c] [%c] [%c] [%-3c] [%c] [%c] [%c] [%c] [%c] [%c] [%c] [%c]"
	#define ARGUMENTS	, 'L', 'o', 'r', 'e', 'm', '_', 'i', 'p', 's', 'u', 'm', '!'
#elif TEST==178
	#define STRING		"[%s] [%s] [%s] [%-8s] [%-.5s] [%16.11s] [%s] [%s] [%s] [%-11.6s] [%s] [%s]"
	#define ARGUMENTS	, "Lorem", "ipsum", "dolordolordolor", "sit", "amet,amet,amet", "consectetur", "adipiscing", "elit.elit.elit", "MorbiMorbi", "luctusluctus", "nisinisinisi", "ipsum,ipsum,ipsum,"
#elif TEST==179
	#define STRING		"[%p] [%p] [%p] [%-11p] [%p] [%p] [%p] [%p] [%p] [%p] [%p] [%p]"
	#define ARGUMENTS	, (void *)42, (void *)42, (void *)42, (void *)42, (void *)42, (void *)42, (void *)42, (void *)42, (void *)-42, (void *)42, (void *)-42, (void *)-42
#elif TEST==180
	#define STRING		"[%d] [%011d] [%0.5d] [%-11d] [%-.5d] [%11.5d] [%d] [%d] [%011.5d] [%-11.5d] [%d] [%d]"
	#define ARGUMENTS	, 42, 42, 42, 42, 42, 42, 42, 42, -42, 42, -42, -42
#elif TEST==181
	#define STRING		"[%i] [%011i] [%0.5i] [%i] [%-.5i] [%11.5i] [%i] [%i] [%011.5i] [%-11.5i] [%i] [%i]"
	#define ARGUMENTS	, 42, 42, 42, 42, 42, 42, 42, 42, -42, 42, -42, -42
#elif TEST==182
	#define STRING		"[%u] [%011u] [%0.5u] [%-11u] [%-.5u] [%11.5u] [%u] [%u] [%011.5u] [%-11.5u] [%u] [%u]"
	#define ARGUMENTS	, 42, 42, 42, 42, 42, 42, 42, 42, -42, 42, -42, -42
#elif TEST==183
	#define STRING		"[%x] [%011x] [%0.5x] [%-11x] [%-.5x] [%11.5x] [%x] [%x] [%011.5x] [%-11.5x] [%x] [%x]"
	#define ARGUMENTS	, 42, 42, 42, 42, 42, 42, 42, 42, -42, 42, -42, -42
#elif TEST==184
	#define STRING		"[%X] [%011X] [%0.5X] [%-11X] [%-.5X] [%11.5X] [%X] [%X] [%011.5X] [%-11.5X] [%X] [%X]"
	#define ARGUMENTS	, 42, 42, 42, 42, 42, 42, 42, 42, -42, 42, -42, -42
#elif TEST==185 //undefined
	#define STRING		"[%-0c] [%03c] [%0.2c] [%-3c] [%-.2c] [%3.0c] [%-03c] [%-0.2c] [%03.2c] [%-3.2c] [%-03.2c] [%0-3.2c]"
	#define ARGUMENTS	, 'L', 'o', 'r', 'e', 'm', '_', 'i', 'p', 's', 'u', 'm', '!'
#elif TEST==186 //undefined
	#define STRING		"[%-0s] [%011s] [%0.5s] [%-8s] [%-.5s] [%16.11s] [%-011s] [%-0.5s] [%07.5s] [%-11.6s] [%-06.4s] [%0-8.6s]"
	#define ARGUMENTS	, "Lorem", "ipsum", "dolordolordolor", "sit", "amet,amet,amet", "consectetur", "adipiscing", "elit.elit.elit", "MorbiMorbi", "luctusluctus", "nisinisinisi", "ipsum,ipsum,ipsum,"
#elif TEST==187 //undefined
	#define STRING		"[%-0p] [%011p] [%0.5p] [%-11p] [%-.5p] [%11.5p] [%-011p] [%-0.5p] [%011.5p] [%-11.5p] [%-011.5p] [%0-11.5p]"
	#define ARGUMENTS	, (void *)42, (void *)42, (void *)42, (void *)42, (void *)42, (void *)42, (void *)42, (void *)42, (void *)-42, (void *)42, (void *)-42, (void *)-42
#elif TEST==188 //undefined
	#define STRING		"[%-0d] [%011d] [%0.5d] [%-11d] [%-.5d] [%11.5d] [%-011d] [%-0.5d] [%011.5d] [%-11.5d] [%-011.5d] [%0-11.5d]"
	#define ARGUMENTS	, 42, 42, 42, 42, 42, 42, 42, 42, -42, 42, -42, -42
#elif TEST==189 //undefined
	#define STRING		"[%-0i] [%011i] [%0.5i] [%-11i] [%-.5i] [%11.5i] [%-011i] [%-0.5i] [%011.5i] [%-11.5i] [%-011.5i] [%0-11.5i]"
	#define ARGUMENTS	, 42, 42, 42, 42, 42, 42, 42, 42, -42, 42, -42, -42
#elif TEST==190 //undefined
	#define STRING		"[%-0u] [%011u] [%0.5u] [%-11u] [%-.5u] [%11.5u] [%-011u] [%-0.5u] [%011.5u] [%-11.5u] [%-011.5u] [%0-11.5u]"
	#define ARGUMENTS	, 42, 42, 42, 42, 42, 42, 42, 42, -42, 42, -42, -42
#elif TEST==191 //undefined
	#define STRING		"[%-0x] [%011x] [%0.5x] [%-11x] [%-.5x] [%11.5x] [%-011x] [%-0.5x] [%011.5x] [%-11.5x] [%-011.5x] [%0-11.5x]"
	#define ARGUMENTS	, 42, 42, 42, 42, 42, 42, 42, 42, -42, 42, -42, -42
#elif TEST==192 //undefined
	#define STRING		"[%-0X] [%011X] [%0.5X] [%-11X] [%-.5X] [%11.5X] [%-011X] [%-0.5X] [%011.5X] [%-11.5X] [%-011.5X] [%0-11.5X]"
	#define ARGUMENTS	, 42, 42, 42, 42, 42, 42, 42, 42, -42, 42, -42, -42
/* ====================================||==================================== *\
||																			  ||
||							 %#c	Alternate Form							  ||
||								Tests 193 - 200								  ||
||																			  ||
\* ==============ft_printf=============||==============©Othello============== */
#elif TEST==193
	#define STRING		"%#x"
	#define ARGUMENTS	, 0
#elif TEST==194
	#define STRING		"%#x"
	#define ARGUMENTS	, 42
#elif TEST==195
	#define STRING		"%#x"
	#define ARGUMENTS	, -1
#elif TEST==196
	#define STRING		"%#X"
	#define ARGUMENTS	, 0
#elif TEST==197
	#define STRING		"%#X"
	#define ARGUMENTS	, 42
#elif TEST==198
	#define STRING		"%#X"
	#define ARGUMENTS	, -1
#elif TEST==199
	#define STRING		"%#x %#x %#x\t%#X %#X %#X"
	#define ARGUMENTS	, -1, 0, 42, -1, 0, 42
#elif TEST==200 //undefined
	#define STRING		"%#s %#s\t%#p %#p %#p\t%#d %#d %#d\t%#i %#i %#i\t%#u %#u %#u\t%#%\t%#c %#c"
	#define ARGUMENTS	,"0", "42", (void *)-1, (void *)0, (void *)42, -1, 0, 42, -1, 0, 42, -1, 0, 42, 42, 0
/* ====================================||==================================== *\
||																			  ||
||								%' '	Spaced								  ||
||								Tests 201 - 209								  ||
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
	#define STRING		"%%% %%% %% %%\t[% d] [% d] [% d]\t[% i] [% i] [% i]"
	#define ARGUMENTS	, -1, 0, 42, -1, 0, 42
#elif TEST==206 //undefined
	#define STRING		"% s"
	#define ARGUMENTS	, ""
#elif TEST==207 //undefined
	#define STRING		"% s% s% s% s"
	#define ARGUMENTS	, " - ", " ", "4", "2"
#elif TEST==208 //undefined
	#define STRING		" % s % s % s % s % s % s "
	#define ARGUMENTS	, " - ", "", "4", "", "2 ", NULL
#elif TEST==209 //undefined
	#define STRING		"[% s] [% s] [% s] [% s]\t[% p] [% p] [% p]\t[% u] [% u] [% u]\t[% x] [% x] [% x]\t[% X] [% X] [% X]\t[% c] [% c]"
	#define ARGUMENTS	, "42", " ", "", NULL, (void *)-1, (void *)0, (void *)42, -1, 0, 42, -1, 0, 42, -1, 0, 42, 42, 0
/* ====================================||==================================== *\
||																			  ||
||								  %+	Signed								  ||
||								Tests 210 - 216								  ||
||																			  ||
\* ==============ft_printf=============||==============©Othello============== */
#elif TEST==210
	#define STRING		"%+i"
	#define ARGUMENTS	, 42
#elif TEST==211
	#define STRING		"%+i"
	#define ARGUMENTS	, -42
#elif TEST==212
	#define STRING		"\nINT_MIN - 1 %+d\tand\tINT_MAX + 1 %+d\nUINT_MAX %+d\tand\t-UINT_MAX %+d\nLONG_MIN %+d\tand\tLONG_MAX %+d\nULONG_MAX %+d\tand\t-ULONG_MAX %+d\n"
	#define ARGUMENTS	, INT_MIN - 1, INT_MAX + 1, UINT_MAX, -UINT_MAX, LONG_MIN, LONG_MAX, ULONG_MAX, -ULONG_MAX
#elif TEST==213
	#define STRING		"\nINT_MIN - 1 %+i\tand\tINT_MAX + 1 %+i\nUINT_MAX %+i\tand\t-UINT_MAX %+i\nLONG_MIN %+i\tand\tLONG_MAX %+i\nULONG_MAX %+i\tand\t-ULONG_MAX %+i\n"
	#define ARGUMENTS	, INT_MIN - 1, INT_MAX + 1, UINT_MAX, -UINT_MAX, LONG_MIN, LONG_MAX, ULONG_MAX, -ULONG_MAX
#elif TEST==214 //undefined
	#define STRING		"\nINT_MIN - 1 %+u\tand\tINT_MAX + 1 %+u\nUINT_MAX %+u\tand\t-UINT_MAX %+u\nLONG_MIN %+u\tand\tLONG_MAX %+u\nULONG_MAX %+u\tand\t-ULONG_MAX %+u\n"
	#define ARGUMENTS	, INT_MIN - 1, INT_MAX + 1, UINT_MAX, -UINT_MAX, LONG_MIN, LONG_MAX, ULONG_MAX, -ULONG_MAX
#elif TEST==215 //undefined
	#define STRING		"\nINT_MIN - 1 %+x\tand\tINT_MAX + 1 %+x\nUINT_MAX %+x\tand\t-UINT_MAX %+x\nLONG_MIN %+x\tand\tLONG_MAX %+x\nULONG_MAX %+x\tand\t-ULONG_MAX %+x\n"
	#define ARGUMENTS	, INT_MIN - 1, INT_MAX + 1, UINT_MAX, -UINT_MAX, LONG_MIN, LONG_MAX, ULONG_MAX, -ULONG_MAX
#elif TEST==216 //undefined
	#define STRING		"\nINT_MIN - 1 %+X\tand\tINT_MAX + 1 %+X\nUINT_MAX %+X\tand\t-UINT_MAX %+X\nLONG_MIN %+X\tand\tLONG_MAX %+X\nULONG_MAX %+X\tand\t-ULONG_MAX %+X\n"
	#define ARGUMENTS	, INT_MIN - 1, INT_MAX + 1, UINT_MAX, -UINT_MAX, LONG_MIN, LONG_MAX, ULONG_MAX, -ULONG_MAX
/* ====================================||==================================== *\
||																			  ||
||								  Combinations								  ||
||								Tests 217 - 224								  ||
||																			  ||
\* ==============ft_printf=============||==============©Othello============== */
#elif TEST==217 //undefined
	#define STRING		"[%# c] [%#+c] [% +c] [%# +c] [%#+ c] [% #+c] [% +#c] [%+# c] [%+ #c]"
	#define ARGUMENTS	, 'L', 'o', 'r', 'e', 'm', '_', 'i', 'p', 's'
#elif TEST==218 //undefined
	#define STRING		"[%# s] [%#+s] [% +s] [%# +s] [%#+ s] [% #+s] [% +#s] [%+# s] [%+ #s]"
	#define ARGUMENTS	, "Lorem", "ipsum", "dolor", "sit", "amet,", "consectetur", "adipiscing", "elit.", "Morbi"
#elif TEST==219 //undefined
	#define STRING		"[%# p] [%#+p] [% +p] [%# +p] [%#+ p] [% #+p] [% +#p] [%+# p] [%+ #p]"
	#define ARGUMENTS	, (void *)42, (void *)42, (void *)42, (void *)42, (void *)42, (void *)42, (void *)42, (void *)42, (void *)42
#elif TEST==220 //undefined
	#define STRING		"[%# d] [%#+d] [% +d] [%# +d] [%#+ d] [% #+d] [% +#d] [%+# d] [%+ #d]"
	#define ARGUMENTS	, 42, 42, 42, 42, 42, 42, 42, 42, 42
#elif TEST==221 //undefined
	#define STRING		"[%# i] [%#+i] [% +i] [%# +i] [%#+ i] [% #+i] [% +#i] [%+# i] [%+ #i]"
	#define ARGUMENTS	, 42, 42, 42, 42, 42, 42, 42, 42, 42
#elif TEST==222 //undefined
	#define STRING		"[%# u] [%#+u] [% +u] [%# +u] [%#+ u] [% #+u] [% +#u] [%+# u] [%+ #u]"
	#define ARGUMENTS	, 42, 42, 42, 42, 42, 42, 42, 42, 42
#elif TEST==223 //undefined
	#define STRING		"[%# x] [%#+x] [% +x] [%# +x] [%#+ x] [% #+x] [% +#x] [%+# x] [%+ #x]"
	#define ARGUMENTS	, 42, 42, 42, 42, 42, 42, 42, 42, 42
#elif TEST==224 //undefined
	#define STRING		"[%# X] [%#+X] [% +X] [%# +X] [%#+ X] [% #+X] [% +#X] [%+# X] [%+ #X]"
	#define ARGUMENTS	, 42, 42, 42, 42, 42, 42, 42, 42, 42
/* ====================================||==================================== *\
||																			  ||
||							   Full Combinations							  ||
||								Tests  225 - 249							  ||
||																			  ||
\* ==============ft_printf=============||==============©Othello============== */
#elif TEST==225
	#define STRING		"[%-11c]\t[%-11c]"
	#define ARGUMENTS	, 42, 42
#elif TEST==226
	#define STRING		"[%-11.5s]\t[%-11.5s]"
	#define ARGUMENTS	, "Lorem Ipsum", "ipsum dolor sit amet"
#elif TEST==227
	#define STRING		"[%-11p]\t[%-11p]"
	#define ARGUMENTS	, (void *)42, (void *)42
#elif TEST==228
	#define STRING		"[%-+11.5d]\t[%+-11.5d]\t[%0 11.5d]\t[% 011.5d]"
	#define ARGUMENTS	, 42, 42, 42, 42
#elif TEST==229
	#define STRING		"[%-+11.5i]\t[%+-11.5i]\t[%0 11.5i]\t[% 011.5i]"
	#define ARGUMENTS	, 42, 42, 42, 42
#elif TEST==230
	#define STRING		"[%-11.5u]\t[%-11.5u]\t[%011.5u]\t[%011.5u]"
	#define ARGUMENTS	, 42, 42, 42, 42
#elif TEST==231
	#define STRING		"[%#-11.5x]\t[%-#11.5x]\t[%#011.5x]\t[%0#11.5x]"
	#define ARGUMENTS	, 42, 42, 42, 42
#elif TEST==232
	#define STRING		"[%#-11.5X]\t[%-#11.5X]\t[%#011.5X]\t[%0#11.5X]"
	#define ARGUMENTS	, 42, 42, 42, 42
#elif TEST==233 //multilinetest
	#define STRING		"Multi line test"
	#define ARGUMENTS	
/* ====================================||==================================== *\
\* ==============ft_printf=============||==============©Othello============== */
#elif TEST==234 //undefined
	#define STRING		"[%#-+11.5c]\t[%+-#11.5c]\t[%#0 11.5c]\t[% 0#11.5c]"
	#define ARGUMENTS	, 42, 42, 42, 42
#elif TEST==235 //undefined
	#define STRING		"[%#-+11.5s]\t[%+-#11.5s]\t[%#0 11.5s]\t[% 0#11.5s]"
	#define ARGUMENTS	, "Lorem Ipsum", "ipsum dolor sit amet", "Lorem Ipsum", "ipsum dolor sit amet"
#elif TEST==236 //undefined
	#define STRING		"[%#-+11.5p]\t[%+-#11.5p]\t[%#0 11.5p]\t[% 0#11.5p]"
	#define ARGUMENTS	, (void *)42, (void *)42, (void *)42, (void *)42
#elif TEST==237 //undefined
	#define STRING		"[%#-+11.5d]\t[%+-#11.5d]\t[%#0 11.5d]\t[% 0#11.5d]"
	#define ARGUMENTS	, 42, 42, 42, 42
#elif TEST==238 //undefined
	#define STRING		"[%#-+11.5i]\t[%+-#11.5i]\t[%#0 11.5i]\t[% 0#11.5i]"
	#define ARGUMENTS	, 42, 42, 42, 42
#elif TEST==239 //undefined
	#define STRING		"[%#-+11.5u]\t[%+-#11.5u]\t[%#0 11.5u]\t[% 0#11.5u]"
	#define ARGUMENTS	, 42, 42, 42, 42
#elif TEST==240 //undefined
	#define STRING		"[%#-+11.5x]\t[%+-#11.5x]\t[%#0 11.5x]\t[% 0#11.5x]"
	#define ARGUMENTS	, 42, 42, 42, 42
#elif TEST==241 //undefined
	#define STRING		"[%#-+11.5X]\t[%+-#11.5X]\t[%#0 11.5X]\t[% 0#11.5X]"
	#define ARGUMENTS	, 42, 42, 42, 42
/* ====================================||==================================== *\
\* ==============ft_printf=============||==============©Othello============== */
#elif TEST==242 //undefined
	#define STRING		"[%#0- +11.5c]\t[%+ -0#11.5c]"
	#define ARGUMENTS	, 42, 42
#elif TEST==243 //undefined
	#define STRING		"[%#0- +11.5s]\t[%+ -0#11.5s]"
	#define ARGUMENTS	, "Lorem Ipsum", "ipsum dolor sit amet"
#elif TEST==244 //undefined
	#define STRING		"[%#0- +11.5p]\t[%+ -0#11.5p]"
	#define ARGUMENTS	, (void *)42, (void *)42
#elif TEST==245 //undefined
	#define STRING		"[%#0- +11.5d]\t[%+ -0#11.5d]"
	#define ARGUMENTS	, 42, 42
#elif TEST==246 //undefined
	#define STRING		"[%#0- +11.5i]\t[%+ -0#11.5i]"
	#define ARGUMENTS	, 42, 42
#elif TEST==247 //undefined
	#define STRING		"[%#0- +11.5u]\t[%+ -0#11.5u]"
	#define ARGUMENTS	, 42, 42
#elif TEST==248 //undefined
	#define STRING		"[%#0- +11.5x]\t[%+ -0#11.5x]"
	#define ARGUMENTS	, 42, 42
#elif TEST==249 //undefined
	#define STRING		"[%#0- +11.5X]\t[%+ -0#11.5X]"
	#define ARGUMENTS	, 42, 42

#else
	#define STRING		"Incorrect input found for test %d\n"
	#define ARGUMENTS	, TEST
#endif