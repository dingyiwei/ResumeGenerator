#pragma once

#include <qscrollarea.h>
#include <qvector.h>
#include "ui_PropertyPanel.h"

class PropertyPanel : public QScrollArea
{
	Q_OBJECT

public:
	PropertyPanel(QWidget *parent = Q_NULLPTR);
	~PropertyPanel();

private:
	QVector<QWidget *> properties;
};
