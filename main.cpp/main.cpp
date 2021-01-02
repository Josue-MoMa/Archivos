#include <QCoreApplication>
#include <QDir>
#include <QDebug>
#include <QString>
#include <QFileInfo>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QDir directorio;

    directorio.setPath("C:/");
    qDebug() << directorio[0] << endl;

    foreach(QFileInfo mitm, directorio.entryInfoList()){

        if (mitm.isDir()) qDebug() << "Dir: " << mitm.absoluteFilePath();
        if (mitm.isFile()) qDebug() << "File: " << mitm.absoluteFilePath();
    }

    return a.exec();
}
