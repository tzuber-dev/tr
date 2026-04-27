#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/hello.hpp"

TEST_CASE("cometogether function works" ) {

Link item1("item1");
    Link item2("item2");

    Node node1(item1);
    Node node2(item2);

    node1.cometogether(& node2);







};


TEST_CASE("Adding new nodes") {
    Link item1("item1");
    Link item2("item2");


    Node node1(item1);
    Node node2(item2);


    node1.cometogether(& node2);
    node1.cometogether(& node2);

};


