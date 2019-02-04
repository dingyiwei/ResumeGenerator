#pragma once

#include <QWidget>
#include <qvector.h>

#include "ComponentWidget.h"

class ComponentPanel : public QWidget
{
	Q_OBJECT

public:
	ComponentPanel(QWidget *parent = Q_NULLPTR);
	~ComponentPanel();

private:
	QVector<ComponentWidget> components;
};
