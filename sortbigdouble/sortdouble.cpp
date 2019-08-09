#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int countstrings()
{
	std::ifstream in("unsorted.txt");
	int i = 0;
	std::string temp;

	if (in.is_open())
	{
		while (getline(in,temp))
			i++;
	}
	in.close();
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
	std::cout << "Check is good boy!\n";
	out.close();
	return (false);
}

bool checkstring(std::string &str)
{
	std::istringstream i(str);
	double x;

	if (!(i >> x))
		return false;
	return true;
}

void sort()
{
	std::string str1;
	std::string str2;	
	
	std::cout << "working step 1\n";
	for (int k = 0; k < countstrings(); k++)	
	{
		std::cout << "Loop's done!\n";
		std::ifstream in("unsorted");
		int n = 1;
		
		while (getline(in, str1) && checkstring(str1) == false);
		while (getline(in, str2))
		{	if (checkstring(str2) == true)
			{
				if (str1.compare(str2) == 1 && checksort(str2) == false)
					str1 = str2;
				else if (str1.compare(str2) == 0)
					n++;
			}
		}
		std::ofstream out("sorted.txt", std::ios::app);	
		for (int l = 0; l < n; l++)
			out << str1 << "\n";
		std::cout << str1 << "\n";
		out.close();
		in.close();
		}
}

int main()
{
	sort();
	return (0);
}
