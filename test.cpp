#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "Catch.h"
#include "Symmetric_connected_graph.h"

TEST_CASE( "Los nodos basicos funcionan correctamente", "[Node_basic]" ) {
    Node_basic nodo1(10);
    Node_basic nodo2(10);
    Node_basic nodo3(123);
    SECTION( "Los nodos se crean y permiten el acceso correctamente" ) {
        REQUIRE( nodo1.getid() == 10 );
        REQUIRE( nodo2.getid() == 10 );
        REQUIRE( nodo3.getid() == 123 );
    }
    SECTION( "los nodos se comparan correctamente " ) {
        REQUIRE( nodo1.equals(nodo1));
        REQUIRE( nodo1 == nodo2);
        REQUIRE( nodo1 != nodo3);
    }
}
TEST_CASE( "Los vertices funcionan correctamente", "[vertice]" ) {
    Node_basic nodo_1(10);
    Node_basic nodo_2(2);
    vertice vert(&nodo_1,&nodo_2,100);
    vertice vert_2(&nodo_2,&nodo_1,100);
    SECTION("Carga y accede correctamente a los vertices"){
        REQUIRE( vert.getStart() == &nodo_1 );
        REQUIRE( vert.getEnd() == &nodo_2 );
        REQUIRE( vert.getCost() == 100 );
    }
    SECTION("Permite comparar vertices"){
        REQUIRE(vert == vert);
        REQUIRE(vert != vert_2);
    }
}
TEST_CASE( "La clase grafo funciona correctamente", "[Graph]" ) {
    Node_basic nodo_1(10);
    Node_basic nodo_2(2);
    vertice vert(&nodo_1,&nodo_2,100);
    Graph graph;
    SECTION( "Permite agregar nodos y vertices a un grafo" ) {
            graph.addNode(nodo_1);
            graph.addNode(nodo_2);
        SECTION("-Almacena y accede correctamente a los nodos"){
            REQUIRE( graph.getNodes().at(0) == nodo_1 );
            REQUIRE(graph.getNodes().at(1) == nodo_2);
        }
        SECTION("-Almacena y accede correctamente a los vertices"){
            graph.addVertice(vert);
            REQUIRE( graph.getVertices().at(0) == vert);
        }
    }
    SECTION( "Permite obtener correctamente las listas de incidencia"){
        SECTION("Muestra correctamente la lista de destinos"){
            REQUIRE(graph.getVerticesFrom(nodo_1).at(0) == vert);
        }
        SECTION("Muestra correctamente la lista de origenes"){
            REQUIRE(graph.getVerticesTo(nodo_2).at(0) == vert);
        }
    }
}
