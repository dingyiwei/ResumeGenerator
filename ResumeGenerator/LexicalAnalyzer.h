#pragma once

#include <qstring.h>
#include <qvector.h>

class LexicalAnalyzer
{
public:
	LexicalAnalyzer() = delete;
	~LexicalAnalyzer() = delete;

	static QVector<QString> analyze(const QString &text);
};

