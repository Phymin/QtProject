#ifndef TIMESERVER_H
#define TIMESERVER_H

#include <QTcpServer>

class Dialog;


class TimeServer : public QTcpServer
{
    Q_OBJECT
public:
    TimeServer(QObject* parent = 0);

protected:
    void incomingConnection(int socketDescriptor) override;

private:
    Dialog* dlg;
};

#endif // TIMESERVER_H
