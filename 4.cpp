//#include <iostream>
//#include <locale.h> 
//using namespace std;
//
//struct employee     //объявление структуры
//{
//    int number;
//    float stipend;
//};
//
//employee enter()     //функция ввода
//{
//    employee worker;
//    cout << "\n\t Введите № сотрудника: ";
//    cin >> worker.number;
//    cout << "\t Введите пособие сотрудника: ";
//    cin >> worker.stipend;
//    return worker;   //функция возвращает вводиые значения
//}
//
//void output(employee worker)  //функция выводв
//{
//    cout << "\n\tСотрудник № " << worker.number << " получает " << worker.stipend << " $";
//}
//
//int main()
//{
//    setlocale(LC_ALL, "Rus");
//    employee worker1, worker2, worker3; //объявление переменных
//    
//    worker1 = enter(); //ввод
//    worker2 = enter();
//    worker3 = enter();
//    output(worker1);  //вывод
//    output(worker2);
//    output(worker3);
//}