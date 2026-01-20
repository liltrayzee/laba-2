#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;
struct more_data_car {
    string dealership;
    int cost;
};

struct data_car {
    string name;
    float speed;
    int year;
    more_data_car more_data;
};

void print(data_car* ptr_car, int size) {
    cout << "№    название\tскорость\tгод\tавтосалон\tцена(руб)\n";
    for (int i = 0; i < size; i++) {
        cout << i
            << "    " << (ptr_car + i)->name
            << "    " << (ptr_car + i)->speed
            << "    " << (ptr_car + i)->year
            << "    " << (ptr_car + i)->more_data.dealership
            << "    " << (ptr_car + i)->more_data.cost
            << endl;
    }
}

int main() {
    setlocale(LC_ALL, "RU");

    cout << "Задания"
        << "\n1) Вывод с использованием одним из способов указателя на структуру."
        << "\n2) Вывод с использованием указателей на несколько структур"
        << "\n3) Вывод с использованием указателей на несколько структур обращаясь к структурам из подфункций\n\n";

    data_car car[3];
    data_car* ptr_car;
    ptr_car = car;

    car[0] = { {"Dodge hellcat"}, {350.71}, {2018}, { "Mike's Motors" , 7500000} };
    car[1] = { {"Ford Mustang"}, {300}, {2012}, {"Turbo Charge", 10000000} };
    car[2] = { {"Ferrari M11"}, {389.4}, {2006}, { "Mike's Motors", 15999999 } };

    print(ptr_car, 3);

    return 0;
}