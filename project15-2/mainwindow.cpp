#include <QtGui>
#include "mainwindow.h"

QString filePath;

MainWindow::MainWindow() {
	setWindowTitle(tr("Image"));
	setFixedSize(900, 550);
	
    filePath="C:\\lab\\prog15-2\\images\\karoche.jpg";

	fileLabel = new QLabel(this);
	fileLabel->setGeometry(10, 10, 880, 50);
	fileLabel->setFont(QFont("Courier", 20, QFont::Bold));
	fileLabel->setText( "Image: " + filePath );

}

void MainWindow::paintEvent( QPaintEvent * ) {
	QPainter p(this);
	newImage.load(filePath);
	p.drawImage(5, 65, newImage);
	p.restore();
}