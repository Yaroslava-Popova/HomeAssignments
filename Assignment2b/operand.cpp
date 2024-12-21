/* Popova Yaroslava
 st132757@sudent.spbu.ru
*/

#include "operation.h"

bool operand(std::string oper)
{
     bool digit = true;
     for (int i = 0; i < oper.length(); i++)
 {
      if (oper[i] == '/' || oper[i] == '-' || oper[i] == '+' || oper[i] == '*')
  {
       digit = false;
       break;
  }
 }
     return digit;
}
