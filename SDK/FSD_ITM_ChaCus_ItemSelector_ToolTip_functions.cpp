// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_ChaCus_ItemSelector_ToolTip_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_ChaCus_ItemSelector_ToolTip.ITM_ChaCus_ItemSelector_ToolTip_C.SetText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UITM_ChaCus_ItemSelector_ToolTip_C::SetText(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSelector_ToolTip.ITM_ChaCus_ItemSelector_ToolTip_C.SetText");

	UITM_ChaCus_ItemSelector_ToolTip_C_SetText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSelector_ToolTip.ITM_ChaCus_ItemSelector_ToolTip_C.ExecuteUbergraph_ITM_ChaCus_ItemSelector_ToolTip
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_ItemSelector_ToolTip_C::ExecuteUbergraph_ITM_ChaCus_ItemSelector_ToolTip(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSelector_ToolTip.ITM_ChaCus_ItemSelector_ToolTip_C.ExecuteUbergraph_ITM_ChaCus_ItemSelector_ToolTip");

	UITM_ChaCus_ItemSelector_ToolTip_C_ExecuteUbergraph_ITM_ChaCus_ItemSelector_ToolTip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
