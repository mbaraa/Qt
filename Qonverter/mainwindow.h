#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <string>
using std::string;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

typedef long long int lli;

class MainWindow : public QMainWindow {
    Q_OBJECT

public slots:

    void convertDecimalToOthers();
    void convertBinaryToOthers();
    void convertOctalToOthers();
    void convertHexadecimalToOthers();


public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private: // variables
    Ui::MainWindow *ui;

    // numbers
    QString binary;
    QString decimal;
    QString octal;
    QString hexadecimal;

public:
    // clear number boxes
    void clearBoxes();

    // static functions

    // reverse string function
    static QString reverseString(QString);

    // convert from decimal
    static QString convertDecimalToBinary(lli);
    static QString convertDecimalToOctal(lli);
    static QString convertDecimalToHexadecimal(lli);
    // convert from binary
    static QString convertBinaryToDecimal(lli);
    // convert from octal
    static QString convertOctalToDecimal(lli);
    static QString convertOctalToHexadecimal(lli);
    // convert from hexadecimal
    static QString converyHexadecimalToDecimal(QString);
    static QString convertHexadecimalToOctal(QString);

};
#endif // MAINWINDOW_H