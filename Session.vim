let SessionLoad = 1
if &cp | set nocp | endif
let s:so_save = &so | let s:siso_save = &siso | set so=0 siso=0
let v:this_session=expand("<sfile>:p")
silent only
silent tabonly
exe "cd " . escape(expand("<sfile>:p:h"), ' ')
if expand('%') == '' && !&modified && line('$') <= 1 && getline(1) == ''
  let s:wipebuf = bufnr('%')
endif
set shortmess=aoO
badd +1 Makefile
badd +1 srcs/ft_printf.c
badd +1 cheatsheet
badd +69 includes/s_ctx.h
badd +84 srcs/interceptor.c
badd +1 srcs/number_width.c
badd +57 srcs/print_number.c
badd +1 main.c
badd +1 srcs/flags.c
badd +64 srcs/buff_writer.c
badd +1 srcs/specifiers/spec_d.c
badd +48 srcs/specifiers/spec_o.c
badd +49 srcs/specifiers/spec_x.c
badd +46 srcs/specifiers/spec_u.c
badd +48 srcs/specifiers/spec_b.c
badd +51 srcs/specifiers/spec_p.c
badd +178 srcs/specifiers/spec_c.c
badd +1 srcs/specifiers/spec_s.c
badd +68 srcs/integer.c
badd +64 srcs/print_number_hex.c
badd +15 includes/precalculated_decimales_base_10.h
badd +34 srcs/precalculated_decimales.c
badd +2 includes/precalculated_decimales.h
badd +1 ~/cursus/ft_printf
badd +1 includes/ft_printf.h
badd +1 srcs/specifiers/spec_percent.c
badd +1 includes/interceptor.h
badd +1 includes/flags.h
badd +1 includes/buff_writer.h
badd +1 includes/specifiers.h
argglobal
silent! argdel *
tabnew
tabnew
tabnew
tabnew
tabnext -4
edit cheatsheet
set splitbelow splitright
wincmd _ | wincmd |
vsplit
wincmd _ | wincmd |
vsplit
wincmd _ | wincmd |
vsplit
3wincmd h
wincmd _ | wincmd |
split
1wincmd k
wincmd w
wincmd w
wincmd w
wincmd _ | wincmd |
split
wincmd _ | wincmd |
split
2wincmd k
wincmd w
wincmd w
wincmd w
wincmd _ | wincmd |
split
1wincmd k
wincmd w
set nosplitbelow
set nosplitright
wincmd t
set winminheight=0
set winheight=1
set winminwidth=0
set winwidth=1
exe '1resize ' . ((&lines * 7 + 40) / 80)
exe 'vert 1resize ' . ((&columns * 84 + 181) / 362)
exe '2resize ' . ((&lines * 68 + 40) / 80)
exe 'vert 2resize ' . ((&columns * 84 + 181) / 362)
exe 'vert 3resize ' . ((&columns * 84 + 181) / 362)
exe '4resize ' . ((&lines * 9 + 40) / 80)
exe 'vert 4resize ' . ((&columns * 84 + 181) / 362)
exe '5resize ' . ((&lines * 4 + 40) / 80)
exe 'vert 5resize ' . ((&columns * 84 + 181) / 362)
exe '6resize ' . ((&lines * 61 + 40) / 80)
exe 'vert 6resize ' . ((&columns * 84 + 181) / 362)
exe '7resize ' . ((&lines * 25 + 40) / 80)
exe 'vert 7resize ' . ((&columns * 107 + 181) / 362)
exe '8resize ' . ((&lines * 50 + 40) / 80)
exe 'vert 8resize ' . ((&columns * 107 + 181) / 362)
argglobal
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let s:l = 14 - ((3 * winheight(0) + 3) / 7)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
14
normal! 0
wincmd w
argglobal
if bufexists('Makefile') | buffer Makefile | else | edit Makefile | endif
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let s:l = 39 - ((36 * winheight(0) + 34) / 68)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
39
normal! 053|
wincmd w
argglobal
if bufexists('srcs/ft_printf.c') | buffer srcs/ft_printf.c | else | edit srcs/ft_printf.c | endif
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let s:l = 41 - ((39 * winheight(0) + 38) / 76)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
41
normal! 0
lcd ~/cursus/ft_printf
wincmd w
argglobal
if bufexists('~/cursus/ft_printf/includes/ft_printf.h') | buffer ~/cursus/ft_printf/includes/ft_printf.h | else | edit ~/cursus/ft_printf/includes/ft_printf.h | endif
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 19 - ((4 * winheight(0) + 4) / 9)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
19
normal! 0
wincmd w
argglobal
if bufexists('~/cursus/ft_printf/includes/s_ctx.h') | buffer ~/cursus/ft_printf/includes/s_ctx.h | else | edit ~/cursus/ft_printf/includes/s_ctx.h | endif
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let s:l = 24 - ((2 * winheight(0) + 2) / 4)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
24
normal! 021|
wincmd w
argglobal
if bufexists('~/cursus/ft_printf/srcs/buff_writer.c') | buffer ~/cursus/ft_printf/srcs/buff_writer.c | else | edit ~/cursus/ft_printf/srcs/buff_writer.c | endif
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let s:l = 41 - ((30 * winheight(0) + 30) / 61)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
41
normal! 09|
lcd ~/cursus/ft_printf
wincmd w
argglobal
terminal ++curwin ++cols=107 ++rows=25 
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 34 - ((19 * winheight(0) + 12) / 25)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
34
normal! 021|
wincmd w
argglobal
if bufexists('~/cursus/ft_printf/main.c') | buffer ~/cursus/ft_printf/main.c | else | edit ~/cursus/ft_printf/main.c | endif
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let s:l = 26 - ((6 * winheight(0) + 25) / 50)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
26
normal! 0
wincmd w
exe '1resize ' . ((&lines * 7 + 40) / 80)
exe 'vert 1resize ' . ((&columns * 84 + 181) / 362)
exe '2resize ' . ((&lines * 68 + 40) / 80)
exe 'vert 2resize ' . ((&columns * 84 + 181) / 362)
exe 'vert 3resize ' . ((&columns * 84 + 181) / 362)
exe '4resize ' . ((&lines * 9 + 40) / 80)
exe 'vert 4resize ' . ((&columns * 84 + 181) / 362)
exe '5resize ' . ((&lines * 4 + 40) / 80)
exe 'vert 5resize ' . ((&columns * 84 + 181) / 362)
exe '6resize ' . ((&lines * 61 + 40) / 80)
exe 'vert 6resize ' . ((&columns * 84 + 181) / 362)
exe '7resize ' . ((&lines * 25 + 40) / 80)
exe 'vert 7resize ' . ((&columns * 107 + 181) / 362)
exe '8resize ' . ((&lines * 50 + 40) / 80)
exe 'vert 8resize ' . ((&columns * 107 + 181) / 362)
tabnext
edit ~/cursus/ft_printf/includes/interceptor.h
set splitbelow splitright
wincmd _ | wincmd |
vsplit
wincmd _ | wincmd |
vsplit
wincmd _ | wincmd |
vsplit
3wincmd h
wincmd _ | wincmd |
split
1wincmd k
wincmd w
wincmd w
wincmd _ | wincmd |
split
1wincmd k
wincmd w
wincmd w
wincmd _ | wincmd |
split
1wincmd k
wincmd w
wincmd w
wincmd _ | wincmd |
split
1wincmd k
wincmd w
set nosplitbelow
set nosplitright
wincmd t
set winminheight=0
set winheight=1
set winminwidth=0
set winwidth=1
exe '1resize ' . ((&lines * 10 + 40) / 80)
exe 'vert 1resize ' . ((&columns * 90 + 181) / 362)
exe '2resize ' . ((&lines * 65 + 40) / 80)
exe 'vert 2resize ' . ((&columns * 90 + 181) / 362)
exe '3resize ' . ((&lines * 10 + 40) / 80)
exe 'vert 3resize ' . ((&columns * 90 + 181) / 362)
exe '4resize ' . ((&lines * 65 + 40) / 80)
exe 'vert 4resize ' . ((&columns * 90 + 181) / 362)
exe '5resize ' . ((&lines * 10 + 40) / 80)
exe 'vert 5resize ' . ((&columns * 90 + 181) / 362)
exe '6resize ' . ((&lines * 65 + 40) / 80)
exe 'vert 6resize ' . ((&columns * 90 + 181) / 362)
exe '7resize ' . ((&lines * 10 + 40) / 80)
exe 'vert 7resize ' . ((&columns * 89 + 181) / 362)
exe '8resize ' . ((&lines * 65 + 40) / 80)
exe 'vert 8resize ' . ((&columns * 89 + 181) / 362)
argglobal
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 18 - ((7 * winheight(0) + 5) / 10)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
18
normal! 0
wincmd w
argglobal
if bufexists('~/cursus/ft_printf/srcs/interceptor.c') | buffer ~/cursus/ft_printf/srcs/interceptor.c | else | edit ~/cursus/ft_printf/srcs/interceptor.c | endif
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let s:l = 23 - ((7 * winheight(0) + 32) / 65)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
23
normal! 014|
wincmd w
argglobal
if bufexists('~/cursus/ft_printf/includes/flags.h') | buffer ~/cursus/ft_printf/includes/flags.h | else | edit ~/cursus/ft_printf/includes/flags.h | endif
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 22 - ((9 * winheight(0) + 5) / 10)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
22
normal! 0
wincmd w
argglobal
if bufexists('~/cursus/ft_printf/srcs/flags.c') | buffer ~/cursus/ft_printf/srcs/flags.c | else | edit ~/cursus/ft_printf/srcs/flags.c | endif
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let s:l = 143 - ((41 * winheight(0) + 32) / 65)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
143
normal! 0
wincmd w
argglobal
if bufexists('~/cursus/ft_printf/includes/specifiers.h') | buffer ~/cursus/ft_printf/includes/specifiers.h | else | edit ~/cursus/ft_printf/includes/specifiers.h | endif
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 32 - ((9 * winheight(0) + 5) / 10)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
32
normal! 0
wincmd w
argglobal
if bufexists('~/cursus/ft_printf/srcs/integer.c') | buffer ~/cursus/ft_printf/srcs/integer.c | else | edit ~/cursus/ft_printf/srcs/integer.c | endif
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let s:l = 105 - ((63 * winheight(0) + 32) / 65)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
105
normal! 0
wincmd w
argglobal
if bufexists('~/cursus/ft_printf/includes/buff_writer.h') | buffer ~/cursus/ft_printf/includes/buff_writer.h | else | edit ~/cursus/ft_printf/includes/buff_writer.h | endif
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 21 - ((9 * winheight(0) + 5) / 10)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
21
normal! 0
wincmd w
argglobal
if bufexists('~/cursus/ft_printf/srcs/buff_writer.c') | buffer ~/cursus/ft_printf/srcs/buff_writer.c | else | edit ~/cursus/ft_printf/srcs/buff_writer.c | endif
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let s:l = 15 - ((11 * winheight(0) + 32) / 65)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
15
normal! 0
wincmd w
7wincmd w
exe '1resize ' . ((&lines * 10 + 40) / 80)
exe 'vert 1resize ' . ((&columns * 90 + 181) / 362)
exe '2resize ' . ((&lines * 65 + 40) / 80)
exe 'vert 2resize ' . ((&columns * 90 + 181) / 362)
exe '3resize ' . ((&lines * 10 + 40) / 80)
exe 'vert 3resize ' . ((&columns * 90 + 181) / 362)
exe '4resize ' . ((&lines * 65 + 40) / 80)
exe 'vert 4resize ' . ((&columns * 90 + 181) / 362)
exe '5resize ' . ((&lines * 10 + 40) / 80)
exe 'vert 5resize ' . ((&columns * 90 + 181) / 362)
exe '6resize ' . ((&lines * 65 + 40) / 80)
exe 'vert 6resize ' . ((&columns * 90 + 181) / 362)
exe '7resize ' . ((&lines * 10 + 40) / 80)
exe 'vert 7resize ' . ((&columns * 89 + 181) / 362)
exe '8resize ' . ((&lines * 65 + 40) / 80)
exe 'vert 8resize ' . ((&columns * 89 + 181) / 362)
tabnext
edit ~/cursus/ft_printf/srcs/number_width.c
set splitbelow splitright
wincmd _ | wincmd |
vsplit
wincmd _ | wincmd |
vsplit
wincmd _ | wincmd |
vsplit
3wincmd h
wincmd w
wincmd w
wincmd w
wincmd _ | wincmd |
split
1wincmd k
wincmd w
set nosplitbelow
set nosplitright
wincmd t
set winminheight=0
set winheight=1
set winminwidth=0
set winwidth=1
exe 'vert 1resize ' . ((&columns * 91 + 181) / 362)
exe 'vert 2resize ' . ((&columns * 90 + 181) / 362)
exe 'vert 3resize ' . ((&columns * 88 + 181) / 362)
exe '4resize ' . ((&lines * 9 + 40) / 80)
exe 'vert 4resize ' . ((&columns * 90 + 181) / 362)
exe '5resize ' . ((&lines * 66 + 40) / 80)
exe 'vert 5resize ' . ((&columns * 90 + 181) / 362)
argglobal
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let s:l = 61 - ((57 * winheight(0) + 38) / 76)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
61
normal! 05|
wincmd w
argglobal
if bufexists('~/cursus/ft_printf/srcs/print_number.c') | buffer ~/cursus/ft_printf/srcs/print_number.c | else | edit ~/cursus/ft_printf/srcs/print_number.c | endif
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let s:l = 50 - ((47 * winheight(0) + 38) / 76)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
50
normal! 062|
wincmd w
argglobal
if bufexists('~/cursus/ft_printf/srcs/print_number_hex.c') | buffer ~/cursus/ft_printf/srcs/print_number_hex.c | else | edit ~/cursus/ft_printf/srcs/print_number_hex.c | endif
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let s:l = 47 - ((44 * winheight(0) + 38) / 76)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
47
normal! 0
wincmd w
argglobal
if bufexists('~/cursus/ft_printf/includes/precalculated_decimales.h') | buffer ~/cursus/ft_printf/includes/precalculated_decimales.h | else | edit ~/cursus/ft_printf/includes/precalculated_decimales.h | endif
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let s:l = 21 - ((8 * winheight(0) + 4) / 9)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
21
normal! 0
wincmd w
argglobal
if bufexists('~/cursus/ft_printf/srcs/precalculated_decimales.c') | buffer ~/cursus/ft_printf/srcs/precalculated_decimales.c | else | edit ~/cursus/ft_printf/srcs/precalculated_decimales.c | endif
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let s:l = 295 - ((34 * winheight(0) + 33) / 66)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
295
normal! 0
wincmd w
exe 'vert 1resize ' . ((&columns * 91 + 181) / 362)
exe 'vert 2resize ' . ((&columns * 90 + 181) / 362)
exe 'vert 3resize ' . ((&columns * 88 + 181) / 362)
exe '4resize ' . ((&lines * 9 + 40) / 80)
exe 'vert 4resize ' . ((&columns * 90 + 181) / 362)
exe '5resize ' . ((&lines * 66 + 40) / 80)
exe 'vert 5resize ' . ((&columns * 90 + 181) / 362)
tabnext
edit ~/cursus/ft_printf/srcs/specifiers/spec_d.c
set splitbelow splitright
wincmd _ | wincmd |
vsplit
wincmd _ | wincmd |
vsplit
wincmd _ | wincmd |
vsplit
3wincmd h
wincmd _ | wincmd |
split
1wincmd k
wincmd w
wincmd w
wincmd _ | wincmd |
split
1wincmd k
wincmd w
wincmd w
wincmd w
wincmd _ | wincmd |
split
1wincmd k
wincmd w
set nosplitbelow
set nosplitright
wincmd t
set winminheight=0
set winheight=1
set winminwidth=0
set winwidth=1
exe '1resize ' . ((&lines * 36 + 40) / 80)
exe 'vert 1resize ' . ((&columns * 90 + 181) / 362)
exe '2resize ' . ((&lines * 39 + 40) / 80)
exe 'vert 2resize ' . ((&columns * 90 + 181) / 362)
exe '3resize ' . ((&lines * 37 + 40) / 80)
exe 'vert 3resize ' . ((&columns * 90 + 181) / 362)
exe '4resize ' . ((&lines * 38 + 40) / 80)
exe 'vert 4resize ' . ((&columns * 90 + 181) / 362)
exe 'vert 5resize ' . ((&columns * 88 + 181) / 362)
exe '6resize ' . ((&lines * 36 + 40) / 80)
exe 'vert 6resize ' . ((&columns * 91 + 181) / 362)
exe '7resize ' . ((&lines * 39 + 40) / 80)
exe 'vert 7resize ' . ((&columns * 91 + 181) / 362)
argglobal
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let s:l = 16 - ((14 * winheight(0) + 18) / 36)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
16
normal! 0
wincmd w
argglobal
if bufexists('~/cursus/ft_printf/srcs/specifiers/spec_b.c') | buffer ~/cursus/ft_printf/srcs/specifiers/spec_b.c | else | edit ~/cursus/ft_printf/srcs/specifiers/spec_b.c | endif
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let s:l = 16 - ((14 * winheight(0) + 19) / 39)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
16
normal! 0
wincmd w
argglobal
if bufexists('~/cursus/ft_printf/srcs/specifiers/spec_u.c') | buffer ~/cursus/ft_printf/srcs/specifiers/spec_u.c | else | edit ~/cursus/ft_printf/srcs/specifiers/spec_u.c | endif
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let s:l = 16 - ((14 * winheight(0) + 18) / 37)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
16
normal! 0
wincmd w
argglobal
if bufexists('~/cursus/ft_printf/srcs/specifiers/spec_percent.c') | buffer ~/cursus/ft_printf/srcs/specifiers/spec_percent.c | else | edit ~/cursus/ft_printf/srcs/specifiers/spec_percent.c | endif
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
17
normal! zo
22
normal! zo
23
normal! zo
25
normal! zo
let s:l = 17 - ((15 * winheight(0) + 19) / 38)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
17
normal! 014|
wincmd w
argglobal
if bufexists('~/cursus/ft_printf/srcs/specifiers/spec_o.c') | buffer ~/cursus/ft_printf/srcs/specifiers/spec_o.c | else | edit ~/cursus/ft_printf/srcs/specifiers/spec_o.c | endif
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let s:l = 16 - ((14 * winheight(0) + 38) / 76)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
16
normal! 0
wincmd w
argglobal
if bufexists('~/cursus/ft_printf/srcs/specifiers/spec_x.c') | buffer ~/cursus/ft_printf/srcs/specifiers/spec_x.c | else | edit ~/cursus/ft_printf/srcs/specifiers/spec_x.c | endif
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let s:l = 16 - ((14 * winheight(0) + 18) / 36)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
16
normal! 0
wincmd w
argglobal
if bufexists('~/cursus/ft_printf/srcs/specifiers/spec_p.c') | buffer ~/cursus/ft_printf/srcs/specifiers/spec_p.c | else | edit ~/cursus/ft_printf/srcs/specifiers/spec_p.c | endif
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let s:l = 18 - ((10 * winheight(0) + 19) / 39)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
18
normal! 0
wincmd w
exe '1resize ' . ((&lines * 36 + 40) / 80)
exe 'vert 1resize ' . ((&columns * 90 + 181) / 362)
exe '2resize ' . ((&lines * 39 + 40) / 80)
exe 'vert 2resize ' . ((&columns * 90 + 181) / 362)
exe '3resize ' . ((&lines * 37 + 40) / 80)
exe 'vert 3resize ' . ((&columns * 90 + 181) / 362)
exe '4resize ' . ((&lines * 38 + 40) / 80)
exe 'vert 4resize ' . ((&columns * 90 + 181) / 362)
exe 'vert 5resize ' . ((&columns * 88 + 181) / 362)
exe '6resize ' . ((&lines * 36 + 40) / 80)
exe 'vert 6resize ' . ((&columns * 91 + 181) / 362)
exe '7resize ' . ((&lines * 39 + 40) / 80)
exe 'vert 7resize ' . ((&columns * 91 + 181) / 362)
tabnext
edit ~/cursus/ft_printf/srcs/specifiers/spec_s.c
set splitbelow splitright
wincmd _ | wincmd |
vsplit
wincmd _ | wincmd |
vsplit
2wincmd h
wincmd w
wincmd w
wincmd _ | wincmd |
split
1wincmd k
wincmd w
set nosplitbelow
set nosplitright
wincmd t
set winminheight=0
set winheight=1
set winminwidth=0
set winwidth=1
exe 'vert 1resize ' . ((&columns * 84 + 181) / 362)
exe 'vert 2resize ' . ((&columns * 83 + 181) / 362)
exe '3resize ' . ((&lines * 7 + 40) / 80)
exe 'vert 3resize ' . ((&columns * 193 + 181) / 362)
exe '4resize ' . ((&lines * 68 + 40) / 80)
exe 'vert 4resize ' . ((&columns * 193 + 181) / 362)
argglobal
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let s:l = 15 - ((13 * winheight(0) + 38) / 76)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
15
normal! 0
wincmd w
argglobal
if bufexists('~/cursus/ft_printf/srcs/specifiers/spec_c.c') | buffer ~/cursus/ft_printf/srcs/specifiers/spec_c.c | else | edit ~/cursus/ft_printf/srcs/specifiers/spec_c.c | endif
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let s:l = 17 - ((15 * winheight(0) + 38) / 76)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
17
normal! 0
wincmd w
argglobal
terminal ++curwin ++cols=193 ++rows=7 
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 3) / 7)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
1
normal! 0
wincmd w
argglobal
if bufexists('~/cursus/ft_printf/main.c') | buffer ~/cursus/ft_printf/main.c | else | edit ~/cursus/ft_printf/main.c | endif
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let s:l = 1 - ((0 * winheight(0) + 34) / 68)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
1
normal! 0
wincmd w
exe 'vert 1resize ' . ((&columns * 84 + 181) / 362)
exe 'vert 2resize ' . ((&columns * 83 + 181) / 362)
exe '3resize ' . ((&lines * 7 + 40) / 80)
exe 'vert 3resize ' . ((&columns * 193 + 181) / 362)
exe '4resize ' . ((&lines * 68 + 40) / 80)
exe 'vert 4resize ' . ((&columns * 193 + 181) / 362)
tabnext 2
if exists('s:wipebuf') && len(win_findbuf(s:wipebuf)) == 0
  silent exe 'bwipe ' . s:wipebuf
endif
unlet! s:wipebuf
set winheight=1 winwidth=84 shortmess=filnxtToO
set winminheight=1 winminwidth=1
let s:sx = expand("<sfile>:p:r")."x.vim"
if file_readable(s:sx)
  exe "source " . fnameescape(s:sx)
endif
let &so = s:so_save | let &siso = s:siso_save
doautoall SessionLoadPost
unlet SessionLoad
" vim: set ft=vim :
