/********************************************************************\
 * GroupP.h -- the main data structure of the program               *
 * Copyright (C) 1997 Robin D. Clark                                *
 * Copyright (C) 1997, 1998, 1999, 2000 Linas Vepstas               *
 *                                                                  *
 * This program is free software; you can redistribute it and/or    *
 * modify it under the terms of the GNU General Public License as   *
 * published by the Free Software Foundation; either version 2 of   *
 * the License, or (at your option) any later version.              *
 *                                                                  *
 * This program is distributed in the hope that it will be useful,  *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of   *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the    *
 * GNU General Public License for more details.                     *
 *                                                                  *
 * You should have received a copy of the GNU General Public License*
 * along with this program; if not, contact:                        *
 *                                                                  *
 * Free Software Foundation           Voice:  +1-617-542-5942       *
 * 59 Temple Place - Suite 330        Fax:    +1-617-542-2652       *
 * Boston, MA  02111-1307,  USA       gnu@gnu.org                   *
 *                                                                  *
\********************************************************************/

/*
 * FILE:
 * GroupP.h
 *
 * FUNCTION:
 * This is the *private* account group structure.
 * This header should *not* be included by any code outside of the
 * engine.
 *
 */

#ifndef __XACC_ACCOUNT_GROUP_P_H__
#define __XACC_ACCOUNT_GROUP_P_H__

#include "config.h"
#include "BackendP.h"
#include "GNCId.h"
#include "Transaction.h"


/** STRUCTS *********************************************************/
struct _account_group {
  /* The flags: */
  unsigned int saved : 1;
  /* unsigned int new   : 1; */
  
  Account *parent;                 /* back-pointer to parent */

  int      numAcc;                 /* number of accounts in array */
  Account  **account;              /* array of account pointers   */

  Backend *backend;                /* persistant storage backend */

  /* cached parameters */
  double balance;
};

#endif /* __XACC_ACCOUNT_GROUP_P_H__ */