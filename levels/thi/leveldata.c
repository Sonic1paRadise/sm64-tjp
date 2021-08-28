#include <ultra64.h>
#include "sm64.h"
#include "surface_terrains.h"
#include "moving_texture_macros.h"
#include "level_misc_macros.h"
#include "macro_preset_names.h"
#include "special_preset_names.h"
#include "textures.h"
#include "dialog_ids.h"
#define		STAGE13_FOG_R		41/3
#define		STAGE13_FOG_G		41/3
#define		STAGE13_FOG_B		197/3
#define		STAGE13_FOG_START	970
#include "make_const_nonconst.h"
#include "levels/thi/texture.inc.c"
#include "levels/thi/areas/1/1/model.inc.c" // Area 2 defines a share path to load these DLs as part of its geo script.
#include "levels/thi/areas/1/2/model.inc.c"
#include "levels/thi/areas/1/3/model.inc.c"
#include "levels/thi/areas/1/4/model.inc.c"
#include "levels/thi/areas/1/5/model.inc.c"
#include "levels/thi/areas/2/1/model.inc.c" // This looks a little weird being here but look at the usage and it makes sense.
#include "levels/thi/areas/1/6/model.inc.c"
#include "levels/thi/areas/1/7/model.inc.c"
#include "levels/thi/areas/3/1/model.inc.c"
#include "levels/thi/areas/3/2/model.inc.c"
#include "levels/thi/areas/3/3/model.inc.c"
#include "levels/thi/areas/3/4/model.inc.c"
#include "levels/thi/areas/1/collision.inc.c"
#include "levels/thi/areas/2/collision.inc.c"
#include "levels/thi/areas/3/collision.inc.c"
#include "levels/thi/areas/1/macro.inc.c"
#include "levels/thi/areas/2/macro.inc.c"
#include "levels/thi/areas/3/macro.inc.c"
#include "levels/thi/areas/1/6/collision.inc.c"
#include "levels/thi/areas/1/trajectory.inc.c"
#include "levels/thi/areas/1/movtext.inc.c"
#include "levels/thi/areas/2/movtext.inc.c"
