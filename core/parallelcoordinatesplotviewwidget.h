#ifndef PARALLELCOORDINATESPLOTVIEWWIDGET_H
#define PARALLELCOORDINATESPLOTVIEWWIDGET_H
#include <visualisation/core/visualisationviewwidget.h>

namespace Visualisation {
class ParallelCoordinatesPlotViewWidget : public VisualisationViewWidget
{
public:
    explicit ParallelCoordinatesPlotViewWidget(QWidget *parent = 0);
    void initialise();
};

}

#endif // PARALLELCOORDINATESPLOTVIEWWIDGET_H
