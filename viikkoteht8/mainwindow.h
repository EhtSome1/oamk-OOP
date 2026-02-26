#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QTimer>

#include <QMainWindow>
#include <QString>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    short player1Time;
    short player2Time;
    short currentPlayer;
    short gameTime;
    QTimer *pQTimer;

private slots:
    void updateProgressBar();
    void setGameInfoText(QString);
    void changePlayer();

    void selectTime();
    void startStop();
};
#endif // MAINWINDOW_H
