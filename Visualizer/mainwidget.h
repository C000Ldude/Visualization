#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include "sortwidget.h"
#include "treewidget.h"

namespace Ui {
class MainWidget;
}

class MainWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MainWidget(QWidget *parent = nullptr);
    ~MainWidget();

private slots:
    void on_sortPushButton_clicked();

    void on_treePushButton_clicked();

private:
    Ui::MainWidget *ui;
    SortWidget* sortWidget;
    TreeWidget* treeWidget;
};

#endif // MAINWIDGET_H