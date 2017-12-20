#ifndef SERVICECOMPANYSHORT_H
#define SERVICECOMPANYSHORT_H

#include <QMetaType>
#include <QString>
#include "models/Service/baseserviceshort.h"

class ServiceShort : public BaseServiceShort
{
public:
    ServiceShort(int id = 0, const QString& label = "", int lowerPrice = 0,
                        int topPrice = 0, const QString& companyLabel = "",
                        int companyId = 0);

    int getCompanyId() const;
    void setCompanyId(int companyId);

    const QString& getCompanyLabel() const;
    void setCompanyLabel(const QString& companyLabel);

private:
    int m_companyId;
    QString m_companyLabel;
};

Q_DECLARE_METATYPE(ServiceShort)

#endif // SERVICECOMPANYSHORT_H
