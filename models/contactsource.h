#ifndef CONTACTSOURCE_H
#define CONTACTSOURCE_H

#include <QMetaType>
#include <QString>

class ContactSource
{
public:
    explicit ContactSource(const QString& label = "");
    const QString& getLabel() const;
    void setLabel(const QString& label);
private:
    QString label;
};

Q_DECLARE_METATYPE(ContactSource)

#endif // CONTACTSOURCE_H
