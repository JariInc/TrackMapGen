#include "trackmapgen.h"
#include "ui_trackmapgen.h"

TrackMapGen::TrackMapGen(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TrackMapGen)
{
    ui->setupUi(this);
}

TrackMapGen::~TrackMapGen()
{
    delete ui;
}

void TrackMapGen::on_actionOpen_triggered()
{
    this->filename = QFileDialog::getOpenFileName(this, tr("Open Telemetry File"), QDir::homePath(), tr("iRacing Binary Telemetry  (*.ibt)"));
    ui->fileNameLabel->setText(QString("Filename: %1").arg(this->filename));
}
