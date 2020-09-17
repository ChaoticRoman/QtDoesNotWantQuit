#include "quitter.h"

#include <QCoreApplication>
#include <QDebug>
#include <QTimer>

Quitter::Quitter(): QObject(nullptr)
{
    QTimer::singleShot(0, [this]() { onStart(); });
}

void Quitter::onStart()
{
    qDebug() << "I am here!";
    QCoreApplication::exit(0);
}
