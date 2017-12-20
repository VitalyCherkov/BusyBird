#ifndef CONTACT_H
#define CONTACT_H

#include <QString>

class Contact
{
public:
    Contact();
    const QString& getLink() const;
    void setLink(const QString &link);

    const QString& getDescription() const;
    void setDescription(const QString &description);

    const QString& getSourceType() const;
    void setSourceType(const QString &sourceType);

private:
    QString m_link;
    QString m_description;
    QString m_sourceType;
};

#endif // CONTACT_H
