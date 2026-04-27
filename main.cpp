#include <iostream>

#include "src/hello.hpp"






int main() {
 Link item1("Gold");
 Link item2("Silver");
 Link item3("Bronze");


 Node hat(item1);
 Node seconditem(item2);
 Node seconditem2(item3);

hat.cometogether(&seconditem);
 seconditem.cometogether(&seconditem2);
 LinkList menu(&hat);


 menu.traversingaround();

}