#ifndef BASESERVICE_H
#define BASESERVICE_H

#include <QString>

class BaseServiceShort
{
public:
    BaseServiceShort(int id = 0, const QString& label = "",
                     const QString& lowerPrice = "", const QString& topPrice = "");
    virtual ~BaseServiceShort() = default;

    int getId() const;
    void setId(int getId);

    const QString& getLabel() const;
    void setLabel(const QString& getLabel);

    const QString& getLowerPrice() const;
    void setLowerPrice(const QString& getLowerPrice);

    const QString& getTopPrice() const;
    void setTopPrice(const QString& getTopPrice);

protected:
    int m_id;
    QString m_label;
    QString m_lowerPrice;
    QString m_topPrice;
};

#endif // BASESERVICE_H
