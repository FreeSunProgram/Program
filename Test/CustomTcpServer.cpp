#include "CustomTcpServer.h"

CustomTcpServer::CustomTcpServer(QObject *parent/* = Q_NULLPTR*/)
	:QTcpServer(parent)
{

}

CustomTcpServer::~CustomTcpServer()
{
	this->close();
}

bool CustomTcpServer::hasPendingConnections() const
{
	qDebug() << "Has a new hasPendingConnections!";

	return QTcpServer::hasPendingConnections();
}

QTcpSocket *CustomTcpServer::nextPendingConnection()
{
	qDebug() << "Has a new getNextPendingConnection!";

	return QTcpServer::nextPendingConnection();
}

void CustomTcpServer::incomingConnection(qintptr socketDescriptor)
{
	qDebug() << "Has a new incomingConnection!";

	QTcpServer::incomingConnection(socketDescriptor);
}

void CustomTcpServer::HaveNewConnection()
{
	qDebug() << "Has a new HaveNewConnection!";

	QTcpSocket *tcpSocket = this->nextPendingConnection();
}
