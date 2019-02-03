#pragma once

#include <qwidget.h>

class Context
{
public:
	Context() = delete;
	~Context();

	static QWidget* getCurrentActivateComponent();
	static void setCurrentActiveComponent(QWidget *widget);

private:
	static QWidget *currentActiveComponent;
};

