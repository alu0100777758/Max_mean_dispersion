#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "Catch.h"
#include "Symmetric_connected_graph.h"

TEST_CASE( "Los nodos básicos funcionan correctamente", "[Node_basic]" ) {
    Node_basic nodo(10);
    REQUIRE( nodo.Getid() == 10 );
}
TEST_CASE( "Los vertices funcionan correctamente", "[vertice]" ) {
    Node_basic nodo_1(10);
    Node_basic nodo_2(2);
    vertice vert(&nodo_1,&nodo_2,100);
        REQUIRE( vert.getStart() == &nodo_1 );
        REQUIRE( vert.getEnd() == &nodo_2 );
        REQUIRE( vert.getCost() == 100 );
}
