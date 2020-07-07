#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_CharacterShowroomController_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_CharacterShowroomController.BP_CharacterShowroomController_C.Receive_CharacterShown
struct UBP_CharacterShowroomController_C_Receive_CharacterShown_Params
{
};

// Function BP_CharacterShowroomController.BP_CharacterShowroomController_C.EquipWeapon
struct UBP_CharacterShowroomController_C_EquipWeapon_Params
{
	EItemCategory*                                     Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CharacterShowroomController.BP_CharacterShowroomController_C.ExecuteUbergraph_BP_CharacterShowroomController
struct UBP_CharacterShowroomController_C_ExecuteUbergraph_BP_CharacterShowroomController_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
