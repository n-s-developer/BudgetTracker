#ifndef GUIMAINWINDOW_H
#define GUIMAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <ObserverIfc.h>
#include <BudgetMgrCls.h>

QT_BEGIN_NAMESPACE
namespace Ui {
class GuiMainWindow;
}
QT_END_NAMESPACE

class GuiMainWindow : public QMainWindow, public ObserverIfc
{
    Q_OBJECT

public:
    GuiMainWindow(QWidget *parent = nullptr);
    ~GuiMainWindow();
    void UpdateBalance(double balance) override;

private slots:
    void on_pushButtonUpdateBudget_clicked();

private:
    Ui::GuiMainWindow *ui;
    void SetupBudget(BudgetMgrCls* budget);

};
#endif // GUIMAINWINDOW_H
