#ifndef SERVICEPRICEINFO_H
#define SERVICEPRICEINFO_H

#include <QObject>
#include <QString>
#include <QMetaType>

class PriceInfo : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int lower READ getLower WRITE setLower NOTIFY lowerChanged)
    Q_PROPERTY(int top READ getTop WRITE setTop NOTIFY topChanged)
    Q_PROPERTY(const QString& details READ getDetails WRITE setDetails NOTIFY detailsChanged)

public:
    PriceInfo(QObject* parent = Q_NULLPTR, int lowerPrice = 0, int topPrice = 0,
                     const QString& details = "");
    virtual ~PriceInfo() = default;

    int getLower() const;
    void setLower(int lower);

    int getTop() const;
    void setTop(int top);

    const QString& getDetails() const;
    void setDetails(const QString& details);

    void setPrice(int lower, int top);

signals:
    void lowerChanged(int);
    void topChanged(int);
    void detailsChanged(const QString&);

private:
    int m_lower;
    int m_top;
    QString m_details;
};

#endif // SERVICEPRICEINFO_H
