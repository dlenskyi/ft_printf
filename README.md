Hey, it's my first project in algorithms of school 42
ft_printf have to reproduct the same behavior as libc's printf.
My ft_printf can manage %d, %D, %i, %u, %U, %s, %c, %x, %X, %o, %O, %b, %B, %f, %F, %p, %n conversions.
Goes well with flags #0-+*, space and with extensions h, hh, l, ll, L.
Managing wildcards and setting color to output of ft_printf.
git clone https://github.com/dlenskyi/ft_printf.git
make
gcc main.c libftprintf.a && ./a.out
Enjoy!
