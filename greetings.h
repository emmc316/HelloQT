#ifndef GREETINGS_H
#define GREETINGS_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Greetings; }
QT_END_NAMESPACE

class Greetings : public QMainWindow
{
    Q_OBJECT

public:
    Greetings(QWidget *parent = nullptr);
    ~Greetings();

private slots:
    void on_buttonGreeting_clicked();

private:
    Ui::Greetings *ui;
};
#endif // GREETINGS_H
