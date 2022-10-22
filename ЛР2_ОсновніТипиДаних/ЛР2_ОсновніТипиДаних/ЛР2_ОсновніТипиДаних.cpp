
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	// Назва мiста 
	string cityName = "Київ";
	// Країна 
	string countryName = "Україна";
	// Назва мешканцiв
	string nameOfResidents = "Кияни";
	// Наявнiсть метро
	bool availabilityOfMetro = true;
	// Кількiсть районів
	unsigned int numberOfDistricts = 10;
	// Населення міста
	unsigned int populationOfCity = 2844000;
	// Площа міста (кв. км.)
	float squareOfCity = 835.58;
	// Густота населення (на кв. км.)
	float populatioDensity = 3516.93;

	unsigned int totalMemoryInBytes = sizeof(cityName) +
									  sizeof(countryName) +
									  sizeof(nameOfResidents) +
									  sizeof(availabilityOfMetro) +
									  sizeof(numberOfDistricts) +
									  sizeof(populationOfCity) +
									  sizeof(squareOfCity) +
									  sizeof(populatioDensity);
	
	cout << "Назва мiста:\t\t\t" << cityName << endl;
	cout << "Країна:\t\t\t\t" << countryName << endl;
	cout << "Назва мешканцiв:\t\t" << nameOfResidents << endl;
	cout << "Наявнiсть метро:\t\t" << ((availabilityOfMetro) ? "Так" : "Ні") << endl;
	cout << "Кiлькiсть районiв:\t\t" << numberOfDistricts << endl;
	cout << "Населення мiста:\t\t" << populationOfCity << endl;
	cout << "Площа мiста (кв. км.):\t\t" << 835.58 << endl;
	cout << "Густота населення (на кв. км.):\t" << populatioDensity << endl;
	cout << "Загальний об'єм використанної пам'ятi (в байтах):" << totalMemoryInBytes << endl;

}


