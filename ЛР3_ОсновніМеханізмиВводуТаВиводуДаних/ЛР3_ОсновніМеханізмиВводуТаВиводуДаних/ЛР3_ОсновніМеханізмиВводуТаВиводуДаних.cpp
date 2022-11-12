#include <iostream>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    string nameOfTheBook;
    int numberOfPages;
    string authorsName;
    int yearOfPublication;

    cout << "Введiть назву книги: ";
    getline(cin, nameOfTheBook);
    
    cout << "Введiть кiлькiсть сторiнок книги: ";
    cin >> numberOfPages;

    cin.ignore();
    cout << "Введiть iм'я автора книги: ";
    getline(cin, authorsName);
    
    cout << "Введiть рiк публiкацiї книги: ";
    cin >> yearOfPublication;

    cout << "Отже, книга має такi властивостi:\t" << endl;
    cout << "Назва книги:\t\t" << nameOfTheBook << endl;
    cout << "Кiлькiсть її сторiнок:\t" << numberOfPages << endl;
    cout << "Iм'я її автора:\t\t" << authorsName << endl;
    cout << "Рiк її публiкацiї:\t" << yearOfPublication << endl;
}


