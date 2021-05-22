#include "greetings.h"
#include "ui_greetings.h"
#include <iostream>


Greetings::Greetings(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Greetings)
{
    ui->setupUi(this);
}

Greetings::~Greetings()
{
    delete ui;
}




void Greetings::on_buttonGreeting_clicked()
{
    QString text = ui->fieldName->text();
    std::string name = text.toStdString();
    if(name =="Eric"){
        ui->greetingLabel->setText("Hello... wait.. My name is "+ text.fromStdString(name)+"\nlike who developed this!");
    }

    else if(name == "emmc316"){
        ui->greetingLabel->setText("Hello... "+ text.fromStdString(name)+" uhhh it's me!");
    }

    else
    ui->greetingLabel->setText("Hello "+ text.fromStdString(name)+" have a nice day");

}

