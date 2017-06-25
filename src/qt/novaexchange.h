#ifndef NOVAEXCHANGE_H
#define NOVAEXCHANGE_H

#include <QWidget>

namespace Ui {
	class NovaExchange;
}
class WalletModel;

class NovaExchange : public QWidget
{
    Q_OBJECT

public:
    explicit NovaExchange(QWidget *parent = 0);
    void setModel(WalletModel *model);


virtual ~NovaExchange();    


private:
	Ui::NovaExchange *ui;
    WalletModel *model;
};

#endif // NOVAEXCHANGE_H
