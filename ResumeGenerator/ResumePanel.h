#pragma once

#include <QWidget>
#include "ui_ResumePanel.h"

class ResumePanel : public QWidget
{
	Q_OBJECT

public:
	ResumePanel(QWidget *parent = Q_NULLPTR);
	~ResumePanel();

private:
	Ui::ResumePanel ui;
};
