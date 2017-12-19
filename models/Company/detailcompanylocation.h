#ifndef DETAILCOMPANYLOCATION_H
#define DETAILCOMPANYLOCATION_H

#include <QObject>
#include <QString>

class DetailCompanyLocation : public QObject
{
    Q_OBJECT
    Q_PROPERTY(const QString& region READ getRegion WRITE setRegion NOTIFY regionChanged)
    Q_PROPERTY(const QString& district READ getDistrict WRITE setDistrict NOTIFY districtChanged)
    Q_PROPERTY(const QString& address READ getAddress WRITE setAddress NOTIFY addressChanged)

public:
    DetailCompanyLocation(const QString& region = "",
                          const QString& district = "",
                          const QString& address = "",
                          QObject* parent = Q_NULLPTR);

    const QString& getRegion() const;
    void setRegion(const QString& region);

    const QString& getDistrict() const;
    void setDistrict(const QString& district);

    const QString& getAddress() const;
    void setAddress(const QString& address);

signals:
    void regionChanged(const QString&);
    void districtChanged(const QString&);
    void addressChanged(const QString&);
private:
    QString m_region;
    QString m_district;
    QString m_address;
};

#endif // DETAILCOMPANYLOCATION_H
