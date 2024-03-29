#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:

    void on_actionImport_triggered();

    void on_actionExport_triggered();

    void on_sourcetext_textChanged();

    void on_actionNew_triggered();

    void on_actionAbout_triggered();

    void on_actionTranslate_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
