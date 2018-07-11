let SessionLoad = 1
if &cp | set nocp | endif
let s:so_save = &so | let s:siso_save = &siso | set so=0 siso=0
let v:this_session=expand("<sfile>:p")
silent only
cd ~/cursus/ft_printf
if expand('%') == '' && !&modified && line('$') <= 1 && getline(1) == ''
  let s:wipebuf = bufnr('%')
endif
set shortmess=aoO
badd +1 Makefile
badd +1 srcs/ft_printf.c
badd +1 cheatsheet
badd +1 includes/s_ctx.h
badd +1 srcs/interceptor.c
badd +1 srcs/number_width.c
badd +5 srcs/print_number.c
badd +1 main.c
badd +1 srcs/flags.c
badd +25 srcs/buff_writer.c
badd +1 srcs/specifiers/spec_d.c
badd +1 srcs/specifiers/spec_o.c
badd +1 srcs/specifiers/spec_x.c
badd +1 srcs/specifiers/spec_u.c
badd +1 srcs/specifiers/spec_b.c
badd +1 srcs/specifiers/spec_p.c
badd +1 srcs/specifiers/spec_c.c
badd +1 srcs/specifiers/spec_s.c
badd +1 srcs/integer.c
badd +1 srcs/print_number_hex.c
badd +15 includes/precalculated_decimales_base_10.h
badd +0 srcs/precalculated_decimales.c
badd +16 includes/precalculated_decimales.h
argglobal
silent! argdel *
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
wincmd w
set nosplitbelow
set nosplitright
wincmd t
set winminheight=1 winheight=1 winminwidth=1 winwidth=1
exe '1resize ' . ((&lines * 8 + 40) / 80)
exe 'vert 1resize ' . ((&columns * 84 + 181) / 362)
exe '2resize ' . ((&lines * 67 + 40) / 80)
exe 'vert 2resize ' . ((&columns * 84 + 181) / 362)
exe 'vert 3resize ' . ((&columns * 84 + 181) / 362)
exe 'vert 4resize ' . ((&columns * 84 + 181) / 362)
exe 'vert 5resize ' . ((&columns * 107 + 181) / 362)
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
let s:l = 14 - ((3 * winheight(0) + 4) / 8)
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
let s:l = 36 - ((19 * winheight(0) + 33) / 67)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
36
normal! 017|
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
let s:l = 19 - ((14 * winheight(0) + 38) / 76)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
19
normal! 05|
wincmd w
argglobal
if bufexists('includes/s_ctx.h') | buffer includes/s_ctx.h | else | edit includes/s_ctx.h | endif
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let s:l = 16 - ((15 * winheight(0) + 38) / 76)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
16
normal! 05|
wincmd w
argglobal
if bufexists('main.c') | buffer main.c | else | edit main.c | endif
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let s:l = 1 - ((0 * winheight(0) + 38) / 76)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
1
normal! 0
wincmd w
exe '1resize ' . ((&lines * 8 + 40) / 80)
exe 'vert 1resize ' . ((&columns * 84 + 181) / 362)
exe '2resize ' . ((&lines * 67 + 40) / 80)
exe 'vert 2resize ' . ((&columns * 84 + 181) / 362)
exe 'vert 3resize ' . ((&columns * 84 + 181) / 362)
exe 'vert 4resize ' . ((&columns * 84 + 181) / 362)
exe 'vert 5resize ' . ((&columns * 107 + 181) / 362)
tabedit srcs/interceptor.c
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
set nosplitbelow
set nosplitright
wincmd t
set winminheight=1 winheight=1 winminwidth=1 winwidth=1
exe 'vert 1resize ' . ((&columns * 84 + 181) / 362)
exe 'vert 2resize ' . ((&columns * 84 + 181) / 362)
exe 'vert 3resize ' . ((&columns * 95 + 181) / 362)
exe 'vert 4resize ' . ((&columns * 96 + 181) / 362)
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
let s:l = 48 - ((36 * winheight(0) + 38) / 76)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
48
normal! 013|
wincmd w
argglobal
if bufexists('srcs/flags.c') | buffer srcs/flags.c | else | edit srcs/flags.c | endif
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let s:l = 16 - ((11 * winheight(0) + 38) / 76)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
16
normal! 0
wincmd w
argglobal
if bufexists('srcs/integer.c') | buffer srcs/integer.c | else | edit srcs/integer.c | endif
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let s:l = 41 - ((38 * winheight(0) + 38) / 76)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
41
normal! 0
wincmd w
argglobal
if bufexists('srcs/buff_writer.c') | buffer srcs/buff_writer.c | else | edit srcs/buff_writer.c | endif
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let s:l = 14 - ((13 * winheight(0) + 38) / 76)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
14
normal! 0
wincmd w
exe 'vert 1resize ' . ((&columns * 84 + 181) / 362)
exe 'vert 2resize ' . ((&columns * 84 + 181) / 362)
exe 'vert 3resize ' . ((&columns * 95 + 181) / 362)
exe 'vert 4resize ' . ((&columns * 96 + 181) / 362)
tabedit srcs/number_width.c
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
set winminheight=1 winheight=1 winminwidth=1 winwidth=1
exe 'vert 1resize ' . ((&columns * 84 + 181) / 362)
exe 'vert 2resize ' . ((&columns * 84 + 181) / 362)
exe 'vert 3resize ' . ((&columns * 84 + 181) / 362)
exe '4resize ' . ((&lines * 20 + 40) / 80)
exe 'vert 4resize ' . ((&columns * 107 + 181) / 362)
exe '5resize ' . ((&lines * 55 + 40) / 80)
exe 'vert 5resize ' . ((&columns * 107 + 181) / 362)
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
let s:l = 16 - ((15 * winheight(0) + 38) / 76)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
16
normal! 0
wincmd w
argglobal
if bufexists('srcs/print_number.c') | buffer srcs/print_number.c | else | edit srcs/print_number.c | endif
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let s:l = 56 - ((54 * winheight(0) + 38) / 76)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
56
normal! 019|
wincmd w
argglobal
if bufexists('srcs/print_number_hex.c') | buffer srcs/print_number_hex.c | else | edit srcs/print_number_hex.c | endif
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let s:l = 63 - ((59 * winheight(0) + 38) / 76)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
63
normal! 020|
wincmd w
argglobal
if bufexists('includes/precalculated_decimales.h') | buffer includes/precalculated_decimales.h | else | edit includes/precalculated_decimales.h | endif
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let s:l = 1 - ((0 * winheight(0) + 10) / 20)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
1
normal! 0
wincmd w
argglobal
if bufexists('srcs/precalculated_decimales.c') | buffer srcs/precalculated_decimales.c | else | edit srcs/precalculated_decimales.c | endif
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let s:l = 265 - ((12 * winheight(0) + 27) / 55)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
265
normal! 06|
wincmd w
4wincmd w
exe 'vert 1resize ' . ((&columns * 84 + 181) / 362)
exe 'vert 2resize ' . ((&columns * 84 + 181) / 362)
exe 'vert 3resize ' . ((&columns * 84 + 181) / 362)
exe '4resize ' . ((&lines * 20 + 40) / 80)
exe 'vert 4resize ' . ((&columns * 107 + 181) / 362)
exe '5resize ' . ((&lines * 55 + 40) / 80)
exe 'vert 5resize ' . ((&columns * 107 + 181) / 362)
tabedit srcs/specifiers/spec_d.c
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
wincmd w
wincmd _ | wincmd |
split
1wincmd k
wincmd w
set nosplitbelow
set nosplitright
wincmd t
set winminheight=1 winheight=1 winminwidth=1 winwidth=1
exe '1resize ' . ((&lines * 29 + 40) / 80)
exe 'vert 1resize ' . ((&columns * 84 + 181) / 362)
exe '2resize ' . ((&lines * 47 + 40) / 80)
exe 'vert 2resize ' . ((&columns * 84 + 181) / 362)
exe 'vert 3resize ' . ((&columns * 84 + 181) / 362)
exe 'vert 4resize ' . ((&columns * 83 + 181) / 362)
exe '5resize ' . ((&lines * 29 + 40) / 80)
exe 'vert 5resize ' . ((&columns * 108 + 181) / 362)
exe '6resize ' . ((&lines * 47 + 40) / 80)
exe 'vert 6resize ' . ((&columns * 108 + 181) / 362)
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
let s:l = 1 - ((0 * winheight(0) + 14) / 29)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
1
normal! 0
wincmd w
argglobal
if bufexists('srcs/specifiers/spec_b.c') | buffer srcs/specifiers/spec_b.c | else | edit srcs/specifiers/spec_b.c | endif
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let s:l = 14 - ((8 * winheight(0) + 23) / 47)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
14
normal! 024|
wincmd w
argglobal
if bufexists('srcs/specifiers/spec_u.c') | buffer srcs/specifiers/spec_u.c | else | edit srcs/specifiers/spec_u.c | endif
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let s:l = 19 - ((17 * winheight(0) + 38) / 77)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
19
normal! 0
wincmd w
argglobal
if bufexists('srcs/specifiers/spec_o.c') | buffer srcs/specifiers/spec_o.c | else | edit srcs/specifiers/spec_o.c | endif
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let s:l = 16 - ((14 * winheight(0) + 38) / 77)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
16
normal! 0
wincmd w
argglobal
if bufexists('srcs/specifiers/spec_x.c') | buffer srcs/specifiers/spec_x.c | else | edit srcs/specifiers/spec_x.c | endif
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let s:l = 1 - ((0 * winheight(0) + 14) / 29)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
1
normal! 0
wincmd w
argglobal
if bufexists('srcs/specifiers/spec_p.c') | buffer srcs/specifiers/spec_p.c | else | edit srcs/specifiers/spec_p.c | endif
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let s:l = 53 - ((43 * winheight(0) + 23) / 47)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
53
normal! 0
wincmd w
exe '1resize ' . ((&lines * 29 + 40) / 80)
exe 'vert 1resize ' . ((&columns * 84 + 181) / 362)
exe '2resize ' . ((&lines * 47 + 40) / 80)
exe 'vert 2resize ' . ((&columns * 84 + 181) / 362)
exe 'vert 3resize ' . ((&columns * 84 + 181) / 362)
exe 'vert 4resize ' . ((&columns * 83 + 181) / 362)
exe '5resize ' . ((&lines * 29 + 40) / 80)
exe 'vert 5resize ' . ((&columns * 108 + 181) / 362)
exe '6resize ' . ((&lines * 47 + 40) / 80)
exe 'vert 6resize ' . ((&columns * 108 + 181) / 362)
tabedit srcs/specifiers/spec_s.c
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
set winminheight=1 winheight=1 winminwidth=1 winwidth=1
exe 'vert 1resize ' . ((&columns * 84 + 181) / 362)
exe 'vert 2resize ' . ((&columns * 83 + 181) / 362)
exe '3resize ' . ((&lines * 8 + 40) / 80)
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
let s:l = 17 - ((15 * winheight(0) + 38) / 77)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
17
normal! 0
wincmd w
argglobal
if bufexists('srcs/specifiers/spec_c.c') | buffer srcs/specifiers/spec_c.c | else | edit srcs/specifiers/spec_c.c | endif
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let s:l = 93 - ((59 * winheight(0) + 38) / 77)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
93
normal! 012|
wincmd w
argglobal
terminal ++curwin ++cols=194 ++rows=8 
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 4) / 8)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
1
normal! 0
wincmd w
argglobal
if bufexists('main.c') | buffer main.c | else | edit main.c | endif
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
exe '3resize ' . ((&lines * 8 + 40) / 80)
exe 'vert 3resize ' . ((&columns * 193 + 181) / 362)
exe '4resize ' . ((&lines * 68 + 40) / 80)
exe 'vert 4resize ' . ((&columns * 193 + 181) / 362)
tabnext 3
if exists('s:wipebuf') && s:wipebuf != bufnr('%')
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
