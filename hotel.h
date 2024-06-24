#ifndef HOTEL_H
#define HOTEL_H
#include <QString>
class hotel
{
public:
    hotel();

    QString id;
    QString  name;
    qreal area;//qreal是float
    qreal price;
    qreal num;
    QString state;
};

#endif // HOTEL_H
