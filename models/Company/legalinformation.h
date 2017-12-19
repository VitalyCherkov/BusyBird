#ifndef LEGALINFORMATION_H
#define LEGALINFORMATION_H

#include <QObject>

class LegalInformation : public QObject
{
    Q_OBJECT
public:
    explicit LegalInformation(QObject *parent = nullptr);

signals:

private:
};

#endif // LEGALINFORMATION_H
