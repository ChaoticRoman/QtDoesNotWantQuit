#include "quitter.h"

#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);
    Quitter q;
    return app.exec();
}
