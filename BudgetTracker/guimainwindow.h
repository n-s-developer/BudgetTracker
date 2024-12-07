#ifndef GUIMAINWINDOW_H
#define GUIMAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>

#include "GuiMgrIfc.h"
#include "GuiMgr.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class GuiMainWindow;
}
QT_END_NAMESPACE

class GuiMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    GuiMainWindow(QWidget *parent = nullptr);
    ~GuiMainWindow();

private slots:
    void on_pushButtonUpdateBudget_clicked();

private:
    Ui::GuiMainWindow *ui;
    GuiMgrIfc* GuiPtr = new GuiMgr();

};
#endif // GUIMAINWINDOW_H
