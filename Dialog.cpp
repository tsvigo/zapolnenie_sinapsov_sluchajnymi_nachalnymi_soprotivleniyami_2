#include "Dialog.h"
#include "ui_Dialog.h"

#include <QRandomGenerator>

#include "Class_Neironnaia_Set.h"
extern QString file_suschestvuet;
Dialog::Dialog(QWidget *parent) : QDialog(parent), ui(new Ui::Dialog) {
  ui->setupUi(this);
  ////////////////////////////////////////////////////////
  ///
  ///
  Neyronnaya_sety::
      Funktciia_Zapolneniia_Soprotivlenii_Sinapsov_Sluchainymi_Nachalnymi_Znacheniiami(); ///
  //      Использование-вызов
  // if (file_suschestvuet == "da") ui->label->text() = "Файл уже существует.";
  if (file_suschestvuet == "da")
    ui->label->setText("Файл уже существует.");
  else
    ui->label->setText("Файл создан.");
  ; ///
}

Dialog::~Dialog() { delete ui; }

void Dialog::on_pushButton_clicked() {

  QString s = QString::number(
      QRandomGenerator::max()); // QRandomGenerator64 даёт 18446744073709551615
  // 64 мне кажется может давать отрицательные числа потому что максимальное
  // число генератора больше Максимального числа компьютера в 2 раза
  // QRandomGenerator даёт 4294967295
  // QString::number(QRandomGenerator64::max());
  // min=0
  //
  // QString s = QString::number(std::numeric_limits<qint64>::max());
  ui->label->setText(s);
  ui->lineEdit->setText(s);
}
