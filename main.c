#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main(int argc, char *argv[]) {

	if (argc != 2 && argc != 3 && argc != 4)
	{
		printf("Usage: ./a.out <FUNCTION> <ARG>.   Do \"./a.out help\" for help\n");
		return 0;
	}
	
	char *function = argv[1];

	if (strcmp(function, "help") == 0)
	{
		printf("Function list :\n");
		printf("\tatoi\n");
		printf("\tbzero\n");
		printf("\tisalnum\n");
		printf("\tisalpha\n");
		printf("\tisascii\n");
		printf("\tisdigit\n");
		printf("\tisprint\n");
		printf("\tmemccpy\n");
		printf("\tmemchr\n");
		printf("\tmemcmp\n");
		printf("\tmemcpy\n");
		printf("\tmemmove\n");
		printf("\tmemset\n");
		printf("\tstrcat\n");
		printf("\tstrchr\n");
		printf("\tstrcmp\n");
		printf("\tstrcpy\n");
		printf("\tstrdup\n");
		printf("\tstrlcat\n");
		printf("\tstrlen\n");
		printf("\tstrncat\n");
		printf("\tstrncmp\n");
		printf("\tstrncpy\n");
		printf("\tstrnstr\n");
		printf("\tstrrchr\n");
		printf("\tstrstr\n");
		printf("\ttolower\n");
		printf("\ttoupper\n");
	}
	else if (strcmp(function, "atoi") == 0 && argc == 3)
	{
		printf("====================================\n");
		printf("ft_atoi : \"%s\" -> %d\n", argv[2], ft_atoi(argv[2]));
		printf("atoi    : \"%s\" -> %d\n", argv[2], atoi(argv[2]));
		printf("====================================\n");
	}
	else if (strcmp(function, "isalpha") == 0 && argc == 3)
	{
		int i = -1;
		printf("====================================\n");
		while (argv[2][++i])
			printf("Is alpha ? : '%c' -> %d\n", argv[2][i], ft_isalpha(argv[2][i]));
		printf("====================================\n");
	}
	else if (strcmp(function, "isprint") == 0 && argc == 2)
	{
		int i = -1;
		printf("====================================\n");
		while (++i <= 127)
			printf("char '%c' -> %d\n", i, ft_isprint(i));
		printf("====================================\n");
	}
	else if (strcmp(function, "strlcat") == 0 && argc == 4)
	{
		char *a;
		char *b;
		size_t lena = ft_strlen(argv[2]);
		size_t lenb = ft_strlen(argv[3]);
		a = malloc(lena * sizeof(char));
		b = malloc(lenb * sizeof(char));
		ft_memcpy(a, argv[2], lena);
		ft_memcpy(b, argv[3], lenb);
		printf("====================================\n");
		printf("ft_strlcat : \"%s\" et \"%s\" -> ", argv[2], argv[3]);
		ft_strlcat(argv[2], argv[3], lena);
		printf("%s\n", argv[2]);
		printf("strlcat : \"%s\" et \"%s\" -> ", a, b);
		strlcat(a, b, lena);
		printf("%s\n", a);
		printf("====================================\n");
	}
	else if (strcmp(function, "memset") == 0 && argc == 2)
	{
		int array [] = { 54, 85, 20, 63, 21 };
		size_t size = sizeof( int ) * 5;
		int length;
		for( length = 0; length < 5; length++) {
			printf( "%d ", array[ length ] );
		}
		printf( "\n" );
		ft_memset( array, 0, size );
		for( length=0; length<5; length++) {
			printf( "%d ", array[ length ] );
		}
		printf( "\n" );
	}
	else if (strcmp(function, "bzero") == 0 && argc == 2)
	{
		char array[] = "Salut";
		size_t size = sizeof(int) * 5;
		printf("%s\n", array);
		ft_bzero(array, size);
		printf( "%s\n", array);
	}
	else if (strcmp(function, "memchr") == 0 && argc == 2)
	{
		char a[] = "Ndz zd efef EF Ef ef efFG4";
		size_t size = ft_strlen(a);
		void *found = ft_memchr(a, 'z', size);
		printf("Valeur %s", (found != NULL ? "trouvée " : "inhexstante\n"));
		if (found != NULL)
			printf("a l'adresse : %p\n", found);
	}
	else if (strcmp(function, "memcpy") == 0 && argc == 2)
	{
		int array[] = { 54, 85, 20, 63, 21, 21, 529, 21, 21, 21 };
		int *copy = NULL;
		int length = sizeof(int) * 5;
		copy = (int *) malloc(length);
		for(length = 0; length < 10; length++) { printf("%d ", array[length]); }
		ft_memcpy(copy, array, length);
		for(length = 0; length < 10; length++) { printf("%d ", copy[length]); }
		printf("\n");
		free(copy);
	}
	else if (strcmp(function, "memmove") == 0 && argc == 2)
	{
		int data[] = { 20, 30, 40, 50, 60, 70, 80, 90, 100, 0 };
		for(int i = 0; i < 10; i++) { printf("%d ", data[i]); }
		puts("");
		void *source = (void *) data;
		void *destination = (void *) (data + 1);
		size_t size = 10 * sizeof(int);
		memmove(destination, source, size);
		data[0] = 10;
		for(int i = 0; i < 10; i++) { printf("%d ", data[i]); }
		puts("");
	}
	else if (strcmp(function, "strlen") == 0 && argc == 3)
	{
		printf("====================================\n");
		printf("len of : \"%s\" -> %zu\n", argv[2], ft_strlen(argv[2]));
		printf("====================================\n");
	}
	else
	{
		printf("Il y a une erreur dans la formulation de la commande.\n");
	}

	return 0;
}
