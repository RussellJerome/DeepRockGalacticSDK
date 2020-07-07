// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Icon_ClassLevel_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Icon_ClassLevel.Icon_ClassLevel_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIcon_ClassLevel_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Icon_ClassLevel.Icon_ClassLevel_C.PreConstruct");

	UIcon_ClassLevel_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Icon_ClassLevel.Icon_ClassLevel_C.ExecuteUbergraph_Icon_ClassLevel
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIcon_ClassLevel_C::ExecuteUbergraph_Icon_ClassLevel(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Icon_ClassLevel.Icon_ClassLevel_C.ExecuteUbergraph_Icon_ClassLevel");

	UIcon_ClassLevel_C_ExecuteUbergraph_Icon_ClassLevel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
