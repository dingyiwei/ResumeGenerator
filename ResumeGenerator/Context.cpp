#include "Context.h"

QWidget* Context::currentActiveComponent = nullptr;

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
	if (currentActiveComponent != nullptr)
	{
		delete currentActiveComponent;
		currentActiveComponent = nullptr;
	}
}
