#include "card.h"
#include "pinwindow.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>
//#include <rest.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "App_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }

    Card w;
    w.restIsPinCorrect("1", "1221");
    w.show();
    return a.exec();
}
