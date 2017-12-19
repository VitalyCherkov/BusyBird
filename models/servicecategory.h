#ifndef SERVICECATEGORY_H
#define SERVICECATEGORY_H

#include <QMetaType>
#include <QString>

class ServiceCategory
{
public:
    ServiceCategory(int id = 0, const QString& label = "");
    int getId() const;
    void setId(int value);

    const QString& getLabel() const;
    void setLabel(const QString &value);

private:
    int id;
    QString label;
};

Q_DECLARE_METATYPE(ServiceCategory)

#endif // SERVICECATEGORY_H
