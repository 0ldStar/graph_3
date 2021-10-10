#include <QApplication>
#include <QOpenGLWidget>
#include <QTranslator>
#include <vector>
#include "Lines.h"

#define WIDTH 600
#define HEIGHT 600
#define COUNT 60
using namespace std;

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    vector<vector<int>> arr{{10, 2},
                            {2, 4},
                            {-12, 8},
                            {9, -30},
                            {15, 15},
                            {7, 18},
                            {10, 2}};
    vector<vector<int>> map;
    Lines window(WIDTH, HEIGHT, COUNT, arr, map);
    window.setWindowTitle("Lines");
    window.show();
    return a.exec();
}
