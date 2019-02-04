#include "ResumePanel.h"

ResumePanel::ResumePanel(QWidget *parent)
	: QScrollArea(parent),
	resume(new QWidget())
{
	QPalette pal;
	pal.setColor(QPalette::Background, Qt::blue);
	resume->resize(794, 1123);
	resume->setAutoFillBackground(true);
	resume->setPalette(pal);
	this->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
	this->setWidget(resume);
}

ResumePanel::~ResumePanel()
{
	if (resume != nullptr)
	{
		delete resume;
		resume = nullptr;
	}
}
