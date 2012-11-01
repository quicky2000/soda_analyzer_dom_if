/*
    This file is part of osm_diff_analyzer_dom_if, Interface definitions 
    of DOM based Openstreetmap diff analyzers
    Copyright (C) 2012  Julien Thevenon ( julien_thevenon at yahoo.fr )

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>
*/
#ifndef _DOM_ANALYZER_GENERIC_IF_H_
#define _DOM_ANALYZER_GENERIC_IF_H_

namespace osm_diff_analyzer_dom_if
{
  template <class T>
    class dom_analyzer_generic_if
    {
    public:
      typedef T node_type;

      virtual void analyze(const T & p_tree)=0;
      virtual ~dom_analyzer_generic_if(void){}
    };
}
#endif // _DOM_ANALYZER_GENERIC_IF_H_
//EOF
