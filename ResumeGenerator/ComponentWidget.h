#pragma once

#include <QWidget>

class ComponentWidget : public QWidget
{
	Q_OBJECT

public:
	ComponentWidget(QWidget *parent = Q_NULLPTR);
	~ComponentWidget();
};
