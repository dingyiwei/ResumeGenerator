#pragma once

#include <QtWidgets/QMainWindow>

#include "ResumePanel.h"
#include "PropertyPanel.h"
#include "ComponentPanel.h"

#include "ui_ResumeGenerator.h"

class ResumeGenerator : public QMainWindow
{
	Q_OBJECT

public:
	ResumeGenerator(QWidget *parent = Q_NULLPTR);
	~ResumeGenerator();

private:
	Ui::ResumeGeneratorClass ui;

	QHBoxLayout *generalLayout;
	ResumePanel *resumePanel;
	PropertyPanel *propertyPanel;
	ComponentPanel *componentPanel;
};
