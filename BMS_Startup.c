#include "BMS_Common_Include.h"

int main()
{
  /*System init*/
  void Fc_start_timer(void);
  Fc_System_init();
  /********/
  Fc_Cyclic_task();
}
