// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_MasteryUnlockLine_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_MasteryUnlockLine.UI_MasteryUnlockLine_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_MasteryUnlockLine_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasteryUnlockLine.UI_MasteryUnlockLine_C.PreConstruct");

	UUI_MasteryUnlockLine_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MasteryUnlockLine.UI_MasteryUnlockLine_C.ExecuteUbergraph_UI_MasteryUnlockLine
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_MasteryUnlockLine_C::ExecuteUbergraph_UI_MasteryUnlockLine(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasteryUnlockLine.UI_MasteryUnlockLine_C.ExecuteUbergraph_UI_MasteryUnlockLine");

	UUI_MasteryUnlockLine_C_ExecuteUbergraph_UI_MasteryUnlockLine_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
