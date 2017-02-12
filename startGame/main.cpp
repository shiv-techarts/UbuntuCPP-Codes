#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include "myRect.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QGraphicsScene * scene = new QGraphicsScene();

    myRect * rect = new myRect();

    rect->setRect(0,0,100,100);
    rect->setFlag(QGraphicsItem::ItemIsFocusable);
    rect->setFocus();

    scene->addItem(rect);

    QGraphicsView * view = new QGraphicsView(scene);

    view->show();
    return a.exec();
}
