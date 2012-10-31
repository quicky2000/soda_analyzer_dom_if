#ifndef _DOM_ANALYZER_IF_H_
#define _DOM_ANALYZER_IF_H_

#include "dom_analyzer_generic_if.h"
#include "diff_analyzer_if.h"
#include "dom_tree.h"

namespace osm_diff_analyzer_dom_if
{
  class dom_analyzer_if: public osm_diff_analyzer_if::diff_analyzer_if, public dom_analyzer_generic_if<XMLNode>
  {
    public:
    inline virtual ~dom_analyzer_if(void){};
  };
}

#endif // _DOM_ANALYZER_IF_H_
//EOF
