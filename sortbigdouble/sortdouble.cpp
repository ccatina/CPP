#include <iostream>
#include <fstream>
#include <string>

int countstrings()
{
	std::ifstream in("unsorted.txt");
	int i = 0;
	if (in.is_open())
	{
		while (!in.eof())
			i++;
	}
	return (i);
}

bool checksort(std::string str)
{
	std::string temp;
	std::ifstream out("sorted.txt");

	while (getline(out, temp))
	{
		if (str == temp)
		{
			out.close();
			return (true);
		}
	}
	out.close();
	return (false);
}

void sort()
{
	std::string str1;
	std::string str2;	
	
	std::ifstream in("unsorted.txt");
	
	if (in.is_open())
	{
		for (int k = 0; k < countstrings(); k++)
		{
			int n = 1;
			getline(in, str1);
			while (getline(in, str2))
			{	
				if (str1.compare(str2) == 1 && checksort(str2) == false)
					str1 = str2;
				else if (str1.compare(str2) == 0)
					n++;
			}
			std::ofstream out("sorted.txt", std::ios::app);	
			for (int l = 0; l < n; l++)
				out << str1 << "\n";
			out.close();
			in.seekg(0, std::ios::beg);
		}
	}
	in.close();
}

int main()
{
}
