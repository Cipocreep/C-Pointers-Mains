#include <assert.h>
#include <stdio.h>

void ft_ft(int *nbr);
void ft_ultimate_ft(int *********nbr);
void ft_swap(int *a, int *b);
void ft_div_mod(int a, int b, int *div, int *mod);
void ft_ultimate_div_mod(int *a, int *b);
void ft_rev_int_tab(int *tab, int size);
void ft_sort_int_tab(int *tab, int size);

void	test_ex0(void (*tex0)(int*))
{
	int nb1 = 41;
	int nb2 = -2;
	int *nbp1 = &nb1;
	int *nbp2 = &nb2;
	printf("%i\n", nb1);
	printf("%i\n", nb2);

	//	nbp1 = &nb1;
	//	nbp2 = &nb2;
	tex0(nbp1);
	tex0(nbp2);
	assert(nb1 == 42);
	assert(nb2 == 42);
	printf("%i\n", nb1);
	printf("%i\n", nb2);

	printf("Tests Ex0 Passed!\n\n");
}

void	test_ex1(void (*tex1)(int*********))
{
	int nb1 = 41;
	int nb2 = -2;

	printf("%i\n", nb1);
	printf("%i\n", nb2);

	int *nbpt11 = &nb1;
	int *nbpt12 = &nb2;
	int **nbpt21 = &nbpt11;
	int **nbpt22 = &nbpt12;
	int ***nbpt31 = &nbpt21;
	int ***nbpt32 = &nbpt22;
	int ****nbpt41 = &nbpt31;
	int ****nbpt42 = &nbpt32;
	int *****nbpt51 = &nbpt41;
	int *****nbpt52 = &nbpt42;
	int ******nbpt61 = &nbpt51;
	int ******nbpt62 = &nbpt52;
	int *******nbpt71 = &nbpt61;
	int *******nbpt72 = &nbpt62;
	int ********nbpt81 = &nbpt71;
	int ********nbpt82 = &nbpt72;
	int *********nbpt91 = &nbpt81;
	int *********nbpt92 = &nbpt82;

//	nbp1 = &nb1;
//	nbp2 = &nb2;
	tex1(nbpt91);
	tex1(nbpt92);
	assert(nb1 == 42);
	assert(nb2 == 42);
	printf("%i\n", nb1);
	printf("%i\n", nb2);

	printf("Tests Ex1 Passed!\n\n");
}

void	test_ex2(void (*tex2)(int*, int*))
{
	int nba = 41;
	int nbb = -2;
	int *nbpa = &nba;
	int *nbpb = &nbb;
	printf("%i\n", nba);
	printf("%i\n", nbb);

	//	nbp1 = &nb1;
	//	nbp2 = &nb2;
	tex2(nbpa, nbpb);
	assert(nba == -2);
	assert(nbb == 41);
	printf("%i\n", nba);
	printf("%i\n", nbb);

	printf("Tests Ex2 Passed!\n\n");
}


void	test_ex3(void (*tex3)(int, int, int*, int*))
{
	int nb2 = 0;
	int nb1 = 0;
	int *nbpa = &nb2;
	int *nbpb = &nb1;

	tex3(21, 7, nbpa, nbpb);
	assert(*nbpa == 3);
	assert(*nbpb == 0);
	printf("with %i as the numerator and %i as the denominator, division = %i, modulo = %i\n", 21, 7, *nbpa, *nbpb);

	tex3(36, 7, nbpa, nbpb);
	assert(*nbpa == 5);
	assert(*nbpb == 1);
	printf("with %i as the numerator and %i as the denominator, division = %i, modulo = %i\n", 36, 7, *nbpa, *nbpb);

	tex3(-75, -7, nbpa, nbpb);
	assert(*nbpa == 10);
	assert(*nbpb == -5);
	printf("with %i as the numerator and %i as the denominator, division = %i, modulo = %i\n", -75, -7, *nbpa, *nbpb);

	tex3(-75, 7, nbpa, nbpb);
	assert(*nbpa == -10);
	assert(*nbpb == -5);
	printf("with %i as the numerator and %i as the denominator, division = %i, modulo = %i\n", -75, 7, *nbpa, *nbpb);

	tex3(19, -30, nbpa, nbpb);
	assert(*nbpa == 0);
	assert(*nbpb == 19);
	printf("with %i as the numerator and %i as the denominator, division = %i, modulo = %i\n", 19, 30, *nbpa, *nbpb);
	
	tex3(0, 45, nbpa, nbpb);
	assert(*nbpa == 0);
	assert(*nbpb == 0);
	printf("with %i as the numerator and %i as the denominator, division = %i, modulo = %i\n", 0, 45, *nbpa, *nbpb);

	printf("Tests Ex3 Passed!\n\n");
}

void	test_ex4(void (*tex4)(int*, int*))
{
	int nb2 = 21;
	int nb1 = 7;
	int *nbpa = &nb2;
	int *nbpb = &nb1;


	printf("with %i as the numerator and %i as the denominator, ", *nbpa, *nbpb);
	tex4(nbpa, nbpb);
	assert(*nbpa == 3);
	assert(*nbpb == 0);
	printf("division = %i, modulo = %i\n", *nbpa, *nbpb);

	*nbpa = 36;
	*nbpb = 7;
	printf("with %i as the numerator and %i as the denominator, ", *nbpa, *nbpb);
	tex4(nbpa, nbpb);
	assert(*nbpa == 5);
	assert(*nbpb == 1);
	printf("division = %i, modulo = %i\n", *nbpa, *nbpb);

	*nbpa = -75;
	*nbpb = -7;
	printf("with %i as the numerator and %i as the denominator, ", *nbpa, *nbpb);
	tex4(nbpa, nbpb);
	assert(*nbpa == 10);
	assert(*nbpb == -5);
	printf("division = %i, modulo = %i\n", *nbpa, *nbpb);

	*nbpa = -75;
	*nbpb = 7;
	printf("with %i as the numerator and %i as the denominator, ", *nbpa, *nbpb);
	tex4(nbpa, nbpb);
	assert(*nbpa == -10);
	assert(*nbpb == -5);
	printf("division = %i, modulo = %i\n", *nbpa, *nbpb);

	*nbpa = 19;
	*nbpb = -30;
	printf("with %i as the numerator and %i as the denominator, ", *nbpa, *nbpb);
	tex4(nbpa, nbpb);
	assert(*nbpa == 0);
	assert(*nbpb == 19);
	printf("division = %i, modulo = %i\n", *nbpa, *nbpb);

	*nbpa = 0;
	*nbpb = 45;
	printf("with %i as the numerator and %i as the denominator, ", *nbpa, *nbpb);
	tex4(nbpa, nbpb);
	assert(*nbpa == 0);
	assert(*nbpb == 0);
	printf("division = %i, modulo = %i\n", *nbpa, *nbpb);

	printf("Tests Ex4 Passed!\n\n");
}

void	test_ex5(void (*tex5)(int*, int))
{
	int array1[5] = {1, 2, 3, 4, 5};
	int array2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int array3[1] = {1};
	int ite = 0;

	tex5(array1, 5);
	while (ite < 5)
	{
		printf("%i, ", array1[ite]);
		ite++;
	}
	assert(array1[0] == 5);
	assert(array1[4] == 1);

	printf("\n");
	ite = 0;

	tex5(array2, 10);
	while (ite < 10)
	{
		printf("%i, ", array2[ite]);
		ite++;
	}
	assert(array2[0] == 10);
	assert(array2[9] == 1);

	printf("\n");
	ite = 0;

	tex5(array3, 1);
	while (ite < 1)
	{
		printf("%i, ", array3[ite]);
		ite++;
	}
	assert(array3[0] == 1);

	printf("\nTests Ex5 Passed!\n\n");
}


void	test_ex6(void (*tex6)(int*, int))
{
	int array1[5] = {4, 3, 5, 1, 2};
	int array2[10] = {2, 8, 7, 4, 10, 6, 3, 1, 9, 5};
	int array3[1] = {1};
	int ite = 0;

	tex6(array1, 5);
	while (ite < 5)
	{
		printf("%i, ", array1[ite]);
		ite++;
	}
	assert(array1[0] == 1);
	assert(array1[1] == 2);
	assert(array1[2] == 3);
	assert(array1[3] == 4);
	assert(array1[4] == 5);

	printf("\n");
	ite = 0;

	tex6(array2, 10);
	while (ite < 10)
	{
		printf("%i, ", array2[ite]);
		ite++;
	}
	assert(array2[0] == 1);
	assert(array2[1] == 2);
	assert(array2[2] == 3);
	assert(array2[3] == 4);
	assert(array2[4] == 5);
	assert(array2[5] == 6);
	assert(array2[6] == 7);
	assert(array2[7] == 8);
	assert(array2[8] == 9);
	assert(array2[9] == 10);

	printf("\n");
	ite = 0;

	tex6(array3, 1);
	while (ite < 1)
	{
		printf("%i, ", array3[ite]);
		ite++;
	}
	assert(array3[0] == 1);

	printf("\nTests Ex6 Passed!\n\n");
}

int	main(void)
{
	printf("\n\fft_ft:\n");
	test_ex0(ft_ft);

	printf("\n\fft_ultimate_ft:\n");
	test_ex1(ft_ultimate_ft);

	printf("\n\fft_swap:\n");
	test_ex2(ft_swap);

	printf("\n\fft_div_mod:\n");
	test_ex3(ft_div_mod);

	printf("\n\fft_ultimate_div_mod:\n");
	test_ex4(ft_ultimate_div_mod);

	printf("\n\fft_rev_int_tab:\n");
	test_ex5(ft_rev_int_tab);

	printf("\n\fft_sort_int_tab:\n");
	test_ex6(ft_sort_int_tab);
}
