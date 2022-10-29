// ������ ������ � ������� ������������� �������
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
	cout << "1.�������� ������: " << m.title << '\n';
	cout << "2.��� ������: " << m.year << '\n';
	cout << "3.����: " << m.genre << '\n';
	cout << "4.����������������� ������: " << m.duration << " ���\n";
	cout << "5.���� �� ����: " << m.price << " ���\n";
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
	cout << "��������, ����� ���������� � ������ ���������� ��������:\n";
	int choice;
	cin >> choice;
	switch(choice) {
	case 1: cout << "\n������� ����� �������� ������: ";
		cin >> m.title; cout << "���������� ���������\n"; break;
	case 2: cout << "\n������� ����� ��� ������ ������: ";
		cin >> m.year; cout << "���������� ���������\n"; break;
	case 3: cout << "\n������� ������ ����: ";
		cin >> m.genre; cout << "���������� ���������\n"; break;
	case 4: cout << "\n������� ������ ����������������� ������: ";
		cin >> m.duration; cout << "���������� ���������\n"; break;
	case 5: cout << "\n������� ������ ���� �����: ";
		cin >> m.price; cout << "���������� ���������\n"; break;
	default: cout << "\n�� ����� ������������ ��������.";
	}
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;
	movies M{ "�������", 1974, "�����", 90, 200 };
	movies N{ "��������", 2008, "�������", 100, 230 };
	movies C{ "�������", 1999, "����������", 110, 250 };
	show_movie(M);
	expensive(M, N, C);
	show_movie(M);
	update_info(M);
	show_movie(M);
	return 0;
}