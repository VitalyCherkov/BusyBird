#include "filters.h"

Filters::Filters(QObject* parent) :
    QObject(parent)
{ }

int Filters::getCategoryId() const
{
    return m_categoryId;
}

void Filters::setCategoryId(int categoryId)
{
    m_categoryId = categoryId;
}
