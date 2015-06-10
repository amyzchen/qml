#ifndef MAIN_H
#define MAIN_H

#include <QDateTime>
#include <QObject>

class ApplicationData : public QObject
{
    Q_OBJECT
public:
    ApplicationData() {}
    ~ApplicationData() {}
    Q_INVOKABLE QDateTime getCurrentDateTime() const {
        return QDateTime::currentDateTime();
    }
};

#endif // MAIN_H
