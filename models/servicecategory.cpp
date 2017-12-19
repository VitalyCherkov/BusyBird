#include "servicecategory.h"

ServiceCategory::ServiceCategory(int id, const QString& label) :
    id(id),
    label(label)
{ }

int ServiceCategory::getId() const
{
    return id;
}

void ServiceCategory::setId(int value)
{
    id = value;
}

const QString& ServiceCategory::getLabel() const
{
    return label;
}

void ServiceCategory::setLabel(const QString &value)
{
    label = value;
}
