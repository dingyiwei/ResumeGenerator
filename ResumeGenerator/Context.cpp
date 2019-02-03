#include "Context.h"

QWidget* Context::getCurrentActivateComponent()
{
	return currentActiveComponent;
}

void Context::setCurrentActiveComponent(QWidget *widget)
{
	currentActiveComponent = widget;
}

Context::~Context()
{
}
