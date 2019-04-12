/*
 * This file has been modified by Modelon AB, changes are Copyright
 * (c) 2014 Modelon AB.
 * 
 * Original copyright notice:
 * 
 * Copyright (c) 2002, The Regents of the University of California. 
 * Produced at the Lawrence Livermore National Laboratory.
 * Written by S.D. Cohen, A.C. Hindmarsh, R. Serban, 
 *            D. Shumaker, and A.G. Taylor.
 * UCRL-CODE-155951    (CVODE)
 * UCRL-CODE-155950    (CVODES)
 * UCRL-CODE-155952    (IDA)
 * UCRL-CODE-237203    (IDAS)
 * UCRL-CODE-155953    (KINSOL)
 * All rights reserved. 

 * This file is part of SUNDIALS.

 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 
 * 1. Redistributions of source code must retain the above copyright
 * notice, this list of conditions and the disclaimer below.
 * 
 * 2. Redistributions in binary form must reproduce the above copyright
 * notice, this list of conditions and the disclaimer (as noted below)
 * in the documentation and/or other materials provided with the
 * distribution.
 * 
 * 3. Neither the name of the UC/LLNL nor the names of its contributors
 * may be used to endorse or promote products derived from this software
 * without specific prior written permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * REGENTS OF THE UNIVERSITY OF CALIFORNIA, THE U.S. DEPARTMENT OF ENERGY
 * OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * 
 * Additional BSD Notice
 * ---------------------
 * 1. This notice is required to be provided under our contract with
 * the U.S. Department of Energy (DOE). This work was produced at the
 * University of California, Lawrence Livermore National Laboratory
 * under Contract No. W-7405-ENG-48 with the DOE.
 * 
 * 2. Neither the United States Government nor the University of
 * California nor any of their employees, makes any warranty, express
 * or implied, or assumes any liability or responsibility for the
 * accuracy, completeness, or usefulness of any information, apparatus,
 * product, or process disclosed, or represents that its use would not
 * infringe privately-owned rights.
 * 
 * 3. Also, reference herein to any specific commercial products,
 * process, or services by trade name, trademark, manufacturer or
 * otherwise does not necessarily constitute or imply its endorsement,
 * recommendation, or favoring by the United States Government or the
 * University of California. The views and opinions of authors expressed
 * herein do not necessarily state or reflect those of the United States
 * Government or the University of California, and shall not be used for
 * advertising or product endorsement purposes.
 */

#ifdef __cplusplus  /* wrapper to enable C++ usage */
extern "C" {
#endif

#ifndef _PINV_H
#define _PINV_H

#include "kinsol_jmod.h"
#include <sundials/sundials_dense.h>

/*
 * -----------------------------------------------------------------
 * Function : KINpinv
 * -----------------------------------------------------------------
 * A call to the KINpinv function links the main solver with the
 * pinv linear solver. Its arguments are as follows:
 *
 * kinmem - pointer to an internal memory block allocated during a
 *          prior call to KINCreate
 *
 * N      - problem size
 *
 * The return value of KINpinv is one of:
 *    0                         if successful
 *    int different from zero   otherwise
 * -----------------------------------------------------------------
 */

  SUNDIALS_EXPORT int KINPinv(void *kinmem, int N);

#endif

#ifdef __cplusplus
}
#endif
