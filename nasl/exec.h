/* Nessus Attack Scripting Language 
 *
 * Copyright (C) 2002 - 2003 Michel Arboi and Renaud Deraison
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2,
 * as published by the Free Software Foundation
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#ifndef EXEC_H_INCLUDED
#define EXEC_H_INCLUDED

tree_cell*	nasl_exec(lex_ctxt*, tree_cell*);
int	cell_cmp(lex_ctxt*, tree_cell*, tree_cell*);
tree_cell* cell2atom(lex_ctxt*, tree_cell*);
int	check_authenticated ( lex_ctxt * );
#endif
