#ifndef CUSTOMTCPSERVER_H
#define CUSTOMTCPSERVER_H

#include <QDebug>
#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>

class CustomTcpServer : public QTcpServer
{
	Q_OBJECT
public:
	CustomTcpServer(QObject *parent = Q_NULLPTR);

	~CustomTcpServer();

	virtual bool hasPendingConnections() const override;

	virtual QTcpSocket * nextPendingConnection() override;

protected:

	virtual void incomingConnection(qintptr socketDescriptor) override;

public slots:

	void HaveNewConnection();
};

#endif // CUSTOMTCPSERVER_H
