#include "schemasystem.h"
#include "baseentity.h"
#include "CBaseFlex.h"
#include "CBaseViewModel.h"

#include "CPlayer_ItemServices.h"
#include "CBodyComponentSkeletonInstance.h"


struct Vector3 {
	float x, y, z;
};

class CNetworkViewOffsetVector {
public:
    float x; // CNetworkedQuantizedFloat
    float y; // CNetworkedQuantizedFloat
    float z; // CNetworkedQuantizedFloat
};
class CBaseModelEntity;
class CCSGOViewModel /*: public CBaseViewModel*/ {
public:
    SCHEMA_FIELD(CBodyComponent*, C_BaseEntity, m_CBodyComponent);
    SCHEMA_FIELD(CBodyComponentSkeletonInstance*, C_BaseEntity, m_pGameSceneNode);

    SCHEMA_FIELD(Vector3, CBaseFlex, m_vLookTargetPosition);
	//m_vecLastFacing CBaseViewModel
    SCHEMA_FIELD(Vector3, CBaseFlex, m_viewtarget);
    //SCHEMA_FIELD(Vector3, CBaseFlex, m_CachedViewTarget);
    SCHEMA_FIELD(CHandle<void*>, CBaseViewModel, m_iCameraAttachment);
};
