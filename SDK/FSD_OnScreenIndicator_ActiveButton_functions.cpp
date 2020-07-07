// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_OnScreenIndicator_ActiveButton_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OnScreenIndicator_ActiveButton.OnScreenIndicator_ActiveButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOnScreenIndicator_ActiveButton_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_ActiveButton.OnScreenIndicator_ActiveButton_C.PreConstruct");

	UOnScreenIndicator_ActiveButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnScreenIndicator_ActiveButton.OnScreenIndicator_ActiveButton_C.ExecuteUbergraph_OnScreenIndicator_ActiveButton
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOnScreenIndicator_ActiveButton_C::ExecuteUbergraph_OnScreenIndicator_ActiveButton(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_ActiveButton.OnScreenIndicator_ActiveButton_C.ExecuteUbergraph_OnScreenIndicator_ActiveButton");

	UOnScreenIndicator_ActiveButton_C_ExecuteUbergraph_OnScreenIndicator_ActiveButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
