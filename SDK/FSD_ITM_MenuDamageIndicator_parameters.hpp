#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_MenuDamageIndicator_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_MenuDamageIndicator.ITM_MenuDamageIndicator_C.PreConstruct
struct UITM_MenuDamageIndicator_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_MenuDamageIndicator.ITM_MenuDamageIndicator_C.OnHit
struct UITM_MenuDamageIndicator_C_OnHit_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageClass**                               DamageClass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              anyHealthLost;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_MenuDamageIndicator.ITM_MenuDamageIndicator_C.OnAnimFinished
struct UITM_MenuDamageIndicator_C_OnAnimFinished_Params
{
};

// Function ITM_MenuDamageIndicator.ITM_MenuDamageIndicator_C.SetMenu
struct UITM_MenuDamageIndicator_C_SetMenu_Params
{
	class UUserWidget**                                EscapeMenu;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ITM_MenuDamageIndicator.ITM_MenuDamageIndicator_C.ExecuteUbergraph_ITM_MenuDamageIndicator
struct UITM_MenuDamageIndicator_C_ExecuteUbergraph_ITM_MenuDamageIndicator_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
