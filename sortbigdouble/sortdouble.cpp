#include <iostream>
#include <string>

int countstrings()
{
	std::ifstream in("unsorted.txt");
	int i = 0;
	if (in.is_open())
	{
		while(!in.eof)
			i++;
	}
	return (i);
}

string searchmin()
{
	int n = 0;
	std::ofstream out("sorted.txt", std::ios::app);
	std::ifstream in("unsorted.txt");
	if (in.is_open())
	{
		while 
	}
}

int main()
{
	std::string str1;
	std::string str2;

	std::ifstream in("unsorted.txt");
	std::ofstream out("sorted.txt", std::ios::app);
	int i = 1;
	if (in.is_open())
	{
		getline(in, str1);
		while (getline(in, str2))
		{
		       if (compare(str1, str2) == 1)
		       {
			       str1 = str2;
			       i++;
		       }
		}
		in.seekg(0, std::ios::begin);
	}
	in.close();
}
