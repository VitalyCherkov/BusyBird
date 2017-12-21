#ifndef SHORTCOMPANYINFO_H
#define SHORTCOMPANYINFO_H

#include <QString>
#include "models/Company/detailcompanylocation.h"

class CompanyShort : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int id READ getId WRITE setId NOTIFY idChanged)
    Q_PROPERTY(const QString& label READ getLabel WRITE setLabel NOTIFY labelChanged)
    Q_PROPERTY(const QString& description READ getDescription WRITE setDescription NOTIFY descriptionChanged)
    Q_PROPERTY(const QString& timeDescription READ getTimeDescription WRITE setTimeDescription NOTIFY timeDescriptionChanged)
    Q_PROPERTY(DetailCompanyLocation* location READ getLocation WRITE setLocation NOTIFY locationChanged)
public:
    CompanyShort(QObject* parent = Q_NULLPTR,
                     int id = 0, const QString& label = "",
                     const QString& description = "",
                     DetailCompanyLocation* location = Q_NULLPTR);

    virtual ~CompanyShort() = default;

    int getId() const;
    void setId(int id);

    const QString& getLabel() const;
    void setLabel(const QString& label);

    const QString& getDescription() const;
    void setDescription(const QString& description);

    const QString& getTimeDescription() const;
    void setTimeDescription(const QString& timeDescription);

    DetailCompanyLocation *getLocation() const;
    void setLocation(DetailCompanyLocation *location);

signals:
    void idChanged(int);
    void labelChanged(const QString&);
    void descriptionChanged(const QString&);
    void timeDescriptionChanged(const QString&);
    void locationChanged(DetailCompanyLocation*);

protected:
    int m_id;
    QString m_label;
    QString m_description;
    QString m_timeDescription;
    DetailCompanyLocation* m_location;
};

#endif // SHORTCOMPANYINFO_H
