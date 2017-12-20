#ifndef ABSTRACTCONTROLLER_H
#define ABSTRACTCONTROLLER_H

#include <QObject>

class AbstractController : public QObject
{
    Q_OBJECT
public:
    //static AbstractController* getInstance() = 0;
    //void get(QObject* dist, const QJsonDocument* request) = 0;
    //void post() = 0;

signals:
    void completed();

private:
    AbstractController();
};

#endif // ABSTRACTCONTROLLER_H
