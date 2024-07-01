#ifndef CLASS_NEIRONNAIA_SET_H
#define CLASS_NEIRONNAIA_SET_H

#endif // CLASS_NEIRONNAIA_SET_H

class Neyronnaya_sety {

  // свойства:
public:
  ////////////////////////////////////////////////////////////////////////////////////
  // вложенные классы
  ////////////////////////////////////////////////////////////////////////////////////

  class Neyron {}; // вложенный класс
  class Sinaps {}; // вложенный класс

  // конец вложенных классов

  ////////////////////////////////////////////////////////////////////////////////////
  // функции:
  ////////////////////////////////////////////////////////////////////////////////////
  // Функция подачи сигналов на вход (картинка единицы):
  static void Funktciia_Podachi_Signalov_Na_Vhod(); // строк. 545

  // Функция обучения:

  static void Funktciia_Obucheniia();

  // Функция решения:
  static void Funktciia_Resheniia();
  // Функция Заполнить нейроны начальными случайными зарядами

  static void
  Funktciia_Zapolnit_Neirony_Nachalnymi_Sluchainymi_Zariadami(); // объявление
                                                                 // функции

  // функция заполнения нейронов зарядами из файла
  static void Funktciia_Zapolneniia_Neironov_Iz_Faila();
  // функция заполнения синапсов сопротивлениями из файла
  static void Funktciia_Zapolneniia_Sinapsov_Iz_Faila();

  // Функция заполнения сопротивлений синапсов случайными начальными значениями:
  static void
  Funktciia_Zapolneniia_Soprotivlenii_Sinapsov_Sluchainymi_Nachalnymi_Znacheniiami();
  // покамест не включу функцию активации
  // ...        static void Funktciia_Aktivatcii();
  // функция проверки ошибки:
  static void Funktciia_Proverki_Oshibki();
  // функция отображения решения:
  static void Funktciia_Otobrazheniia_Resheniia();
  // конец функций
  ///////////////////////////////////////////////////////////////////////////////////
  ///////////////////////////////////////////////////////////////////////////////////
  ///////////////////////////////////////////////////////////////////////////////////
  // переменные:
  ////////////////////////////////////////////////////////////////////////////////////
public:
  Neyronnaya_sety();
  // конструктор
  ~Neyronnaya_sety(); // деструктор
};
