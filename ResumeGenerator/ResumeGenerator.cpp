#include "ResumeGenerator.h"
#include <qfile.h>
#include <qtextstream.h>
#include "LexicalAnalyzer.h"

ResumeGenerator::ResumeGenerator(QWidget *parent)
	: QMainWindow(parent),
	resumePanel(new ResumePanel()),
	propertyPanel(new PropertyPanel()),
	componentPanel(new ComponentPanel()),
	generalLayout(new QHBoxLayout(this))
{
	ui.setupUi(this);
	ui.centralWidget->setLayout(generalLayout);
	QPalette pal;
	pal.setColor(QPalette::Background, QColor(235, 235, 235));
	this->setAutoFillBackground(true);
	this->setPalette(pal);

	generalLayout->addWidget(componentPanel);
	generalLayout->setStretchFactor(componentPanel, 1);
	generalLayout->addWidget(resumePanel);
	generalLayout->setStretchFactor(resumePanel, 2);
	generalLayout->addWidget(propertyPanel);
	generalLayout->setStretchFactor(propertyPanel, 1);

	// for test, will be removed
	QFile filein("template.txt");
	if (filein.open(QFile::ReadOnly))
	{
		QByteArray data = filein.readAll();
		QString text(data);
		filein.close();
		LexicalAnalyzer::analyze(text);
	}
}

ResumeGenerator::~ResumeGenerator()
{
	delete resumePanel;
	delete propertyPanel;
	delete componentPanel;
	delete generalLayout;
}
