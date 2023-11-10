// program to find countries in Pete's World
// date November 2022
// author Pete Lowe
// add Sofiia Pankiv
// estimated time 120 minutes
// actual time ??
// version 1.0


#include <iostream>


int main()
{
	int region = 0; // user choosen region number
	char letter = ' '; // user choosen letter
	std::cout << "Pete's World select a region\n 1. Americas\n 2. Europe\n 3. Africa\n 4. Asia\n 5. Rest of the World" << std::endl;
	std::cin >> region;
	if (region < 1 || region > 5)
	{
		std::cout << "You need to select a number between 1 and 5" << std::endl;
		return 0;
	}
	std::cout << "Pick a letter from A to A or Z to Z" << std::endl; // change this line each iteration
	std::cin >> letter;
	if (letter < 'A' || letter > 'Z') // not a capital letter
	{ 
		if (letter < 'a' || letter > 'z') // not a lower case letter
		{
			std::cout << "You need to select a letter from A to Z" << std::endl;
			return 0; 
		}		
	}
	if (letter == 'a' || letter == 'A') // written by Pete
	{
		if (region == 1)
		{
			std::cout << "Argentina" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Albania, Austria" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Algeria, Angola" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Afghanistan, Armenia, Azerbaijan" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Australia, Antarctica, Aruba, Anguilla Leeward Islands, Antigua and Barbuda, American Samoa" << std::endl;
		}
	}	
	if (letter == 'z' || letter == 'Z') // written by Pete
	{
		if (region == 1)
		{
			std::cout << "There are no Zs in the Americas" << std::endl; // default negative response
		}
		if (region == 2)
		{
			std::cout << "There are no Zs in Europe" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Zimbabwe, Zambia" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "There are no Zs in Aisa" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "There are no Zs in rest of the world" << std::endl;
		}

	}
	
	if (letter == 'b' || letter == 'B') // written by Sofiia
	{
		if (region == 1)
		{
			std::cout << "Bangladesh" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Belize" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Bolivia" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Brazil" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Barbados, Bahamas" << std::endl;
		}
	}
	
	if (letter == 'b' || letter == 'B') // written by Sofiia
	{
		if (region == 1)
		{
			std::cout << "Bangladesh, Belize, Bolivia, Bermuda, Brazil" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "BahrainArabian Peninsula, Belarus, Belgium, Bosnia and Herzegovina, Bulgaria" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Benin, Botswana, Burkina Faso, Burundi" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Bangladesh, Bhutan, Brunei Darussalam" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Barbados, Bahamas" << std::endl;
		}
	}

	if (letter == 'c' || letter == 'C') // written by Sofiia
	{
		if (region == 1)
		{
			std::cout << "Canada, Chile, Colombia, Costa Rica " << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Croatia Balkan Peninsula, Czech Republic" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Cameroon, Cape Verde, Central African Republic, Chad, Comoros, Democratic Republic of the Congo (Kinshasa), Congo, Côte D'ivoire (Ivory Coast)" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Cambodia, China, Christmas Island, Cocos (Keeling) Islands, Cyprus Mediterranean" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Cayman Islands Greater Antilles, Cook Islands, Cuba" << std::endl;
		}
	}

	if (letter == 'd' || letter == 'D') // written by Sofiia
	{
		if (region == 1)
		{
			std::cout << "There are no Ds in America " << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Denmark" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Djibouti" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "There are no Ds in Asia" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Dominica, Dominican Republic" << std::endl;
		}
	}
	
	if (letter == 'e' || letter == 'E') // written by Sofiia
	{
		if (region == 1)
		{
			std::cout << "Ecuador, El Salvador " << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Estonia Northern" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Egypt, Equatorial Guinea, Eritrea, Ethiopia" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "East Timor (Timor-Leste)" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "There is not Es Countries" << std::endl;
		}
	}

	if (letter == 'f' || letter == 'f') // written by Sofiia
	{
		if (region == 1)
		{
			std::cout << "French Guiana, " << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Faroe Islands, Finland, France, " << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Falkland Islands, " << std::endl;
		}
		if (region == 4)
		{
			std::cout << "there is not Fs countries" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Fiji, French Polynesia, French Southern Territories" << std::endl;
		}
	}


	return 1;
}