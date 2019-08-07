#include <iostream>
#include <cctype>

void	megaphone(int argc, char **argv)
{
	int j;
	int i;

	for ( i = 1; i != argc; i++)
	{
		j = 0;
		while (argv[i][j])
		{
			std::cout << (char)toupper(argv[i][j]);
			j++;
		}
	}
}

int	main(int argc, char **argv)
{
	if (argc > 1)
		megaphone(argc, argv);
	else 
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << "\n";
	return (0);
}

