#ifndef MOVESDIALOG_H
#define MOVESDIALOG_H

#include <QDialog>

namespace Ui {
class Movesdialog;
}

class Movesdialog : public QDialog
{
    Q_OBJECT

public:
    explicit Movesdialog(QWidget *parent = nullptr);
    ~Movesdialog();

private:
    Ui::Movesdialog *ui;
};

#endif // MOVESDIALOG_H
