// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_Forge_SchematicList_Separator_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_Forge_SchematicList_Separator.UI_Forge_SchematicList_Separator_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Forge_SchematicList_Separator_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_SchematicList_Separator.UI_Forge_SchematicList_Separator_C.PreConstruct");

	UUI_Forge_SchematicList_Separator_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Forge_SchematicList_Separator.UI_Forge_SchematicList_Separator_C.ExecuteUbergraph_UI_Forge_SchematicList_Separator
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Forge_SchematicList_Separator_C::ExecuteUbergraph_UI_Forge_SchematicList_Separator(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_SchematicList_Separator.UI_Forge_SchematicList_Separator_C.ExecuteUbergraph_UI_Forge_SchematicList_Separator");

	UUI_Forge_SchematicList_Separator_C_ExecuteUbergraph_UI_Forge_SchematicList_Separator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
