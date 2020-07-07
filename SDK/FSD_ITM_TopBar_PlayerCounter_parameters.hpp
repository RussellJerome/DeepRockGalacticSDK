#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_TopBar_PlayerCounter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_TopBar_PlayerCounter.ITM_TopBar_PlayerCounter_C.GetPlayerClass
struct UITM_TopBar_PlayerCounter_C_GetPlayerClass_Params
{
	class UClass*                                      OutPlayerCharacter;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_TopBar_PlayerCounter.ITM_TopBar_PlayerCounter_C.Refresh
struct UITM_TopBar_PlayerCounter_C_Refresh_Params
{
};

// Function ITM_TopBar_PlayerCounter.ITM_TopBar_PlayerCounter_C.Construct
struct UITM_TopBar_PlayerCounter_C_Construct_Params
{
};

// Function ITM_TopBar_PlayerCounter.ITM_TopBar_PlayerCounter_C.ExecuteUbergraph_ITM_TopBar_PlayerCounter
struct UITM_TopBar_PlayerCounter_C_ExecuteUbergraph_ITM_TopBar_PlayerCounter_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
