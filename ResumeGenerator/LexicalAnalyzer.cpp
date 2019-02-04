#include "LexicalAnalyzer.h"

#include <qregularexpression.h>

QVector<QString> LexicalAnalyzer::analyze(const QString &text)
{
	QVector<QString> tokens;

	// get the special tokens ([]{}():) variable names and variable contents
	QRegularExpression re("[\\{\\}\\(\\)\\:]|\".*\"|[a-zA-Z0-9]+");
	auto iter = re.globalMatch(text);
	while (iter.hasNext())
	{
		auto match = iter.next();
		tokens.append(match.captured(0));
	}

	return tokens;
}
