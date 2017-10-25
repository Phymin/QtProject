#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>


namespace Ui {
class MainWindow;
}

class QFileSystemModel;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_action_AGV_triggered(bool checked);
    void on_action_Project_triggered(bool checked);

    void on_pushButton1_clicked();

    void on_pushButton2_clicked();

    void on_pushButton3_clicked();

    void on_pushButton4_clicked();

    void on_listView_doubleClicked(const QModelIndex &index);

private:
    Ui::MainWindow *ui;

    QFileSystemModel* _fileModel;
    QString _currentProjectPath;
    QString _currentAgvPath;
};

#endif // MAINWINDOW_H
