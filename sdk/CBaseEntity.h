#pragma once
#include <entity2/entityidentity.h>
#include <baseentity.h>
#include "schemasystem.h"
#include "ehandle.h"

inline CEntityInstance* UTIL_FindEntityByClassname(CEntityInstance* pStart, const char* name)
{
	extern CEntitySystem* g_pEntitySystem;
	CEntityIdentity* pEntity = pStart ? pStart->m_pEntity->m_pNext : g_pEntitySystem->m_EntityList.m_pFirstActiveEntity;

	for (; pEntity; pEntity = pEntity->m_pNext)
	{
		if (!strcmp(pEntity->m_designerName.String(), name))
			return pEntity->m_pInstance;
	};

	return nullptr;
}

class CNetworkTransmitComponent
{
public:
	SCHEMA_FIELD(uint8_t, CNetworkTransmitComponent, m_nTransmitStateOwnedCounter);
};

class SC_CBaseEntity : public CBaseEntity
{
public:
	SCHEMA_FIELD(int32_t, CBaseEntity, m_iHealth);
	SCHEMA_FIELD(int32_t, CBaseEntity, m_iMaxHealth);
	SCHEMA_FIELD(LifeState_t, CBaseEntity, m_lifeState);
	SCHEMA_FIELD(uint8_t, CBaseEntity, m_iTeamNum);
	SCHEMA_FIELD(float, CBaseEntity, m_flGravityScale);
};

class Z_CBaseEntity : public CBaseEntity {
   public:
    SCHEMA_FIELD(float, CBaseEntity, m_lastNetworkChange)
    SCHEMA_FIELD(CNetworkTransmitComponent*, CBaseEntity, m_NetworkTransmitComponent)
    SCHEMA_FIELD(int, CBaseEntity, m_iHealth)
    SCHEMA_FIELD(int, CBaseEntity, m_iTeamNum)
    SCHEMA_FIELD(Vector, CBaseEntity, m_vecBaseVelocity)
};