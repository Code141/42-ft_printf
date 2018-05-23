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
badd +38 srcs/ft_printf.c
badd +13 srcs/eval.c
badd +1 cheatsheet
badd +1 ~/myConf/.vim/vimrc
badd +18 includes/ft_printf.h
badd +45 includes/u_arg.h
badd +33 main.c
badd +15 includes/s_flags.h
badd +1 srcs/flags.c
badd +11 includes/flags.h
badd +12 src/width.c
badd +1 srcs/precision>c
badd +15 srcs/precision.c
badd +15 includes/precision.h
badd +17 includes/width.h
badd +19 srcs/width.c
badd +12 srcs/length.c
badd +67 includes/s_printf_flags.h
badd +53 includes/s_ctx.h
badd +17 includes/eval.h
badd +68 srcs/interceptor.c
badd +1 includes/interceptor.h
badd +9 srcs/specifiers/spec_s.c
badd +16 includes/specifiers/spec_s.h
badd +26 srcs/va_args.c
badd +10 includes/va_args.h
badd +1 srcs/specifiers/spec_d.c
badd +1 srcs/specifiers/spec_x.c
badd +30 includes/specifiers.h
badd +15 srcs/specifiers/spec_u.c
badd +1 srcs/specifiers/spec_o.c
badd +1 srcs/buff_writer.c
badd +13 includes/buff_writer.c
badd +21 includes/buff_writer.h
badd +22 srcs/specifiers/spec_c.c
badd +9 srcs/specifiers/spec_percent.c
badd +1 e
badd +1 NetrwTreeListing\ 2
badd +1 NetrwTreeListing\ 3
badd +0 srcs/number_width.c
badd +88 print.c
badd +0 srcs/print_number.c
badd +45 srcs/specifiers/spec_p.c
argglobal
silent! argdel *
$argadd Makefile
set stal=2
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
wincmd _ | wincmd |
split
1wincmd k
wincmd w
wincmd w
wincmd w
set nosplitbelow
set nosplitright
wincmd t
set winminheight=1 winheight=1 winminwidth=1 winwidth=1
exe '1resize ' . ((&lines * 19 + 42) / 84)
exe 'vert 1resize ' . ((&columns * 84 + 182) / 364)
exe '2resize ' . ((&lines * 60 + 42) / 84)
exe 'vert 2resize ' . ((&columns * 84 + 182) / 364)
exe '3resize ' . ((&lines * 6 + 42) / 84)
exe 'vert 3resize ' . ((&columns * 84 + 182) / 364)
exe '4resize ' . ((&lines * 73 + 42) / 84)
exe 'vert 4resize ' . ((&columns * 84 + 182) / 364)
exe 'vert 5resize ' . ((&columns * 84 + 182) / 364)
exe 'vert 6resize ' . ((&columns * 109 + 182) / 364)
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
let s:l = 7 - ((6 * winheight(0) + 9) / 19)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
7
normal! 035|
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
let s:l = 35 - ((21 * winheight(0) + 30) / 60)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
35
normal! 022|
wincmd w
argglobal
if bufexists('includes/ft_printf.h') | buffer includes/ft_printf.h | else | edit includes/ft_printf.h | endif
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let s:l = 18 - ((5 * winheight(0) + 3) / 6)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
18
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
24,44fold
47,73fold
24
normal! zo
47
normal! zo
let s:l = 69 - ((59 * winheight(0) + 36) / 73)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
69
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
let s:l = 56 - ((55 * winheight(0) + 40) / 80)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
56
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
let s:l = 42 - ((35 * winheight(0) + 40) / 80)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
42
normal! 0
lcd ~/cursus/ft_printf
wincmd w
exe '1resize ' . ((&lines * 19 + 42) / 84)
exe 'vert 1resize ' . ((&columns * 84 + 182) / 364)
exe '2resize ' . ((&lines * 60 + 42) / 84)
exe 'vert 2resize ' . ((&columns * 84 + 182) / 364)
exe '3resize ' . ((&lines * 6 + 42) / 84)
exe 'vert 3resize ' . ((&columns * 84 + 182) / 364)
exe '4resize ' . ((&lines * 73 + 42) / 84)
exe 'vert 4resize ' . ((&columns * 84 + 182) / 364)
exe 'vert 5resize ' . ((&columns * 84 + 182) / 364)
exe 'vert 6resize ' . ((&columns * 109 + 182) / 364)
tabedit ~/cursus/ft_printf/includes/interceptor.h
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
set nosplitbelow
set nosplitright
wincmd t
set winminheight=1 winheight=1 winminwidth=1 winwidth=1
exe '1resize ' . ((&lines * 8 + 42) / 84)
exe 'vert 1resize ' . ((&columns * 84 + 182) / 364)
exe '2resize ' . ((&lines * 71 + 42) / 84)
exe 'vert 2resize ' . ((&columns * 84 + 182) / 364)
exe '3resize ' . ((&lines * 8 + 42) / 84)
exe 'vert 3resize ' . ((&columns * 84 + 182) / 364)
exe '4resize ' . ((&lines * 71 + 42) / 84)
exe 'vert 4resize ' . ((&columns * 84 + 182) / 364)
exe 'vert 5resize ' . ((&columns * 84 + 182) / 364)
exe 'vert 6resize ' . ((&columns * 109 + 182) / 364)
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
let s:l = 18 - ((6 * winheight(0) + 4) / 8)
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
let s:l = 87 - ((57 * winheight(0) + 35) / 71)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
87
normal! 0
wincmd w
argglobal
if bufexists('~/cursus/ft_printf/includes/flags.h') | buffer ~/cursus/ft_printf/includes/flags.h | else | edit ~/cursus/ft_printf/includes/flags.h | endif
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let s:l = 18 - ((3 * winheight(0) + 4) / 8)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
18
normal! 045|
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
setlocal nofen
silent! normal! zE
let s:l = 116 - ((29 * winheight(0) + 35) / 71)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
116
normal! 043|
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
let s:l = 42 - ((41 * winheight(0) + 40) / 80)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
42
normal! 017|
lcd ~/cursus/ft_printf
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
let s:l = 47 - ((46 * winheight(0) + 40) / 80)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
47
normal! 019|
lcd ~/cursus/ft_printf
wincmd w
2wincmd w
exe '1resize ' . ((&lines * 8 + 42) / 84)
exe 'vert 1resize ' . ((&columns * 84 + 182) / 364)
exe '2resize ' . ((&lines * 71 + 42) / 84)
exe 'vert 2resize ' . ((&columns * 84 + 182) / 364)
exe '3resize ' . ((&lines * 8 + 42) / 84)
exe 'vert 3resize ' . ((&columns * 84 + 182) / 364)
exe '4resize ' . ((&lines * 71 + 42) / 84)
exe 'vert 4resize ' . ((&columns * 84 + 182) / 364)
exe 'vert 5resize ' . ((&columns * 84 + 182) / 364)
exe 'vert 6resize ' . ((&columns * 109 + 182) / 364)
tabedit ~/cursus/ft_printf/srcs/buff_writer.c
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
exe 'vert 1resize ' . ((&columns * 84 + 182) / 364)
exe 'vert 2resize ' . ((&columns * 84 + 182) / 364)
exe 'vert 3resize ' . ((&columns * 107 + 182) / 364)
exe 'vert 4resize ' . ((&columns * 86 + 182) / 364)
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
let s:l = 36 - ((35 * winheight(0) + 40) / 80)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
36
normal! 0
lcd ~/cursus/ft_printf
wincmd w
argglobal
if bufexists('~/cursus/ft_printf/srcs/number_width.c') | buffer ~/cursus/ft_printf/srcs/number_width.c | else | edit ~/cursus/ft_printf/srcs/number_width.c | endif
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let s:l = 69 - ((68 * winheight(0) + 40) / 80)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
69
normal! 0
lcd ~/cursus/ft_printf
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
let s:l = 68 - ((52 * winheight(0) + 40) / 80)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
68
normal! 0
lcd ~/cursus/ft_printf
wincmd w
argglobal
if bufexists('~/cursus/ft_printf/e') | buffer ~/cursus/ft_printf/e | else | edit ~/cursus/ft_printf/e | endif
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let s:l = 2 - ((1 * winheight(0) + 40) / 80)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
2
normal! 0
lcd ~/cursus/ft_printf
wincmd w
exe 'vert 1resize ' . ((&columns * 84 + 182) / 364)
exe 'vert 2resize ' . ((&columns * 84 + 182) / 364)
exe 'vert 3resize ' . ((&columns * 107 + 182) / 364)
exe 'vert 4resize ' . ((&columns * 86 + 182) / 364)
tabedit ~/cursus/ft_printf/srcs/specifiers/spec_d.c
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
wincmd _ | wincmd |
split
1wincmd k
wincmd w
wincmd w
set nosplitbelow
set nosplitright
wincmd t
set winminheight=1 winheight=1 winminwidth=1 winwidth=1
exe 'vert 1resize ' . ((&columns * 84 + 182) / 364)
exe 'vert 2resize ' . ((&columns * 84 + 182) / 364)
exe '3resize ' . ((&lines * 39 + 42) / 84)
exe 'vert 3resize ' . ((&columns * 84 + 182) / 364)
exe '4resize ' . ((&lines * 40 + 42) / 84)
exe 'vert 4resize ' . ((&columns * 84 + 182) / 364)
exe 'vert 5resize ' . ((&columns * 109 + 182) / 364)
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
let s:l = 6 - ((5 * winheight(0) + 40) / 80)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
6
normal! 0
lcd ~/cursus/ft_printf
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
let s:l = 23 - ((22 * winheight(0) + 40) / 80)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
23
normal! 0
lcd ~/cursus/ft_printf
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
let s:l = 17 - ((8 * winheight(0) + 19) / 39)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
17
normal! 0
lcd ~/cursus/ft_printf
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
let s:l = 39 - ((25 * winheight(0) + 20) / 40)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
39
normal! 041|
lcd ~/cursus/ft_printf
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
let s:l = 43 - ((42 * winheight(0) + 40) / 80)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
43
normal! 0
lcd ~/cursus/ft_printf
wincmd w
exe 'vert 1resize ' . ((&columns * 84 + 182) / 364)
exe 'vert 2resize ' . ((&columns * 84 + 182) / 364)
exe '3resize ' . ((&lines * 39 + 42) / 84)
exe 'vert 3resize ' . ((&columns * 84 + 182) / 364)
exe '4resize ' . ((&lines * 40 + 42) / 84)
exe 'vert 4resize ' . ((&columns * 84 + 182) / 364)
exe 'vert 5resize ' . ((&columns * 109 + 182) / 364)
tabnext 2
set stal=1
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
