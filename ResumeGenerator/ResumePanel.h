#pragma once

#include <qscrollarea.h>

class ResumePanel : public QScrollArea
{
	Q_OBJECT

public:
	ResumePanel(QWidget *parent = Q_NULLPTR);
	~ResumePanel();

private:
	QWidget *resume;
};
