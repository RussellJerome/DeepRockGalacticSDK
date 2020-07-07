// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WarningBox_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WarningBox.WarningBox_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWarningBox_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WarningBox.WarningBox_C.PreConstruct");

	UWarningBox_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WarningBox.WarningBox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWarningBox_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WarningBox.WarningBox_C.Construct");

	UWarningBox_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WarningBox.WarningBox_C.ExecuteUbergraph_WarningBox
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWarningBox_C::ExecuteUbergraph_WarningBox(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WarningBox.WarningBox_C.ExecuteUbergraph_WarningBox");

	UWarningBox_C_ExecuteUbergraph_WarningBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
