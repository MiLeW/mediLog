#ifndef MEDILOG_H
#define MEDILOG_H

#include <QMainWindow>

namespace Ui {
class mediLog;
}

class mediLog : public QMainWindow
{
    Q_OBJECT

public:
    explicit mediLog(QWidget *parent = 0);
    ~mediLog();

private:
    Ui::mediLog *ui;
};

#endif // MEDILOG_H
