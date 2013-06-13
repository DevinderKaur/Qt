#ifndef WIDGET_H
#define WIDGET_H
 
#include <QtGui>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QPainter>
#include <QWidget>

class Widget : public QWidget
{
 Q_OBJECT
 // Public function defined 
     public:
 Widget(QWidget *parent = 0);
 ~Widget();
 // Private datatypes
     private:
 QLineEdit *line1;
 QLabel *output;
 QPushButton *add;
 // Protected function paint event
    protected:
 void paintEvent(QPaintEvent *event);
};

#endif
