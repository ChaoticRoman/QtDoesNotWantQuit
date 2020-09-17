#include <QObject>

class Quitter: public QObject
{
    Q_OBJECT

public:
    Quitter();

signals:
    void start();

private slots:
    void onStart();
};
