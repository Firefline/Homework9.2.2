#include <QCoreApplication>
#include <QAbstractNetworkCache>
#include <QNetworkDiskCache>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QSql>
#include <QSqlDatabase>
#include <iostream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QSqlDatabase sqlDatabase = QSqlDatabase::database();
    QNetworkAccessManager *manager;

    std::cout << "Hello world!" << std::endl;

    return a.exec();
}
