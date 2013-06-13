#include "widget.h"

Widget::Widget(QWidget *parent)
     : QWidget(parent)
{
    resize(500,500);

    // Creating Text boxes
    x1 = new QLineEdit(this);
    x1->move(150,25);
    y1 = new QLineEdit(this);
    y1->move(150,50);
    x2 = new QLineEdit(this);
    x2->move(150,75);
    y2 = new QLineEdit(this);
    y2->move(150,100);

    // Creating Labels
    start_x = new QLabel("point 1 x : ", this);
    start_x->move(25,25);
    start_y = new QLabel("point 1 y : ", this);
    start_y->move(25,50);
    end_x = new QLabel("point 2 x : ", this);
    end_x->move(25,75);
    end_y = new QLabel("point 2 y : ", this);
    end_y->move(25,100);

    // Creating button
    add = new QPushButton("Create Line", this);
    add->move(350,55);

    // connecting button to update function
    connect(add, SIGNAL(clicked()), this, SLOT(update()));
}

// Paint event which causes painting of line
void Widget::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.setPen(Qt::blue);
    // 200 and 100 has been added so as to shift the co-ordinates for proper visibility on screen
    painter.drawLine(100+x1->text().toInt(),200+y1->text().toInt(),100+x2->text().toInt(),200+y2->text().toInt());
}

Widget::~Widget()
{
}
