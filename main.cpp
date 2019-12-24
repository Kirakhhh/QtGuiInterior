#include "QtGuiInterior.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QtGuiInterior w;
	w.show();
	return a.exec();
}
