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
badd +1 srcs/print_number.c
badd +1 main.c
badd +1 srcs/flags.c
badd +1 srcs/buff_writer.c
badd +1 srcs/specifiers/spec_d.c
badd +1 srcs/specifiers/spec_o.c
badd +1 srcs/specifiers/spec_x.c
badd +1 srcs/specifiers/spec_u.c
badd +1 srcs/specifiers/spec_b.c
badd +1 srcs/specifiers/spec_p.c
badd +1 srcs/specifiers/spec_c.c
badd +1 srcs/specifiers/spec_s.c
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
exe '1resize ' . ((&lines * 38 + 40) / 81)
exe 'vert 1resize ' . ((&columns * 84 + 181) / 362)
exe '2resize ' . ((&lines * 38 + 40) / 81)
exe 'vert 2resize ' . ((&columns * 84 + 181) / 362)
exe 'vert 3resize ' . ((&columns * 84 + 181) / 362)
exe 'vert 4resize ' . ((&columns * 83 + 181) / 362)
exe 'vert 5resize ' . ((&columns * 108 + 181) / 362)
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
let s:l = 9 - ((8 * winheight(0) + 19) / 38)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
9
normal! 037|
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
let s:l = 69 - ((31 * winheight(0) + 19) / 38)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
69
normal! 0
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
let s:l = 1 - ((0 * winheight(0) + 38) / 77)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
1
normal! 0
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
let s:l = 1 - ((0 * winheight(0) + 38) / 77)
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
let s:l = 1 - ((0 * winheight(0) + 38) / 77)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
1
normal! 0
wincmd w
exe '1resize ' . ((&lines * 38 + 40) / 81)
exe 'vert 1resize ' . ((&columns * 84 + 181) / 362)
exe '2resize ' . ((&lines * 38 + 40) / 81)
exe 'vert 2resize ' . ((&columns * 84 + 181) / 362)
exe 'vert 3resize ' . ((&columns * 84 + 181) / 362)
exe 'vert 4resize ' . ((&columns * 83 + 181) / 362)
exe 'vert 5resize ' . ((&columns * 108 + 181) / 362)
tabedit srcs/interceptor.c
set splitbelow splitright
wincmd _ | wincmd |
vsplit
1wincmd h
wincmd w
set nosplitbelow
set nosplitright
wincmd t
set winminheight=1 winheight=1 winminwidth=1 winwidth=1
exe 'vert 1resize ' . ((&columns * 84 + 181) / 362)
exe 'vert 2resize ' . ((&columns * 277 + 181) / 362)
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
let s:l = 94 - ((48 * winheight(0) + 38) / 77)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
94
normal! 09|
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
let s:l = 76 - ((12 * winheight(0) + 38) / 77)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
76
normal! 0
wincmd w
exe 'vert 1resize ' . ((&columns * 84 + 181) / 362)
exe 'vert 2resize ' . ((&columns * 277 + 181) / 362)
tabedit srcs/buff_writer.c
set splitbelow splitright
wincmd _ | wincmd |
vsplit
wincmd _ | wincmd |
vsplit
2wincmd h
wincmd w
wincmd w
set nosplitbelow
set nosplitright
wincmd t
set winminheight=1 winheight=1 winminwidth=1 winwidth=1
exe 'vert 1resize ' . ((&columns * 84 + 181) / 362)
exe 'vert 2resize ' . ((&columns * 84 + 181) / 362)
exe 'vert 3resize ' . ((&columns * 192 + 181) / 362)
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
let s:l = 54 - ((44 * winheight(0) + 38) / 77)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
54
normal! 0
wincmd w
argglobal
if bufexists('srcs/number_width.c') | buffer srcs/number_width.c | else | edit srcs/number_width.c | endif
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let s:l = 71 - ((67 * winheight(0) + 38) / 77)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
71
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
let s:l = 6 - ((5 * winheight(0) + 38) / 77)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
6
normal! 0
wincmd w
exe 'vert 1resize ' . ((&columns * 84 + 181) / 362)
exe 'vert 2resize ' . ((&columns * 84 + 181) / 362)
exe 'vert 3resize ' . ((&columns * 192 + 181) / 362)
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
exe '1resize ' . ((&lines * 37 + 40) / 81)
exe 'vert 1resize ' . ((&columns * 84 + 181) / 362)
exe '2resize ' . ((&lines * 39 + 40) / 81)
exe 'vert 2resize ' . ((&columns * 84 + 181) / 362)
exe 'vert 3resize ' . ((&columns * 84 + 181) / 362)
exe 'vert 4resize ' . ((&columns * 84 + 181) / 362)
exe '5resize ' . ((&lines * 37 + 40) / 81)
exe 'vert 5resize ' . ((&columns * 107 + 181) / 362)
exe '6resize ' . ((&lines * 39 + 40) / 81)
exe 'vert 6resize ' . ((&columns * 107 + 181) / 362)
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
let s:l = 48 - ((34 * winheight(0) + 18) / 37)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
48
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
let s:l = 21 - ((9 * winheight(0) + 19) / 39)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
21
normal! 05|
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
let s:l = 2 - ((1 * winheight(0) + 38) / 77)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
2
normal! 02|
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
let s:l = 3 - ((2 * winheight(0) + 38) / 77)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
3
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
let s:l = 50 - ((35 * winheight(0) + 18) / 37)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
50
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
let s:l = 53 - ((38 * winheight(0) + 19) / 39)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
53
normal! 0
wincmd w
exe '1resize ' . ((&lines * 37 + 40) / 81)
exe 'vert 1resize ' . ((&columns * 84 + 181) / 362)
exe '2resize ' . ((&lines * 39 + 40) / 81)
exe 'vert 2resize ' . ((&columns * 84 + 181) / 362)
exe 'vert 3resize ' . ((&columns * 84 + 181) / 362)
exe 'vert 4resize ' . ((&columns * 84 + 181) / 362)
exe '5resize ' . ((&lines * 37 + 40) / 81)
exe 'vert 5resize ' . ((&columns * 107 + 181) / 362)
exe '6resize ' . ((&lines * 39 + 40) / 81)
exe 'vert 6resize ' . ((&columns * 107 + 181) / 362)
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
exe 'vert 2resize ' . ((&columns * 138 + 181) / 362)
exe '3resize ' . ((&lines * 38 + 40) / 81)
exe 'vert 3resize ' . ((&columns * 138 + 181) / 362)
exe '4resize ' . ((&lines * 38 + 40) / 81)
exe 'vert 4resize ' . ((&columns * 138 + 181) / 362)
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
let s:l = 4 - ((3 * winheight(0) + 38) / 77)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
4
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
let s:l = 35 - ((33 * winheight(0) + 38) / 77)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
35
normal! 012|
wincmd w
argglobal
terminal ++curwin ++cols=138 ++rows=38 
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 19) / 38)
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
let s:l = 1 - ((0 * winheight(0) + 19) / 38)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
1
normal! 0
wincmd w
exe 'vert 1resize ' . ((&columns * 84 + 181) / 362)
exe 'vert 2resize ' . ((&columns * 138 + 181) / 362)
exe '3resize ' . ((&lines * 38 + 40) / 81)
exe 'vert 3resize ' . ((&columns * 138 + 181) / 362)
exe '4resize ' . ((&lines * 38 + 40) / 81)
exe 'vert 4resize ' . ((&columns * 138 + 181) / 362)
tabnext 4
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
