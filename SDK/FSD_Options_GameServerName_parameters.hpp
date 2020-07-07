#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Options_GameServerName_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Options_GameServerName.Options_GameServerName_C.UINeedsUpdate
struct UOptions_GameServerName_C_UINeedsUpdate_Params
{
};

// Function Options_GameServerName.Options_GameServerName_C.ShowOptions
struct UOptions_GameServerName_C_ShowOptions_Params
{
};

// Function Options_GameServerName.Options_GameServerName_C.Construct
struct UOptions_GameServerName_C_Construct_Params
{
};

// Function Options_GameServerName.Options_GameServerName_C.BndEvt__Basic_TextInputField_K2Node_ComponentBoundEvent_0_OnTextCommitted__DelegateSignature
struct UOptions_GameServerName_C_BndEvt__Basic_TextInputField_K2Node_ComponentBoundEvent_0_OnTextCommitted__DelegateSignature_Params
{
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	unsigned char*                                     CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_GameServerName.Options_GameServerName_C.UpdateName
struct UOptions_GameServerName_C_UpdateName_Params
{
	class FString*                                     NewValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function Options_GameServerName.Options_GameServerName_C.ExecuteUbergraph_Options_GameServerName
struct UOptions_GameServerName_C_ExecuteUbergraph_Options_GameServerName_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
