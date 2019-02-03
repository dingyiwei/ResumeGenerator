#pragma once

#include <QWidget>
#include "ui_ComponentPanel.h"

class ComponentPanel : public QWidget
{
	Q_OBJECT

public:
	ComponentPanel(QWidget *parent = Q_NULLPTR);
	~ComponentPanel();

private:
	Ui::ComponentPanel ui;
};
