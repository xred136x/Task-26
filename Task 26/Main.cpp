// проэкт создан с помощью персонального шаблона
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
#include<cmath>
using namespace std;

struct movies {
	string title;
	int year;
	string genre;
	unsigned int duration;
	unsigned int price;
};

void show_movie(movies m) {
	cout << "1.Название фильма: " << m.title << '\n';
	cout << "2.Год выхода: " << m.year << '\n';
	cout << "3.Жанр: " << m.genre << '\n';
	cout << "4.Продолжительность фильма: " << m.duration << " мин\n";
	cout << "5.Цена за диск: " << m.price << " руб\n";
}

movies expensive(movies &m, movies &n, movies &c) {
	int max;
	max =  m.price > (n.price > c.price ? n.price : c.price) ? m.price : (n.price > c.price ? n.price : c.price);
	if (max == n.price)
	     m = n;
	if (max == c.price)
		m = c;
		return m;
}

void update_info(movies &m) {
	cout << "Выберите, какую информацию щ фильме необходимо обновить:\n";
	int choice;
	cin >> choice;
	switch(choice) {
	case 1: cout << "\nВведите новое название фильма: ";
		cin >> m.title; cout << "Информация обновлена\n"; break;
	case 2: cout << "\nВведите новый год выхода фильма: ";
		cin >> m.year; cout << "Информация обновлена\n"; break;
	case 3: cout << "\nВведите другой жанр: ";
		cin >> m.genre; cout << "Информация обновлена\n"; break;
	case 4: cout << "\nВведите другую продолжительность фильма: ";
		cin >> m.duration; cout << "Информация обновлена\n"; break;
	case 5: cout << "\nВведите другую цену диска: ";
		cin >> m.price; cout << "Информация обновлена\n"; break;
	default: cout << "\nВы ввели недопустимое значение.";
	}
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;
	movies M{ "Челюсти", 1974, "Ужасы", 90, 200 };
	movies N{ "Знамение", 2008, "Мистика", 100, 230 };
	movies C{ "Матрица", 1999, "Фантастика", 110, 250 };
	show_movie(M);
	expensive(M, N, C);
	show_movie(M);
	update_info(M);
	show_movie(M);
	return 0;
}