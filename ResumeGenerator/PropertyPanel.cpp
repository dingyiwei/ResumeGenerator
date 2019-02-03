#include "PropertyPanel.h"

PropertyPanel::PropertyPanel(QWidget *parent)
	: QScrollArea(parent)
{
	QPalette pal;
	pal.setColor(QPalette::Background, Qt::green);
	this->setAutoFillBackground(true);
	this->setPalette(pal);
}

PropertyPanel::~PropertyPanel()
{
}
