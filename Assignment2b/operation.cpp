/* Popova Yaroslava
st132757@stdent.spbu.ru
*/

#include "operation.h"

void func(float *a, float *b, int *index_mass, std::string *z)
{
     if (*z == "+")
 {
       *b = (*b) + (*a);
     }else if (*z == "-")
 {
       *b = (*b) - (*a);
     }else if (*z == "*")
 {
      *b = (*b) * (*a);
     }else if (*z == "/")
 {
      *b = (*b) / (*a);
 }
        *a = 0;
        (*index_mass)--;
}
