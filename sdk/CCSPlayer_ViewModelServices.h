#include "CCSGOViewModel.h"
#include "CBaseViewModel.h"
#include "schemasystem.h"

class CCSPlayer_ViewModelServices {
public:
  SCHEMA_FIELD(CHandle<CCSGOViewModel>, CCSPlayer_ViewModelServices, m_hViewModel);
  SCHEMA_FIELD(CHandle<CBaseViewModel>, CCSPlayer_ViewModelServices, m_hViewModel);

};
