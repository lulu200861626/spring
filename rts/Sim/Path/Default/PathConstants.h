/* This file is part of the Spring engine (GPL v2 or later), see LICENSE.html */

#ifndef PATH_CONSTANTS_HDR
#define PATH_CONSTANTS_HDR

#include <limits>
#include "Sim/Misc/GlobalConstants.h"

const float PATHCOST_INFINITY = std::numeric_limits<float>::infinity();

// NOTE:
//     PF and PE both use a PathNodeBuffer of size MAX_SEARCHED_NODES,
//     thus MAX_SEARCHED_NODES_{PF, PE} MUST be <= MAX_SEARCHED_NODES
const unsigned int MAX_SEARCHED_NODES    = 10000U;
const unsigned int MAX_SEARCHED_NODES_PF = MAX_SEARCHED_NODES;
const unsigned int MAX_SEARCHED_NODES_PE = MAX_SEARCHED_NODES;

// PathManager distance thresholds (to use PF or PE)
const float DETAILED_DISTANCE     = 25;
const float ESTIMATE_DISTANCE     = 55;
const float MIN_ESTIMATE_DISTANCE = 40;
const float MIN_DETAILED_DISTANCE = 12;

const unsigned int PATHESTIMATOR_VERSION = 45;
const unsigned int MEDRES_PE_BLOCKSIZE =  8;
const unsigned int LOWRES_PE_BLOCKSIZE = 32;
const unsigned int SQUARES_TO_UPDATE = 600;
const unsigned int MAX_SEARCHED_NODES_ON_REFINE = 2000;

const unsigned int PATH_HEATMAP_XSCALE = 1; // wrt. gs->hmapx
const unsigned int PATH_HEATMAP_ZSCALE = 1; // wrt. gs->hmapy
const unsigned int PATH_FLOWMAP_XSCALE = 8; // wrt. gs->mapx
const unsigned int PATH_FLOWMAP_ZSCALE = 8; // wrt. gs->mapy

const unsigned int PATH_DIRECTIONS = 8;
const unsigned int PATH_DIRECTION_VERTICES = PATH_DIRECTIONS >> 1;

// PE-only flags
const unsigned int PATHDIR_LEFT       = 0; // -x
const unsigned int PATHDIR_LEFT_UP    = 1; // -x-z
const unsigned int PATHDIR_UP         = 2; // -z
const unsigned int PATHDIR_RIGHT_UP   = 3; // +x-z
const unsigned int PATHDIR_RIGHT      = 4; // +x
const unsigned int PATHDIR_RIGHT_DOWN = 5; // +x+z
const unsigned int PATHDIR_DOWN       = 6; // +z
const unsigned int PATHDIR_LEFT_DOWN  = 7; // -x+z

// PF-only flags
const unsigned int PATHOPT_RIGHT     =   1; //+x
const unsigned int PATHOPT_LEFT      =   2; //-x
const unsigned int PATHOPT_UP        =   4; //-z
const unsigned int PATHOPT_DOWN      =   8; //+z
const unsigned int PATHOPT_AXIS_DIRS = (PATHOPT_RIGHT | PATHOPT_LEFT | PATHOPT_UP | PATHOPT_DOWN);

// PF and PE flags
const unsigned int PATHOPT_START     =  16;
const unsigned int PATHOPT_OPEN      =  32;
const unsigned int PATHOPT_CLOSED    =  64;
const unsigned int PATHOPT_FORBIDDEN = 128;
const unsigned int PATHOPT_BLOCKED   = 256;
const unsigned int PATHOPT_OBSOLETE  = 512;

#endif
