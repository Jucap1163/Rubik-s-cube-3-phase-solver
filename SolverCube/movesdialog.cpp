#include "movesdialog.h"
#include "ui_movesdialog.h"
#include <QPixmap>

Movesdialog::Movesdialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Movesdialog)
{
    ui->setupUi(this);
    QPixmap pix("C:\\Users\\jucap\\Documents\\how-to-solve-cube-formula.png");
    int w = ui->movesLabel->width();
    int h = ui->movesLabel->height();

    ui->movesLabel->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
}

Movesdialog::~Movesdialog()
{
    delete ui;
}
