#ifndef TREEWIDGET_H
#define TREEWIDGET_H

#include <QWidget>
#include <QtWidgets>
#include <binaryTree.h>

namespace Ui {
class TreeWidget;
}

class TreeWidget : public QWidget
{
    Q_OBJECT

public:
    explicit TreeWidget(QWidget *parent = nullptr);
    ~TreeWidget();

private slots:
    void on_quitButton_clicked();

    void on_insertButton_clicked();

private:
    Ui::TreeWidget *ui;
    QGraphicsScene* mainScene;
    BST* tree;
    double mainSceneWidth;
    double mainSceneHeight;

};

#endif // TREEWIDGET_H