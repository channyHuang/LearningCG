#include "qtcgtest.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QtCgTest w;
	w.show();
	return a.exec();
}
