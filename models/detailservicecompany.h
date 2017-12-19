#ifndef SERVICECOMPANYDETAIL_H
#define SERVICECOMPANYDETAIL_H

#include "shortcompanyinfo.h"
#include "servicepriceinfo.h"

class DetailServiceCompany : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString label READ getLabel WRITE setLabel NOTIFY labelChanged)
    Q_PROPERTY(QString description READ getDescription WRITE setDescription NOTIFY descriptionChanged)
    Q_PROPERTY(QString categoryName READ getCategoryName WRITE setCategoryName NOTIFY categoryNameChanged)
    Q_PROPERTY(unsigned int categoryId READ getCategoryId WRITE setCategoryId NOTIFY categoryIdChanged)
    Q_PROPERTY(ServicePriceInfo* price READ getPrice NOTIFY priceChanged)
    Q_PROPERTY(ShortCompanyInfo* company READ getCompany NOTIFY companyChanged)
    Q_PROPERTY(bool isFavourite READ getIsFavourite WRITE setIsFavourite NOTIFY isFavouriteChanged)
public:
    DetailServiceCompany(QObject* parent = Q_NULLPTR);

    const QString& getLabel() const;
    void setLabel(const QString& getLabel);

    const QString& getDescription() const;
    void setDescription(const QString& getDescription);

    const QString& getCategoryName() const;
    void setCategoryName(const QString& getCategoryName);

    unsigned int getCategoryId() const;
    void setCategoryId(unsigned int getCategoryId);

    ServicePriceInfo* getPrice() const;
    void setPrice(ServicePriceInfo* price);

    ShortCompanyInfo* getCompany() const;
    void setCompany(ShortCompanyInfo* company);

    bool getIsFavourite() const;
    void setIsFavourite(bool isFavourite);
    Q_INVOKABLE void changeIsFavourite();

signals:
    void labelChanged(const QString&);
    void descriptionChanged(const QString&);
    void categoryNameChanged(const QString&);
    void categoryIdChanged(unsigned int);
    void priceChanged(ServicePriceInfo*);
    void companyChanged(ShortCompanyInfo*);
    void isFavouriteChanged(bool);

private:
    QString m_label;
    QString m_description;
    QString m_categoryName;
    unsigned int m_categoryId;
    ServicePriceInfo* m_price;
    ShortCompanyInfo* m_company;
    bool m_isFavourite;
};

#endif // SERVICECOMPANYDETAIL_H
