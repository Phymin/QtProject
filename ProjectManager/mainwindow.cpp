#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QFileSystemModel>
#include <QFileInfo>
#include <QProcess>
#include <QDebug>

#include <windows.h>
#include <shellapi.h>

const QString baseFilePath = "E:/NutStoreCloud/";

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    _fileModel = new QFileSystemModel(this);
   // _fileModel->setRootPath(baseFilePath);
    ui->listView->setModel(_fileModel);

    _currentProjectPath = baseFilePath + QString("Z_Project Materials/物流项目");
    _currentAgvPath = baseFilePath + QString("Working Materials/自主AGV");

    _fileModel->setRootPath(baseFilePath);
    ui->listView->setRootIndex(_fileModel->index(_currentProjectPath));
    ui->action_Project->setChecked(true);
    ui->pushButton4->setVisible(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_action_AGV_triggered(bool checked)
{
    if (checked)
    {
        ui->action_Project->setChecked(false);
        ui->pushButton4->setVisible(true);

        ui->listView->setRootIndex(_fileModel->index(_currentAgvPath));
    }
}

void MainWindow::on_action_Project_triggered(bool checked)
{
    if (checked)
    {
        ui->action_AGV->setChecked(false);
        ui->pushButton4->setVisible(false);

        ui->listView->setRootIndex(_fileModel->index(_currentProjectPath));
    }
}

void MainWindow::on_pushButton1_clicked()
{
    if (ui->action_Project->isChecked())
    {
        _currentProjectPath = baseFilePath + "Z_Project Materials/物流项目";
        QModelIndex index = _fileModel->index(_currentProjectPath);
        if (index.isValid())
        {
            ui->listView->setRootIndex(index);
        }
        else
        {
            qDebug() << "index is not valid.";
        }

    }
    else if (ui->action_AGV->isChecked())
    {
       // _currentAgvPath = baseFilePath + ""
    }

}

void MainWindow::on_pushButton2_clicked()
{
    if (ui->action_Project->isChecked())
    {
        _currentProjectPath = baseFilePath + "Z_Project Materials/车库项目";
        ui->listView->setRootIndex(_fileModel->index(_currentProjectPath));
    }
}

void MainWindow::on_pushButton3_clicked()
{
    if (ui->action_Project->isChecked())
    {
        _currentProjectPath = baseFilePath + "Z_Project Materials/研发项目";
        ui->listView->setRootIndex(_fileModel->index(_currentProjectPath));
    }
}

void MainWindow::on_pushButton4_clicked()
{

}

void MainWindow::on_listView_doubleClicked(const QModelIndex &index)
{
    QFileInfo fileInfo = _fileModel->fileInfo(index);
    if (fileInfo.isDir())
    {
        QString filePath = _fileModel->fileInfo(index).absoluteFilePath();
        ui->listView->setRootIndex(_fileModel->index(filePath));
    }
    else if (fileInfo.isFile())
    {
        QString fileName = fileInfo.absoluteFilePath();
        ShellExecute(NULL, QString("open").toStdWString().c_str(), fileName.toStdWString().c_str(), NULL, NULL, SW_SHOW);
        //fileName = "explorer " + fileName;
        //QProcess::execute(fileName);
    }
}
