#ifndef DRAWSTRATEGY_H
#define DRAWSTRATEGY_H

#include <QMouseEvent>

class DrawStrategy : public QObject{
    Q_OBJECT
protected:
    QImage *m_image;
    QPainter *m_painter;
public:
    DrawStrategy() = default;
    virtual ~DrawStrategy(){}

    virtual void press(QMouseEvent *event, QImage *image) = 0;
    virtual void move(QMouseEvent *event) = 0;
    virtual void release(QMouseEvent *event) = 0;

signals:
    void updateArea(QRect);
};

#endif // DRAWSTRATEGY_H
