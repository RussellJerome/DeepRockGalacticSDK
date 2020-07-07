// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_Forge_SchematicIconBG_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_Forge_SchematicIconBG.UI_Forge_SchematicIconBG_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Forge_SchematicIconBG_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_SchematicIconBG.UI_Forge_SchematicIconBG_C.PreConstruct");

	UUI_Forge_SchematicIconBG_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Forge_SchematicIconBG.UI_Forge_SchematicIconBG_C.ExecuteUbergraph_UI_Forge_SchematicIconBG
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Forge_SchematicIconBG_C::ExecuteUbergraph_UI_Forge_SchematicIconBG(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_SchematicIconBG.UI_Forge_SchematicIconBG_C.ExecuteUbergraph_UI_Forge_SchematicIconBG");

	UUI_Forge_SchematicIconBG_C_ExecuteUbergraph_UI_Forge_SchematicIconBG_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
