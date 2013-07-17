#ifndef TRACKMAPGEN_H
#define TRACKMAPGEN_H

#include <QMainWindow>
#include <QFileDialog>

namespace Ui {
class TrackMapGen;
}

class TrackMapGen : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit TrackMapGen(QWidget *parent = 0);
    ~TrackMapGen();
    
private slots:
    void on_actionOpen_triggered();

private:
    Ui::TrackMapGen *ui;
    QString filename;
};

#endif // TRACKMAPGEN_H
