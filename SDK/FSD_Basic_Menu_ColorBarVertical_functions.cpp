// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Basic_Menu_ColorBarVertical_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Basic_Menu_ColorBarVertical.Basic_Menu_ColorBarVertical_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_Menu_ColorBarVertical_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Menu_ColorBarVertical.Basic_Menu_ColorBarVertical_C.PreConstruct");

	UBasic_Menu_ColorBarVertical_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_Menu_ColorBarVertical.Basic_Menu_ColorBarVertical_C.ExecuteUbergraph_Basic_Menu_ColorBarVertical
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_Menu_ColorBarVertical_C::ExecuteUbergraph_Basic_Menu_ColorBarVertical(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Menu_ColorBarVertical.Basic_Menu_ColorBarVertical_C.ExecuteUbergraph_Basic_Menu_ColorBarVertical");

	UBasic_Menu_ColorBarVertical_C_ExecuteUbergraph_Basic_Menu_ColorBarVertical_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
