/* Test 2 of strip_space.
 * $Id$
 * Description: Test strip_space with trailing space.
 *
 * Authors:
 * Matthew Mundell <matt@mundell.ukfsn.org>
 *
 * Copyright:
 * Copyright (C) 2009 Greenbone Networks GmbH
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2,
 * or, at your option, any later version as published by the Free
 * Software Foundation
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../string.h"

int
main ()
{
  char string[6];
  char *expect = "abcd";

  strncpy (string, "abcd ", 6);

  char* result = strip_space (string, string + 5);
  if (strlen (result) != 4 || strcmp (result, expect))
    return EXIT_FAILURE;

  return EXIT_SUCCESS;
}
