#include "Header.h"
#include <string.h>
#include <gtk/gtk.h>



int main( int argc, char *argv[])
{


  gtk_init(&argc, &argv);
  Random_Setting();
  Window_Setting();
  Card_Setting();
  //Label_Setting();
  button_select_color(data);
  button_color_setting("#000000");
  Widget_Show();


  return 0;
}
