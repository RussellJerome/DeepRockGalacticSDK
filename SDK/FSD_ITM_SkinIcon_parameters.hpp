#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_SkinIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_SkinIcon.ITM_SkinIcon_C.SetBucketVisibility
struct UITM_SkinIcon_C_SetBucketVisibility_Params
{
	bool*                                              ShowBucket;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_SkinIcon.ITM_SkinIcon_C.SetOutlineTint
struct UITM_SkinIcon_C_SetOutlineTint_Params
{
	struct FLinearColor*                               Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_SkinIcon.ITM_SkinIcon_C.GetIsLocked
struct UITM_SkinIcon_C_GetIsLocked_Params
{
	bool                                               IsLocked;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_SkinIcon.ITM_SkinIcon_C.SetSize
struct UITM_SkinIcon_C_SetSize_Params
{
	float*                                             InSize;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_SkinIcon.ITM_SkinIcon_C.SetSkin
struct UITM_SkinIcon_C_SetSkin_Params
{
	class UItemSkin**                                  InSkin;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              InIsLocked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              InIsDefault;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_SkinIcon.ITM_SkinIcon_C.PreConstruct
struct UITM_SkinIcon_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_SkinIcon.ITM_SkinIcon_C.ExecuteUbergraph_ITM_SkinIcon
struct UITM_SkinIcon_C_ExecuteUbergraph_ITM_SkinIcon_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
