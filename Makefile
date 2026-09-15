all: build-C-pointers

build-C-pointers:	main.c ../ex0/ft_ft.c ../ex1/ft_ultimate_ft.c ../ex2/ft_swap.c ../ex3/ft_div_mod.c ../ex4/ft_ultimate_div_mod.c ../ex5/ft_rev_int_tab.c ../ex6/ft_sort_int_tab.c
	cc -Werror -Wall -Wextra $^ -o Tests-C-pointers
