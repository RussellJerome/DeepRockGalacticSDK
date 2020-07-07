#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WND_Jobs_Entry_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WND_Jobs_Entry_Base.WND_Jobs_Entry_Base_C.Fold
struct UWND_Jobs_Entry_Base_C_Fold_Params
{
};

// Function WND_Jobs_Entry_Base.WND_Jobs_Entry_Base_C.SetData
struct UWND_Jobs_Entry_Base_C_SetData_Params
{
	class UCampaign**                                  Campaign;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_Jobs_Entry_Base.WND_Jobs_Entry_Base_C.Refresh
struct UWND_Jobs_Entry_Base_C_Refresh_Params
{
};

// Function WND_Jobs_Entry_Base.WND_Jobs_Entry_Base_C.Unfold
struct UWND_Jobs_Entry_Base_C_Unfold_Params
{
};

// Function WND_Jobs_Entry_Base.WND_Jobs_Entry_Base_C.ExecuteUbergraph_WND_Jobs_Entry_Base
struct UWND_Jobs_Entry_Base_C_ExecuteUbergraph_WND_Jobs_Entry_Base_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_Jobs_Entry_Base.WND_Jobs_Entry_Base_C.Updated__DelegateSignature
struct UWND_Jobs_Entry_Base_C_Updated__DelegateSignature_Params
{
};

// Function WND_Jobs_Entry_Base.WND_Jobs_Entry_Base_C.Unfolded__DelegateSignature
struct UWND_Jobs_Entry_Base_C_Unfolded__DelegateSignature_Params
{
	class UWND_Jobs_Entry_Base_C**                     entry;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
