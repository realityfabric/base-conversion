#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_lineEdit_input_textChanged(const QString &arg1)
{
    ui->lineEdit_result->setText(QString::number(
                                     base_conversion(arg1.toInt(),
                                     ui->spinBox_inputBase->text().toInt(),
                                     ui->spinBox_outputBase->text().toInt()))
                                 );
}
