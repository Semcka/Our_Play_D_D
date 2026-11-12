#include <iostream>
#include <windows.h>

//Demons & Depths Демоны и глубины

//Если нет приписки "Меню" в коментраии, это деталь основного меню игры
const int k_Campany = 1;//Кампании
const int k_Magazine = 2;//Магазин
const int k_Mag_Items = 1;//Магазин -> предметы
const int k_Mag_Stat = 2;//Магазин -> статы
const int k_Save = 3;//Сохранение
const int k_Exit = 0;//Выход из меню
const int k_Camp_Survive = 1;//Меню кампаний -> Выживание
const int k_Camp_Chapt_1 = 2;//Меню кампаний -> Глава 1

//--------------- Объявление функций ---------------
void ShowMenu();//Показать основное меню  +++
void RunMenu();//Запуск основного меню +++
void ShowMenuMagazine();//Показать меню магазина
void RunMenuMag();
void ShowMenuCamp();//Показать меню кампаний
void RunMenuCamp();


int ReadInt();//Проверка на чтение вводимых данных +++

// ---------------- main ----------------
int main(){
  SetConsoleOutputCP(CP_UTF8);//Консоль работает - Не трогать!!!
  int menu = 0;
  do{
    ShowMenu();
    menu = ReadInt();
    RunMenu( menu );
  }while( menu != 0 );
  return 0;
}

//--------------- Основное меню ---------------
void ShowMenu(){
    std::cout<<"\n\n========== Главное меню ==========\n\n" <<
               "---0 - выход\n---1 - Кампании\n---2 - Магазин" << 
               "\n--- 3 - сохранение\n---Выберите: ";
}

//--------------- Запуск основного меню ---------------
//входной параметр menu
//в зависимости от входного параметра, начинает кампании, магазин или выходит
void RunMenu( menu ){
    switch ( menu ){
      case k_Exit:{//Выход
        std::cout << "Выход из игры...";
        break;
      }
      case k_Campany:{//Кампании
        RunMenuCamp();
        break;
      }
      case k_Magazine:{//Магазин
        RunMenuMag();
        break;
      }
      case k_Save:{//Сохранение
        break;
      }
    }
}

//--------------- Меню кампаний ---------------
void ShowMenuCamp(){

}
//--------------- Меню магазина ---------------
void ShowMenuMagazine(){}

//--------------- Ввод числа ---------------
//Позволяет вводить ЧИСЛО и именно ЧИСЛО и ничего больше
int ReadInt(){
  int x;
  while( ! ( std::cin >> x ) ) {
    if ( std::cin.eof() ) {
      std::exit(0);
    }
    std::cin.clear();
    std::cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );
    std::cout << "Необходимо ввести число: ";
  }
  return x;
}