#include "contactsource.h"

ContactSource::ContactSource(const QString& label):
        label(label)
{ }

const QString& ContactSource::getLabel() const {
    return label;
}

void ContactSource::setLabel(const QString& label) {
    this->label = label;
}



