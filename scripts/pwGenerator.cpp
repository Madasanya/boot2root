#include <iostream>
#include <string>

std::string characters = "eahtpr"; // predefined characters
std::string current = "";
std::string pw = "";
bool used[6]; // to keep track of which characters have been used

void bruteForce(int depth)
{
	if (depth == 6)
	{
		std::cout << "I" << current << "wnage" << std::endl;
		return;
	}
	for (int i = 0; i < characters.size(); i++)
	{
		if (used[i])
		{
			continue;
		}
		used[i] = true;
		current.push_back(characters[i]);
		bruteForce(depth + 1);
		current.pop_back();
		used[i] = false;
	}
}

int main()
{
	bruteForce(0);
	return 0;
}
