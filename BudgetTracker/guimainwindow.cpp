#include "guimainwindow.h"
#include "ui_guimainwindow.h"

GuiMainWindow::GuiMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::GuiMainWindow)
{
    ui->setupUi(this);
}

GuiMainWindow::~GuiMainWindow()
{
    delete ui;
}

void GuiMainWindow::on_pushButtonUpdateBudget_clicked()
{
    QString str = ui->lineEditBudgetInput->text();

    if (ui->radioButtonExpense->isChecked() == true)
    {
        GuiPtr->SetAsExpense(str);
    }
    else if (ui->radioButtonIncome->isChecked() == true)
    {
        GuiPtr->SetAsIncome(str);
    }

    ui->labelBudget->setText(GuiPtr->GetBudget());
}

void GuiMainWindow::ErrorPopUp(int hataMesaji)
{
    switch (hataMesaji)
    {
        case 0:
        {
            QMessageBox::information(this, "ERROR", "INVALID ENTRY");
            break;
        }
    }

}
