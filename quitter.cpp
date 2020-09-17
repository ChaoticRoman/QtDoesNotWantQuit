#include "quitter.h"

#include <QCoreApplication>
#include <QDebug>

Quitter::Quitter(): QObject(nullptr)
{
    connect(this, &Quitter::start, this, &Quitter::onStart);
    emit start();
}

void Quitter::onStart()
{
    qDebug() << "I am here!";
    QCoreApplication::exit(0);
}