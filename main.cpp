#include "graphwidget.h"
#include "planargraphwidget.h"
#include "graph_algorithm.h"
#include "test.h"
#include "MainWindow.h"

#include <QApplication>
#include <QTime>

#include "circuit_board.h"

int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    test_planarity_functions();
    /*
    my::Graph g(6);

    g.connect(0, 1);
    g.connect(0, 2);
    g.connect(0, 3);
    g.connect(0, 4);
    g.connect(0, 5);

    g.connect(1, 0);
    g.connect(1, 2);
    g.connect(1, 3);
    g.connect(1, 4);

    g.connect(2, 0);
    g.connect(2, 1);
    g.connect(2, 3);

    g.connect(3, 1);
    g.connect(3, 2);
    g.connect(3, 5);

    g.connect(5, 0);
    g.connect(5, 3);
    g.connect(5, 4);
    // g.connect(4, 5);

    // g.add_edge(7, 6);
    my::Graph t(8);

     for(my::vertex_t v = 0; v < 1000; ++v)
         for(my::vertex_t u = 0; u < 1000; ++u)
             if (rand() % 2 == false)
                 t.connect(v, u);
    //for (my::vertex_t v = 0; v < t.size() / 2; ++v) {
    //    for (my::vertex_t u = t.size() / 2 + 1; u < t.size(); ++u)
    //         if (rand() % 1 == false)
    //             t.connect(v, u);
    //}

//    for (my::Graph& g : my::graph_partitioning_in_planes(t))
//        std::cout << g << std::endl;
    auto graphs = my::graph_partitioning_in_planes(t);
    my::planar(graphs.front());
    my::ordered_embadding(graphs.front());

    // PlanarGraphWidget *widget = new PlanarGraphWidget(t);
*/
    MainWindow mainWindow;

    mainWindow.show();

    return app.exec();
}
