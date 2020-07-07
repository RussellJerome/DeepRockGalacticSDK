#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_MasteryBar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_MasteryBar.ITM_MasteryBar_C.SetMasteryData
struct UITM_MasteryBar_C_SetMasteryData_Params
{
	class AFSDPlayerState**                            Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HasMasteryLevels;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_MasteryBar.ITM_MasteryBar_C.AddMasteryBox
struct UITM_MasteryBar_C_AddMasteryBox_Params
{
	class UWidget**                                    Content;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ITM_MasteryBar.ITM_MasteryBar_C.CreateMasteryLevels
struct UITM_MasteryBar_C_CreateMasteryLevels_Params
{
	int*                                               maxMastery;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               CurrentMastery;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMasteryItem>                        masteryLevels;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ITM_MasteryBar.ITM_MasteryBar_C.PreConstruct
struct UITM_MasteryBar_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_MasteryBar.ITM_MasteryBar_C.ItemUpgradePurchased
struct UITM_MasteryBar_C_ItemUpgradePurchased_Params
{
};

// Function ITM_MasteryBar.ITM_MasteryBar_C.ExecuteUbergraph_ITM_MasteryBar
struct UITM_MasteryBar_C_ExecuteUbergraph_ITM_MasteryBar_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_MasteryBar.ITM_MasteryBar_C.OnItemRewarded__DelegateSignature
struct UITM_MasteryBar_C_OnItemRewarded__DelegateSignature_Params
{
	struct FMasteryItem*                               Reward;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
