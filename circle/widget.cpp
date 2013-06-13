#include "widget.h"

Widget::Widget(QWidget *parent)
     : QWidget(parent)
{
    resize(500,500);

    // Creating Text box
    line1 = new QLineEdit(this);
    line1->move(200,25);

    // Creating Label
    output = new QLabel("Enter Diameter of circle : ", this);
    output->move(25,25);

    // Creating button
    add = new QPushButton("Create Circle", this);
    add->move(350,25);

    // connecting button to update function
    connect(add, SIGNAL(clicked()), this, SLOT(update()));
}


// Painter event to paint circle in blue colour
void Widget::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.setPen(Qt::blue);
    // center points have been given as 200 so as to get circle on screen properly
    painter.drawEllipse(200,200,line1->text().toInt(),line1->text().toInt());
}

Widget::~Widget()
{
}
