/* 

                          Firewall Builder

                 Copyright (C) 2008 NetCitadel, LLC

  Author:  Vadim Kurland <vadim@fwbuilder.org>

  $Id$

  This program is free software which we release under the GNU General Public
  License. You may redistribute and/or modify this program under the terms
  of that license as published by the Free Software Foundation; either
  version 2 of the License, or (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.
 
  To get a copy of the GNU General Public License, write to the Free Software
  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

*/


#ifndef __HELP_H_
#define __HELP_H_

#include "../../config.h"
#include "SimpleTextView.h"



class Help : public SimpleTextView
{
    
public:
    
    Help(QWidget *parent, const QString &_file, const QString &title);
    
    virtual ~Help() {};

    void scrollToAnchor(const QString &anchor);

    static QString getHelpFileContents(const QString &help_file);
    static bool getFile(const QString &help_file, const QString &locale,
                        QFile &file);

};

#endif 
