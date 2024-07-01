#include "Dialog.h"

#include <QApplication>
// свои заголовки:
#include <QFile>
#include <QFileInfo>
#include <QProcess>
#include <QRandomGenerator>
#include <QThread>
//#include <QSound>
#include <random.h>

#include <QTextStream>

#include "Class_Neironnaia_Set.h"
#include "Klass_Sinaps.h"
#include "class_Neiron.h"
//
/// глобальные переменные
///
/// Neiron
///
unsigned long long int Synaps::Peremennaia_Soprotivlenie_Sinapsa[10105] =
    {}; // Определение переменной класса.
QString s = "";
QString file_suschestvuet = "";
using Random = effolkronium::random_static;
///////////////////////////////// родная функция:
///////////////////////////////////////////////////////////////////
///
int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  Dialog w;
  w.show();
  return a.exec();
}
//////////////////////////////// конец родной функции
///

///
/////////////////////////////////////////////////////////////////////
void Neyronnaya_sety::
    Funktciia_Zapolneniia_Soprotivlenii_Sinapsov_Sluchainymi_Nachalnymi_Znacheniiami()
// определение
// функции
// заполнения синапсов начальными случайными зарядами
{
  //
  QString path =
//      "/home/viktor/my_projects_qt_2/"
//      "build-zapolnenie_sinapsov_sluchajnymi_nachalnymi_soprotivleniyami_2-"
//      "Desktop_Qt_5_12_12_GCC_64bit-Debug/sinapsi.txt"; // Файл с начальными
                                                        // зарядами нейронов//
      "/home/viktor/my_projects_qt_2/Sgenerirovannye_fayly/1-1/sinapsi.txt";
  
  
  // проверка существования файла:
  QFileInfo check_file(path);
  // проверьте, существует ли файл,
  if (check_file.exists() == false) // Если файла нет
  {
    unsigned long long int numbers_strings[10106];
    // qint64
    //(qint64)
    //  QRandomGenerator generator;
    // generator.bounded(0, 10);
    // Цикл
    for (int i = 0; i < 10105; i++) { // начало цикла
      //  QRandomGenerator64::securelySeeded();  //
	unsigned long long int Peremennaia_Sluchainoe_Chislo =

	    //  QRandomGenerator64::global()->bounded(0,  // 922337203//
	    //                                   16777215);
	    //
	    //(unsigned long long int)
	    //

	    //    QRandomGenerator::global()->generate();  // generate64();

	    // QRandomGenerator64 мне кажется может давать отрицательные числа
	    // потому что максимальное число генератора больше Максимального числа
	    // компьютера в 2 раза QRandomGenerator64::global() тут поменяю на
	    // новый генератор:
	    Random::get(1, 2147483647);
//16777215); - было
      //
      //
      //
      //   (int)QColor::fromRgb(QRandomGenerator::global()->generate());

      // QRandomGenerator64::
      //
      //
      //    (unsigned long int)QRandomGenerator::
      //                     generator.global()->bounded(
      //                     0, //(unsigned long int)
      //                       4294967295
      //                         // 9223372036854775807  //

      //                );
      //

      // qint64 QRandomGenerator::bounded(int lowest, qint64 highest)
      //  unsigned long int Peremennaia_Sluchainoe_Chislo =
      //  generator.generate64();
      // тут генерирует и отрицательные числа видимо превышает диапазон
      // генератора QRandomGenerator::generate64();
      Synaps::Peremennaia_Soprotivlenie_Sinapsa[i] =
          Peremennaia_Sluchainoe_Chislo;
      //
      // Тут видимо добавить число в массив
      //   int numbers_strings[10106];
      numbers_strings[i] = Synaps::Peremennaia_Soprotivlenie_Sinapsa[i];
      s = s.append(QString::number(numbers_strings[i]));
      s = s.append("\n"); // перевод строки

      //////////////
    } //     }  // Конец цикла синапсов
    //
    // Записать строку в файл:
    //
    // Создаем объект класса QFile и связываем его с указанным именем
    //файла
    QString filename =
        
//        "/home/viktor/my_projects_qt_2/"
//        "build-zapolnenie_sinapsov_sluchajnymi_nachalnymi_soprotivleniyami_2-"
//        "Desktop_Qt_5_12_12_GCC_64bit-Debug/sinapsi.txt"
        
          "/home/viktor/my_projects_qt_2/Sgenerirovannye_fayly/1-1/sinapsi.txt"
        
        ;
    QFile file(filename);
    // Открываем файл в режиме "Только для записи"
    if (file.open(QIODevice::WriteOnly)) { // Если открыли файл начало
      //
      QTextStream out(&file); // поток записываемых данных направляем в
      // файл
      // Для записи данных в файл используем оператор <<
      out << s;
      //
    } // Если открыли файл конец
    // Видимо тут проверку сделать что не смогли открыть файл. Можно глобальную
    // переменную сделать что не смогли открыть.
    else {
      //  qWarning("Could not open file");  // Не могу открыть файл
    }
    // Закрываем файл
    file.close();
    //
  } // конец условия если файла нет
  //
  else {
    //"если файл существует то"
    // ui
    // Нужна переменная
    file_suschestvuet = "da";
    //
  }
  //
  // Звук:
  QProcess().execute("/home/viktor/my_scripts_2/zvuk.sh");
} // Конец функции
