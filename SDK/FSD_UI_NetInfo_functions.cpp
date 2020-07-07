// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_NetInfo_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_NetInfo.UI_NetInfo_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_NetInfo_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NetInfo.UI_NetInfo_C.PreConstruct");

	UUI_NetInfo_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NetInfo.UI_NetInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_NetInfo_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NetInfo.UI_NetInfo_C.Construct");

	UUI_NetInfo_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NetInfo.UI_NetInfo_C.OnShowNetInfoChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_NetInfo_C::OnShowNetInfoChanged(bool* NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NetInfo.UI_NetInfo_C.OnShowNetInfoChanged");

	UUI_NetInfo_C_OnShowNetInfoChanged_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NetInfo.UI_NetInfo_C.SlowTick
// (BlueprintCallable, BlueprintEvent)

void UUI_NetInfo_C::SlowTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NetInfo.UI_NetInfo_C.SlowTick");

	UUI_NetInfo_C_SlowTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NetInfo.UI_NetInfo_C.ExecuteUbergraph_UI_NetInfo
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_NetInfo_C::ExecuteUbergraph_UI_NetInfo(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NetInfo.UI_NetInfo_C.ExecuteUbergraph_UI_NetInfo");

	UUI_NetInfo_C_ExecuteUbergraph_UI_NetInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
