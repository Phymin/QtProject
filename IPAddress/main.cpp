#include <QtCore/QCoreApplication>

#include <QHostAddress>
#include <QNetworkInterface>
#include <QHostInfo>
#include <QList>
#include <QDebug>

void getIP();

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString localHostName = QHostInfo::localHostName();
    qDebug() << "Local Host Name: " << localHostName;

    getIP();

    return a.exec();
}


void getIP()
{
    QList<QHostAddress> list = QNetworkInterface::allAddresses();

    for (auto address : list)
    {
        if (address.protocol() == QAbstractSocket::IPv4Protocol)
        {
            qDebug() << address.toString();
        }
    }
}
