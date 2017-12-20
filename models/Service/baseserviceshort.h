#ifndef BASESERVICE_H
#define BASESERVICE_H

#include <QString>

class BaseServiceShort
{
public:
    BaseServiceShort(int id = 0, const QString& label = "",
                     int lowerPrice = 0, int topPrice = 0);
    virtual ~BaseServiceShort() = default;

    int getId() const;
    void setId(int getId);

    const QString& getLabel() const;
    void setLabel(const QString& getLabel);

    int getLowerPrice() const;
    void setLowerPrice(int lowerPrice);

    int getTopPrice() const;
    void setTopPrice(int topPrice);

protected:
    int m_id;
    QString m_label;
    int m_lowerPrice;
    int m_topPrice;
};

#endif // BASESERVICE_H
