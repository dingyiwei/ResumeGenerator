#include "PropertyPanel.h"

PropertyPanel::PropertyPanel(QWidget *parent)
	: QScrollArea(parent)
{

}

PropertyPanel::~PropertyPanel()
{
	for (auto propertyWidget : properties)
	{
		if (propertyWidget != nullptr)
		{
			delete propertyWidget;
			propertyWidget = nullptr;
		}
	}
	properties.clear();
}
