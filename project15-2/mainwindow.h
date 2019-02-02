#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>

QT_BEGIN_NAMESPACE
 class QLabel;
 class QPainter;
QT_END_NAMESPACE

class MainWindow :public QMainWindow
{
	Q_OBJECT
	 public:
      MainWindow();
     protected:
      void paintEvent (QPaintEvent *event);
     private:
      QLabel *fileLabel;
      QPainter *p;
      QImage newImage;  
};
#endif