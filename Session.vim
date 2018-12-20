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
badd +27 Makefile
badd +48 srcs/ft_printf.c
badd +14 cheatsheet
badd +69 includes/s_ctx.h
badd +84 srcs/interceptor.c
badd +21 srcs/number_width.c
badd +57 srcs/print_number.c
badd +1 main.c
badd +1 srcs/flags.c
badd +64 srcs/buff_writer.c
badd +46 srcs/specifiers/spec_d.c
badd +48 srcs/specifiers/spec_o.c
badd +49 srcs/specifiers/spec_x.c
badd +46 srcs/specifiers/spec_u.c
badd +48 srcs/specifiers/spec_b.c
badd +51 srcs/specifiers/spec_p.c
badd +178 srcs/specifiers/spec_c.c
badd +91 srcs/specifiers/spec_s.c
badd +68 srcs/integer.c
badd +64 srcs/print_number_hex.c
badd +15 includes/precalculated_decimales_base_10.h
badd +34 srcs/precalculated_decimales.c
badd +2 includes/precalculated_decimales.h
badd +1 ~/cursus/ft_printf
badd +1 includes/ft_printf.h
badd +0 srcs/specifiers/spec_percent.c
badd +1 includes/interceptor.h
badd +0 includes/flags.h
badd +0 includes/buff_writer.h
badd +0 includes/specifiers.h
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
exe '1resize ' . ((&lines * 8 + 42) / 84)
exe 'vert 1resize ' . ((&columns * 84 + 182) / 364)
exe '2resize ' . ((&lines * 71 + 42) / 84)
exe 'vert 2resize ' . ((&columns * 84 + 182) / 364)
exe 'vert 3resize ' . ((&columns * 84 + 182) / 364)
exe '4resize ' . ((&lines * 9 + 42) / 84)
exe 'vert 4resize ' . ((&columns * 85 + 182) / 364)
exe '5resize ' . ((&lines * 5 + 42) / 84)
exe 'vert 5resize ' . ((&columns * 85 + 182) / 364)
exe '6resize ' . ((&lines * 64 + 42) / 84)
exe 'vert 6resize ' . ((&columns * 85 + 182) / 364)
exe '7resize ' . ((&lines * 4 + 42) / 84)
exe 'vert 7resize ' . ((&columns * 108 + 182) / 364)
exe '8resize ' . ((&lines * 75 + 42) / 84)
exe 'vert 8resize ' . ((&columns * 108 + 182) / 364)
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
let s:l = 39 - ((38 * winheight(0) + 35) / 71)
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
let s:l = 19 - ((18 * winheight(0) + 40) / 80)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
19
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
let s:l = 24 - ((2 * winheight(0) + 2) / 5)
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
let s:l = 50 - ((44 * winheight(0) + 32) / 64)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
50
normal! 0
lcd ~/cursus/ft_printf
wincmd w
argglobal
terminal ++curwin ++cols=108 ++rows=4 
setlocal fdm=indent
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 2) / 4)
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
let s:l = 26 - ((10 * winheight(0) + 37) / 75)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
26
normal! 0
wincmd w
exe '1resize ' . ((&lines * 8 + 42) / 84)
exe 'vert 1resize ' . ((&columns * 84 + 182) / 364)
exe '2resize ' . ((&lines * 71 + 42) / 84)
exe 'vert 2resize ' . ((&columns * 84 + 182) / 364)
exe 'vert 3resize ' . ((&columns * 84 + 182) / 364)
exe '4resize ' . ((&lines * 9 + 42) / 84)
exe 'vert 4resize ' . ((&columns * 85 + 182) / 364)
exe '5resize ' . ((&lines * 5 + 42) / 84)
exe 'vert 5resize ' . ((&columns * 85 + 182) / 364)
exe '6resize ' . ((&lines * 64 + 42) / 84)
exe 'vert 6resize ' . ((&columns * 85 + 182) / 364)
exe '7resize ' . ((&lines * 4 + 42) / 84)
exe 'vert 7resize ' . ((&columns * 108 + 182) / 364)
exe '8resize ' . ((&lines * 75 + 42) / 84)
exe 'vert 8resize ' . ((&columns * 108 + 182) / 364)
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
exe '1resize ' . ((&lines * 10 + 42) / 84)
exe 'vert 1resize ' . ((&columns * 91 + 182) / 364)
exe '2resize ' . ((&lines * 69 + 42) / 84)
exe 'vert 2resize ' . ((&columns * 91 + 182) / 364)
exe '3resize ' . ((&lines * 10 + 42) / 84)
exe 'vert 3resize ' . ((&columns * 84 + 182) / 364)
exe '4resize ' . ((&lines * 69 + 42) / 84)
exe 'vert 4resize ' . ((&columns * 84 + 182) / 364)
exe '5resize ' . ((&lines * 10 + 42) / 84)
exe 'vert 5resize ' . ((&columns * 96 + 182) / 364)
exe '6resize ' . ((&lines * 69 + 42) / 84)
exe 'vert 6resize ' . ((&columns * 96 + 182) / 364)
exe '7resize ' . ((&lines * 10 + 42) / 84)
exe 'vert 7resize ' . ((&columns * 90 + 182) / 364)
exe '8resize ' . ((&lines * 69 + 42) / 84)
exe 'vert 8resize ' . ((&columns * 90 + 182) / 364)
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
let s:l = 1 - ((0 * winheight(0) + 34) / 69)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
1
normal! 0
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
let s:l = 16 - ((13 * winheight(0) + 34) / 69)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
16
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
let s:l = 21 - ((17 * winheight(0) + 34) / 69)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
21
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
let s:l = 15 - ((12 * winheight(0) + 34) / 69)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
15
normal! 0
wincmd w
5wincmd w
exe '1resize ' . ((&lines * 10 + 42) / 84)
exe 'vert 1resize ' . ((&columns * 91 + 182) / 364)
exe '2resize ' . ((&lines * 69 + 42) / 84)
exe 'vert 2resize ' . ((&columns * 91 + 182) / 364)
exe '3resize ' . ((&lines * 10 + 42) / 84)
exe 'vert 3resize ' . ((&columns * 84 + 182) / 364)
exe '4resize ' . ((&lines * 69 + 42) / 84)
exe 'vert 4resize ' . ((&columns * 84 + 182) / 364)
exe '5resize ' . ((&lines * 10 + 42) / 84)
exe 'vert 5resize ' . ((&columns * 96 + 182) / 364)
exe '6resize ' . ((&lines * 69 + 42) / 84)
exe 'vert 6resize ' . ((&columns * 96 + 182) / 364)
exe '7resize ' . ((&lines * 10 + 42) / 84)
exe 'vert 7resize ' . ((&columns * 90 + 182) / 364)
exe '8resize ' . ((&lines * 69 + 42) / 84)
exe 'vert 8resize ' . ((&columns * 90 + 182) / 364)
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
exe 'vert 1resize ' . ((&columns * 91 + 182) / 364)
exe 'vert 2resize ' . ((&columns * 90 + 182) / 364)
exe 'vert 3resize ' . ((&columns * 90 + 182) / 364)
exe '4resize ' . ((&lines * 38 + 42) / 84)
exe 'vert 4resize ' . ((&columns * 90 + 182) / 364)
exe '5resize ' . ((&lines * 41 + 42) / 84)
exe 'vert 5resize ' . ((&columns * 90 + 182) / 364)
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
let s:l = 60 - ((59 * winheight(0) + 40) / 80)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
60
normal! 014|
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
let s:l = 50 - ((49 * winheight(0) + 40) / 80)
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
let s:l = 47 - ((46 * winheight(0) + 40) / 80)
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
let s:l = 2 - ((1 * winheight(0) + 19) / 38)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
2
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
let s:l = 1 - ((0 * winheight(0) + 20) / 41)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
1
normal! 0
wincmd w
exe 'vert 1resize ' . ((&columns * 91 + 182) / 364)
exe 'vert 2resize ' . ((&columns * 90 + 182) / 364)
exe 'vert 3resize ' . ((&columns * 90 + 182) / 364)
exe '4resize ' . ((&lines * 38 + 42) / 84)
exe 'vert 4resize ' . ((&columns * 90 + 182) / 364)
exe '5resize ' . ((&lines * 41 + 42) / 84)
exe 'vert 5resize ' . ((&columns * 90 + 182) / 364)
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
exe '1resize ' . ((&lines * 38 + 42) / 84)
exe 'vert 1resize ' . ((&columns * 90 + 182) / 364)
exe '2resize ' . ((&lines * 41 + 42) / 84)
exe 'vert 2resize ' . ((&columns * 90 + 182) / 364)
exe '3resize ' . ((&lines * 39 + 42) / 84)
exe 'vert 3resize ' . ((&columns * 90 + 182) / 364)
exe '4resize ' . ((&lines * 40 + 42) / 84)
exe 'vert 4resize ' . ((&columns * 90 + 182) / 364)
exe 'vert 5resize ' . ((&columns * 90 + 182) / 364)
exe '6resize ' . ((&lines * 38 + 42) / 84)
exe 'vert 6resize ' . ((&columns * 91 + 182) / 364)
exe '7resize ' . ((&lines * 41 + 42) / 84)
exe 'vert 7resize ' . ((&columns * 91 + 182) / 364)
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
let s:l = 16 - ((15 * winheight(0) + 19) / 38)
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
let s:l = 16 - ((15 * winheight(0) + 20) / 41)
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
let s:l = 16 - ((15 * winheight(0) + 19) / 39)
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
let s:l = 17 - ((16 * winheight(0) + 20) / 40)
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
let s:l = 16 - ((15 * winheight(0) + 40) / 80)
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
let s:l = 16 - ((15 * winheight(0) + 19) / 38)
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
let s:l = 18 - ((10 * winheight(0) + 20) / 41)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
18
normal! 0
wincmd w
exe '1resize ' . ((&lines * 38 + 42) / 84)
exe 'vert 1resize ' . ((&columns * 90 + 182) / 364)
exe '2resize ' . ((&lines * 41 + 42) / 84)
exe 'vert 2resize ' . ((&columns * 90 + 182) / 364)
exe '3resize ' . ((&lines * 39 + 42) / 84)
exe 'vert 3resize ' . ((&columns * 90 + 182) / 364)
exe '4resize ' . ((&lines * 40 + 42) / 84)
exe 'vert 4resize ' . ((&columns * 90 + 182) / 364)
exe 'vert 5resize ' . ((&columns * 90 + 182) / 364)
exe '6resize ' . ((&lines * 38 + 42) / 84)
exe 'vert 6resize ' . ((&columns * 91 + 182) / 364)
exe '7resize ' . ((&lines * 41 + 42) / 84)
exe 'vert 7resize ' . ((&columns * 91 + 182) / 364)
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
exe 'vert 1resize ' . ((&columns * 84 + 182) / 364)
exe 'vert 2resize ' . ((&columns * 84 + 182) / 364)
exe '3resize ' . ((&lines * 8 + 42) / 84)
exe 'vert 3resize ' . ((&columns * 194 + 182) / 364)
exe '4resize ' . ((&lines * 71 + 42) / 84)
exe 'vert 4resize ' . ((&columns * 194 + 182) / 364)
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
let s:l = 15 - ((14 * winheight(0) + 40) / 80)
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
let s:l = 17 - ((16 * winheight(0) + 40) / 80)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
17
normal! 0
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
let s:l = 1 - ((0 * winheight(0) + 35) / 71)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
1
normal! 0
wincmd w
exe 'vert 1resize ' . ((&columns * 84 + 182) / 364)
exe 'vert 2resize ' . ((&columns * 84 + 182) / 364)
exe '3resize ' . ((&lines * 8 + 42) / 84)
exe 'vert 3resize ' . ((&columns * 194 + 182) / 364)
exe '4resize ' . ((&lines * 71 + 42) / 84)
exe 'vert 4resize ' . ((&columns * 194 + 182) / 364)
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
