#ifndef BASEDETAILSERVICE_H
#define BASEDETAILSERVICE_H

#include <QObject>
#include "priceinfo.h"

class BaseServiceDetail : public QObject
{
    Q_OBJECT
    Q_PROPERTY(const QString& label READ getLabel WRITE setLabel NOTIFY labelChanged)
    Q_PROPERTY(const QString& description READ getDescription WRITE setDescription NOTIFY descriptionChanged)
    Q_PROPERTY(const QString& categoryName READ getCategoryName WRITE setCategoryName NOTIFY categoryNameChanged)
    Q_PROPERTY(unsigned int categoryId READ getCategoryId WRITE setCategoryId NOTIFY categoryIdChanged)
    Q_PROPERTY(PriceInfo* price READ getPrice NOTIFY priceChanged)
    Q_PROPERTY(bool isFavourite READ getIsFavourite WRITE setIsFavourite NOTIFY isFavouriteChanged)
public:
    BaseServiceDetail(QObject* parent = Q_NULLPTR);
    virtual ~BaseServiceDetail() = default;

    const QString& getLabel() const;
    void setLabel(const QString& getLabel);

    const QString& getDescription() const;
    void setDescription(const QString& getDescription);

    const QString& getCategoryName() const;
    void setCategoryName(const QString& getCategoryName);

    unsigned int getCategoryId() const;
    void setCategoryId(unsigned int getCategoryId);

    PriceInfo* getPrice() const;
    Q_INVOKABLE void setPrice(PriceInfo* price);

    bool getIsFavourite() const;
    void setIsFavourite(bool isFavourite);
    Q_INVOKABLE void changeIsFavourite();

signals:
    void labelChanged(const QString&);
    void descriptionChanged(const QString&);
    void categoryNameChanged(const QString&);
    void categoryIdChanged(unsigned int);
    void priceChanged(PriceInfo*);
    void isFavouriteChanged(bool);

protected:
    QString m_label;
    QString m_description;
    QString m_categoryName;
    unsigned int m_categoryId;
    PriceInfo* m_price;
    bool m_isFavourite;
};

#endif // BASEDETAILSERVICE_H
