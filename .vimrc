set nocompatible
filetype off    

set rtp+=~/.vim/bundle/Vundle.vim
call vundle#begin()

   Plugin 'jacoborus/tender'


   call vundle#end()          
   filetype plugin indent on


let macvim_skip_colorscheme=1
set number	 
set linebreak	 
set showbreak=+++ 
set textwidth=100 
set showmatch	
set visualbell 
set cindent

set hlsearch	 
set smartcase	
set ignorecase	
set incsearch	
 
set autoindent	
set shiftwidth=3
set smartindent	 
set smarttab	 
set softtabstop=3 
 
set background=dark
colorscheme tender

set ruler	 
 
set undolevels=1000 
set backspace=indent,eol,start
 

syntax on

set t_Co=256 


