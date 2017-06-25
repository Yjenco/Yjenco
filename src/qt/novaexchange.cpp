#include "ui_novaexchange.h"
#include "guiutil.h"
#include "bitcoingui.h"
#include "util.h"
#include "main.h"
#include <QtCore>
#include <QtGui>
#include <QtWebKit>

NovaExchange::NovaExchange(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NovaExchange),
    model(0)
{
    ui->setupUi(this);
}
    void NovaExchange::setModel(WalletModel *model)
{
    this->model = model;
    if(!model)
        return;
}

NovaExchange::~NovaExchange()
{
    delete ui;
}