#include "medilog.h"
#include "ui_medilog.h"

mediLog::mediLog(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::mediLog)
{
    ui->setupUi(this);
}

mediLog::~mediLog()
{
    delete ui;
}
