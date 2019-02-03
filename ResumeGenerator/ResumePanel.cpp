#include "ResumePanel.h"

ResumePanel::ResumePanel(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	QPalette pal;
	pal.setColor(QPalette::Background, Qt::blue);
	this->setAutoFillBackground(true);
	this->setPalette(pal);
}

ResumePanel::~ResumePanel()
{
}
