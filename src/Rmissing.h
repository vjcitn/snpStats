/* This function is declared in the R source package, in src/include/Defn.h, 
   and defined in src/main/attrib.c, but not declared in any of the "user"
   include files. There is probably a way of avoiding its use */

/* R_data_class is non-API and dropped after 4.6.0 */

#include <Rversion.h>

#if R_VERSION < R_Version(4, 6, 0)
# define R_class(x) R_data_class(x, FALSE)
SEXP R_data_class(SEXP obj, Rboolean singleString);
#endif
