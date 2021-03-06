#ifndef BINARYDIALOG_H
#define BINARYDIALOG_H

#include <QDialog>
#include <xdbf.h>

namespace Ui {
class BinaryDialog;
}

class BinaryDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit BinaryDialog(QWidget *parent, Setting_Entry *entry);
    ~BinaryDialog();
    
private slots:
    void on_pushButton_clicked();

private:
    Ui::BinaryDialog *ui;
    Setting_Entry *se;
};

#endif // BINARYDIALOG_H
