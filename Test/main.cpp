#include <QCoreApplication>
#include <CustomTcpServer.h>
#include <QHostAddress>
#include <QDebug>

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);

	CustomTcpServer server;

	QObject::connect(&server, SIGNAL(newConnection()), &server, SLOT(HaveNewConnection()));

	qDebug() << "listen status is " << server.listen(QHostAddress(QHostAddress::Any), 19996);

	return a.exec();
}
