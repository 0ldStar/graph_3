//
// Created by 777 on 14.09.2021.
//

#ifndef UNTITLED14_LINES_H
#define UNTITLED14_LINES_H

#include <QWidget>

#include <vector>
#include "sizes.h"

using namespace std;

class Lines : public QWidget {

public:
    Lines(int width, int height, int count, vector<vector<int>> &arr, vector<vector<int>> &map);

protected:
    void paintEvent(QPaintEvent *event);

    void keyPressEvent(QKeyEvent *event);

    void drawCDA(int X1, int X2, int Y1, int Y2, QPainter &painter);

    void drawAxes(QPainter &painter) const;

    void drawGrid(QPainter &painter) const;

    void decardToDigital(int x, int y, int &X, int &Y) const;

    void mapClean();

    void drawMediumPixel(int x, int y, QPainter &painter);

    void drawMap(QPainter &painter);

    int findMin();

    int findMax();

    void fill();

    void drawPoligon(QPainter &painter);

private:
    int count;
    sizes size;
    vector<vector<int>> &points;
    vector<vector<int>> &map;
};

#endif //UNTITLED14_LINES_H
