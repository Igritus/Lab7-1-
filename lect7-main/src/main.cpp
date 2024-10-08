#include <QApplication>
#include <QDebug>
#include "form.h"



using namespace std;

int main(int argc, char *argv[]) {
  QApplication app(argc, argv);


  //hello(cin, cout);

  Form f;
  f.show();



  return app.exec();
}
