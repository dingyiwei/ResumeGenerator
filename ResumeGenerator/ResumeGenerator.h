#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ResumeGenerator.h"

class ResumeGenerator : public QMainWindow
{
	Q_OBJECT

public:
	ResumeGenerator(QWidget *parent = Q_NULLPTR);

private:
	Ui::ResumeGeneratorClass ui;
};
