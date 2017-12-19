#ifndef SERVICECOMPANYSHORT_H
#define SERVICECOMPANYSHORT_H

#include <QMetaType>
#include <QString>

class ServiceCompanyShort
{
public:
    ServiceCompanyShort(int id = 0, const QString& label = "",
                        const QString& companyLabel = "", int lowerPrice = 0,
                        int topPrice = 0);
    // virtual ~ServiceCompanyShort() = default;

    int getId() const;
    void setId(int id);

    const QString& getLabel() const;
    void setLabel(const QString& label);

    const QString& getCompanyLabel() const;
    void setCompanyLabel(const QString& companyLabel);

    int getLowerPrice() const;
    void setLowerPrice(int lowerPrice);

    int getTopPrice() const;
    void setTopPrice(int topPrice);

    void setPrice(int lowerPrice, int topPrice);

protected:
    int id;
    QString label;
    QString companyLabel;
    int lowerPrice;
    int topPrice;
};

Q_DECLARE_METATYPE(ServiceCompanyShort)

#endif // SERVICECOMPANYSHORT_H
