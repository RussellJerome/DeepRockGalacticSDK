#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_CharacterBuffIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_CharacterBuffIcon.ITM_CharacterBuffIcon_C.PreConstruct
struct UITM_CharacterBuffIcon_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CharacterBuffIcon.ITM_CharacterBuffIcon_C.Construct
struct UITM_CharacterBuffIcon_C_Construct_Params
{
};

// Function ITM_CharacterBuffIcon.ITM_CharacterBuffIcon_C.OnTemporaryBuffChanged
struct UITM_CharacterBuffIcon_C_OnTemporaryBuffChanged_Params
{
	class UTemporaryBuff**                             buff;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APlayerCharacter**                           AffectedPlayer;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CharacterBuffIcon.ITM_CharacterBuffIcon_C.ExecuteUbergraph_ITM_CharacterBuffIcon
struct UITM_CharacterBuffIcon_C_ExecuteUbergraph_ITM_CharacterBuffIcon_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
