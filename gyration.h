#ifndef _GYRATION_H_
#define _GYRATION_H_

/** \file gyration.h Routines for calculating gyration of a vector of beads. */

#include "int3d.h"
#include "fitness_private.h"

/* coords - the coordinates for the beads
 * size   - the number of beads
 * center - the center points (baricenter) for the beads.
 *
 * Returns the gyration radius for the given beads.
 */
double calc_gyration(const int3d *coords, int size, DPoint center);

/* coordsSC - the coordinates for all side chain beads
 * hpChain - the string representing the types of the side chain beads
 * hpSize - the number of side chain beads
 * centerH and centerP are the center points (baricenter) for H beads and P beads respectively.
 *
 * Returns a DPair where the first element is the gyration for H beads.
 * The second element is gyration for P beads.
 */
DPair calc_gyration_joint(const int3d *coordsSC, const HPElem * hpChain, int hpSize, DPoint centerH, DPoint centerP);

/* Calculate MaxRG_H which is the radius of gyration for the hydrophobic beads
 *   considering the protein completely unfolded
 *
 * hpChain - the string representing the types of the side chain beads
 * hpSize - the number of side chain beads
 */
double calc_max_gyration(const HPElem * hpChain, int hpSize);


#endif
