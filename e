
				INT				UNSIGNED INT
Modifier		d, i			o, u, x, X				n

hh				signed char		unsigned char			signed char *
h				short			unsigned short			short *
l (ell)			long			unsigned long			long *
ll (ell ell)	long long		unsigned long long		long long *
j				intmax_t		uintmax_t				intmax_t *
t				ptrdiff_t		(see note)				ptrdiff_t *
z				(see note)		size_t					(see note)
q (deprecated)	quad_t			u_quad_t				quad_t *



				DOUBLE
Modifier		a, A, e, E, f, F, g, G

l (ell)			double (ignored, same behavior as without it)
L				long double



				INT(uchar)		CHAR*
Modifier		c				s

l (ell)			wint_t			wchar_t *


char : 1
short : 2
int : 4
long : 8
long long : 8
intmax_t : 8
ptrdiff_t : 8

					BITWISE AND ->  &
FF					1 oct
FFFF				2 oct
FFFFFFFF			4 oct
FFFFFFFFFFFFFFFF	8 oct




00000000		0			0			0x0
00000001		1			1			0x1
00000010		2			2			0x2
00000011		3			3			0x3
00000100		4			4			0x4
00000101		5			5			0x5
00000110		6			6			0x6
00000111		7			7			0x7
00001000		8			8			0x8
00001001		10			9			0x9
00001010		11			10			0xA
00001011		12			11			0xB
00001100		13			12			0xC
00001101		14			13			0xD
00001110		15			14			0xE
00001111		16			15			0xF
