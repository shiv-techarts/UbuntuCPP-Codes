#include <QGraphicsRectItem>

#ifndef MYRECT_H
#define MYRECT_H

class myRect: public QGraphicsRectItem {
  public:
    void keyPressEvent(QKeyEvent *event);
};

#endif // MYRECT_H

