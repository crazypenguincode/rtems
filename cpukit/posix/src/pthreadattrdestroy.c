/**
 * @file
 *
 * @ingroup POSIXAPI
 *
 * @brief Thread Creation Attributes
 */

/*
 *  COPYRIGHT (c) 1989-1999.
 *  On-Line Applications Research Corporation (OAR).
 *
 *  The license and distribution terms for this file may be
 *  found in the file LICENSE in this distribution or at
 *  http://www.rtems.org/license/LICENSE.
 */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <pthread.h>
#include <errno.h>
#include <stdbool.h>

int pthread_attr_destroy(
  pthread_attr_t  *attr
)
{
  if ( !attr || !attr->is_initialized )
    return EINVAL;

  attr->is_initialized = false;
  return 0;
}
