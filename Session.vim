let SessionLoad = 1
if &cp | set nocp | endif
let s:so_save = &so | let s:siso_save = &siso | set so=0 siso=0
let v:this_session=expand("<sfile>:p")
silent only
cd ~/myConf/.vim
if expand('%') == '' && !&modified && line('$') <= 1 && getline(1) == ''
  let s:wipebuf = bufnr('%')
endif
set shortmess=aoO
badd +1 ~/cursus/ft_printf/Makefile
badd +38 ~/cursus/ft_printf/srcs/ft_printf.c
badd +13 ~/cursus/ft_printf/srcs/eval.c
badd +1 ~/cursus/ft_printf/cheatsheet
badd +1 vimrc
badd +18 ~/cursus/ft_printf/includes/ft_printf.h
badd +45 ~/cursus/ft_printf/includes/u_arg.h
badd +33 ~/cursus/ft_printf/main.c
badd +15 ~/cursus/ft_printf/includes/s_flags.h
badd +1 ~/cursus/ft_printf/srcs/flags.c
badd +11 ~/cursus/ft_printf/includes/flags.h
badd +12 src/width.c
badd +1 ~/cursus/ft_printf/srcs/precision>c
badd +15 ~/cursus/ft_printf/srcs/precision.c
badd +15 ~/cursus/ft_printf/includes/precision.h
badd +17 ~/cursus/ft_printf/includes/width.h
badd +19 ~/cursus/ft_printf/srcs/width.c
badd +12 ~/cursus/ft_printf/srcs/length.c
badd +67 ~/cursus/ft_printf/includes/s_printf_flags.h
badd +53 ~/cursus/ft_printf/includes/s_ctx.h
badd +17 ~/cursus/ft_printf/includes/eval.h
badd +68 ~/cursus/ft_printf/srcs/interceptor.c
badd +1 ~/cursus/ft_printf/includes/interceptor.h
badd +9 ~/cursus/ft_printf/srcs/specifiers/spec_s.c
badd +16 includes/specifiers/spec_s.h
badd +26 ~/cursus/ft_printf/srcs/va_args.c
badd +10 ~/cursus/ft_printf/includes/va_args.h
badd +1 ~/cursus/ft_printf/srcs/specifiers/spec_d.c
badd +1 ~/cursus/ft_printf/srcs/specifiers/spec_x.c
badd +30 ~/cursus/ft_printf/includes/specifiers.h
badd +15 ~/cursus/ft_printf/srcs/specifiers/spec_u.c
badd +1 ~/cursus/ft_printf/srcs/specifiers/spec_o.c
badd +1 ~/cursus/ft_printf/srcs/buff_writer.c
badd +13 ~/cursus/ft_printf/includes/buff_writer.c
badd +21 ~/cursus/ft_printf/includes/buff_writer.h
badd +31 ~/cursus/ft_printf/srcs/specifiers/spec_c.c
badd +9 ~/cursus/ft_printf/srcs/specifiers/spec_percent.c
badd +1 ~/cursus/ft_printf/e
badd +1 ~/cursus/ft_printf/NetrwTreeListing\ 2
badd +1 ~/cursus/ft_printf/NetrwTreeListing\ 3
badd +1 ~/cursus/ft_printf/srcs/number_width.c
badd +88 ~/cursus/ft_printf/print.c
badd +1 ~/cursus/ft_printf/srcs/print_number.c
badd +39 ~/cursus/ft_printf/srcs/specifiers/spec_p.c
badd +1 comportement.vim
badd +1 colors.vim
badd +1 display.vim
badd +1 keymap.vim
badd +1 plugins.vim
argglobal
silent! argdel *
$argadd vimrc
$argadd comportement.vim
set stal=2
edit vimrc
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
exe '1resize ' . ((&lines * 31 + 42) / 84)
exe 'vert 1resize ' . ((&columns * 84 + 182) / 364)
exe '2resize ' . ((&lines * 48 + 42) / 84)
exe 'vert 2resize ' . ((&columns * 84 + 182) / 364)
exe '3resize ' . ((&lines * 31 + 42) / 84)
exe 'vert 3resize ' . ((&columns * 84 + 182) / 364)
exe '4resize ' . ((&lines * 48 + 42) / 84)
exe 'vert 4resize ' . ((&columns * 84 + 182) / 364)
exe 'vert 5resize ' . ((&columns * 85 + 182) / 364)
exe 'vert 6resize ' . ((&columns * 108 + 182) / 364)
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
let s:l = 13 - ((12 * winheight(0) + 15) / 31)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
13
normal! 0
wincmd w
argglobal
if bufexists('keymap.vim') | buffer keymap.vim | else | edit keymap.vim | endif
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let s:l = 20 - ((19 * winheight(0) + 24) / 48)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
20
normal! 053|
wincmd w
argglobal
2argu
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let s:l = 8 - ((7 * winheight(0) + 15) / 31)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
8
normal! 0
wincmd w
argglobal
2argu
if bufexists('display.vim') | buffer display.vim | else | edit display.vim | endif
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let s:l = 1 - ((0 * winheight(0) + 24) / 48)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
1
normal! 0
wincmd w
argglobal
2argu
if bufexists('colors.vim') | buffer colors.vim | else | edit colors.vim | endif
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
wincmd w
argglobal
2argu
if bufexists('plugins.vim') | buffer plugins.vim | else | edit plugins.vim | endif
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let s:l = 1 - ((0 * winheight(0) + 40) / 80)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
1
normal! 0
wincmd w
exe '1resize ' . ((&lines * 31 + 42) / 84)
exe 'vert 1resize ' . ((&columns * 84 + 182) / 364)
exe '2resize ' . ((&lines * 48 + 42) / 84)
exe 'vert 2resize ' . ((&columns * 84 + 182) / 364)
exe '3resize ' . ((&lines * 31 + 42) / 84)
exe 'vert 3resize ' . ((&columns * 84 + 182) / 364)
exe '4resize ' . ((&lines * 48 + 42) / 84)
exe 'vert 4resize ' . ((&columns * 84 + 182) / 364)
exe 'vert 5resize ' . ((&columns * 85 + 182) / 364)
exe 'vert 6resize ' . ((&columns * 108 + 182) / 364)
tabedit ~/cursus/ft_printf/cheatsheet
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
1argu
if bufexists('~/cursus/ft_printf/cheatsheet') | buffer ~/cursus/ft_printf/cheatsheet | else | edit ~/cursus/ft_printf/cheatsheet | endif
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let s:l = 5 - ((4 * winheight(0) + 9) / 19)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
5
normal! 04|
wincmd w
argglobal
1argu
if bufexists('~/cursus/ft_printf/Makefile') | buffer ~/cursus/ft_printf/Makefile | else | edit ~/cursus/ft_printf/Makefile | endif
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let s:l = 10 - ((9 * winheight(0) + 30) / 60)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
10
normal! 0
wincmd w
argglobal
1argu
if bufexists('~/cursus/ft_printf/includes/ft_printf.h') | buffer ~/cursus/ft_printf/includes/ft_printf.h | else | edit ~/cursus/ft_printf/includes/ft_printf.h | endif
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
1argu
if bufexists('~/cursus/ft_printf/srcs/ft_printf.c') | buffer ~/cursus/ft_printf/srcs/ft_printf.c | else | edit ~/cursus/ft_printf/srcs/ft_printf.c | endif
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
let s:l = 74 - ((54 * winheight(0) + 36) / 73)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
74
normal! 0
wincmd w
argglobal
1argu
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
let s:l = 80 - ((76 * winheight(0) + 40) / 80)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
80
normal! 0
wincmd w
argglobal
1argu
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
let s:l = 33 - ((32 * winheight(0) + 40) / 80)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
33
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
if bufexists('~/cursus/ft_printf/includes/interceptor.h') | buffer ~/cursus/ft_printf/includes/interceptor.h | else | edit ~/cursus/ft_printf/includes/interceptor.h | endif
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
let s:l = 90 - ((42 * winheight(0) + 35) / 71)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
90
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
let s:l = 34 - ((33 * winheight(0) + 35) / 71)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
34
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
let s:l = 25 - ((24 * winheight(0) + 40) / 80)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
25
normal! 05|
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
let s:l = 40 - ((26 * winheight(0) + 40) / 80)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
40
normal! 0
lcd ~/cursus/ft_printf
wincmd w
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
exe 'vert 3resize ' . ((&columns * 84 + 182) / 364)
exe 'vert 4resize ' . ((&columns * 109 + 182) / 364)
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
let s:l = 45 - ((44 * winheight(0) + 40) / 80)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
45
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
let s:l = 69 - ((53 * winheight(0) + 40) / 80)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
69
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
exe 'vert 3resize ' . ((&columns * 84 + 182) / 364)
exe 'vert 4resize ' . ((&columns * 109 + 182) / 364)
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
wincmd w
wincmd _ | wincmd |
split
1wincmd k
wincmd w
set nosplitbelow
set nosplitright
wincmd t
set winminheight=1 winheight=1 winminwidth=1 winwidth=1
exe 'vert 1resize ' . ((&columns * 84 + 182) / 364)
exe 'vert 2resize ' . ((&columns * 84 + 182) / 364)
exe 'vert 3resize ' . ((&columns * 84 + 182) / 364)
exe '4resize ' . ((&lines * 39 + 42) / 84)
exe 'vert 4resize ' . ((&columns * 109 + 182) / 364)
exe '5resize ' . ((&lines * 40 + 42) / 84)
exe 'vert 5resize ' . ((&columns * 109 + 182) / 364)
argglobal
if bufexists('~/cursus/ft_printf/srcs/specifiers/spec_d.c') | buffer ~/cursus/ft_printf/srcs/specifiers/spec_d.c | else | edit ~/cursus/ft_printf/srcs/specifiers/spec_d.c | endif
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let s:l = 29 - ((28 * winheight(0) + 40) / 80)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
29
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
let s:l = 45 - ((44 * winheight(0) + 40) / 80)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
45
normal! 0
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
let s:l = 32 - ((31 * winheight(0) + 40) / 80)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
32
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
let s:l = 1 - ((0 * winheight(0) + 19) / 39)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
1
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
let s:l = 1 - ((0 * winheight(0) + 20) / 40)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
1
normal! 0
lcd ~/cursus/ft_printf
wincmd w
exe 'vert 1resize ' . ((&columns * 84 + 182) / 364)
exe 'vert 2resize ' . ((&columns * 84 + 182) / 364)
exe 'vert 3resize ' . ((&columns * 84 + 182) / 364)
exe '4resize ' . ((&lines * 39 + 42) / 84)
exe 'vert 4resize ' . ((&columns * 109 + 182) / 364)
exe '5resize ' . ((&lines * 40 + 42) / 84)
exe 'vert 5resize ' . ((&columns * 109 + 182) / 364)
tabedit ~/cursus/ft_printf/srcs/specifiers/spec_s.c
set splitbelow splitright
wincmd _ | wincmd |
vsplit
1wincmd h
wincmd w
set nosplitbelow
set nosplitright
wincmd t
set winminheight=1 winheight=1 winminwidth=1 winwidth=1
exe 'vert 1resize ' . ((&columns * 84 + 182) / 364)
exe 'vert 2resize ' . ((&columns * 279 + 182) / 364)
argglobal
if bufexists('~/cursus/ft_printf/srcs/specifiers/spec_s.c') | buffer ~/cursus/ft_printf/srcs/specifiers/spec_s.c | else | edit ~/cursus/ft_printf/srcs/specifiers/spec_s.c | endif
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let s:l = 38 - ((37 * winheight(0) + 40) / 80)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
38
normal! 0
lcd ~/cursus/ft_printf
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
let s:l = 31 - ((30 * winheight(0) + 40) / 80)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
31
normal! 0
lcd ~/cursus/ft_printf
wincmd w
exe 'vert 1resize ' . ((&columns * 84 + 182) / 364)
exe 'vert 2resize ' . ((&columns * 279 + 182) / 364)
tabnext 6
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
